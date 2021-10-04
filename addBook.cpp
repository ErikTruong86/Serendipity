//--------------------------------------------------------
//File name: addBook.cpp                                 -
//Project name Serendipity                               -
//--------------------------------------------------------
//Erik Truong etruong7@saddleback.edu                    -
//Course-Selection: CS 1B Ticket #23650                  -
//Creation Date: 1/17/19                                 -
//Date of Last Modification:  3/6/19                     -
//--------------------------------------------------------
//Purpose: Add Books data into the database              -
//--------------------------------------------------------
//Algorithm:   addBook                                   -
// Step 1:   Enter all data that wants to be added       -
// Step 2:   Save the database                           -
//--------------------------------------------------------
//-                DATA DICTIONARY                       -
//- CONSTANTS                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ----------     -------------      --------------     -
//-                                                      -
//-                                                      -
//- VARIABLES                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ---------      -------------      --------------     -
//- tempTitle      string             EMPTY              -
//- tempIsbn       string             EMPTY              -
//- tempAuthor     string             EMPTY              -
//- tempPublisher  string             EMPTY              -
//- tempDate       string             EMPTY              -
//- tempQty        string             EMPTY              -
//- tempWholesale  string             EMPTY              -
//- tempRetail     string             EMPTY              -
//- choice         int                0                  -
//--------------------------------------------------------
#include<iostream>
#include<string>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

void addBook(bookType **db, const int DBSIZE, int &counter, int &finder,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4)
{
  int choice = 0;

  string tempTitle = "EMPTY";
  string tempIsbn = "EMPTY";
  string tempAuthor = "EMPTY";
  string tempPublisher = "EMPTY";
  string tempDate = "EMPTY";
  int tempQty = 0;
  double tempWholesale = 0;
  double tempRetail = 0;
  bookType *temp;
  system("cls");
  do
  {
    system("cls");
    cout<<"Number of books in database so far: "<<counter<<endl;
    cout<<"(1) Enter Book Title"<<"\t\t\t"<<tempTitle<<endl;
    cout<<"(2) Enter ISBN"<<"\t\t\t\t"<<tempIsbn<<endl;
    cout<<"(3) Enter Author"<<"\t\t\t"<<tempAuthor<<endl;
    cout<<"(4) Enter Publisher"<<"\t\t\t"<<tempPublisher<<endl;
    cout<<"(5) Enter Date Added (mm/dd//yyyy)"<<"\t"<<tempDate<<endl;
    cout<<"(6) Enter Quanitity on Hand"<<"\t\t"<<tempQty<<endl;
    cout<<"(7) Enter Wholesale Cost"<<"\t\t"<<tempWholesale<<endl;
    cout<<"(8) Enter Retail Price"<<"\t\t\t"<<tempRetail<<endl;
    cout<<"(9) Save Book to Datebase"<<endl;
    cout<<"(0) Return to Inventory Menu"<<endl;
    cin>>choice;
    while(choice < 0|| choice > 9)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(200000,'\n');
        cin>>choice;
      }
    }
    switch(choice)
    {
      case 1:
        cout<<"Enter Title"<<endl;
        cin.ignore();
        getline(cin,tempTitle);
        break;
      case 2:
        cout<<"Enter ISBN"<<endl;
        cin.ignore();
        getline(cin,tempIsbn);
        break;
      case 3:
        cout<<"Enter Author"<<endl;
        cin.ignore();
        getline(cin,tempAuthor);
        break;
      case 4:
        cout<<"Enter Publisher"<<endl;
        cin.ignore();
        getline(cin,tempPublisher);
        break;
      case 5:
        cout<<"Enter Date"<<endl;
        cin.ignore();
        getline(cin,tempDate);
        break;
      case 6:
        cout<<"Enter QTY"<<endl;
        cin>>tempQty;
        break;
      case 7:
        cout<<"Enter Wholesale"<<endl;
        cin>>tempWholesale;
        break;
      case 8:
        cout<<"Enter Retail"<<endl;
        cin>>tempRetail;
        break;
      case 9:
        temp = new bookType(tempTitle, tempIsbn, tempAuthor,
                                   tempPublisher, tempDate, tempQty,
                                   tempWholesale, tempRetail);
        //original list
        list1.insert(*temp);

        //qty
        (*temp).setSortingCode(1);
        list2.insert(*temp);

        //wholesale
        (*temp).setSortingCode(2);
        list3.insert(*temp);

        //age
        (*temp).setSortingCode(3);
        list4.insert(*temp);
        bookType::incBookCount();
        counter++;
        finder++;
        break;
      case 0:
        return;
        break;
        default:
        cout<<"Didn't go into switch statement"<<endl;
    }

  }while(choice!=0 && counter < DBSIZE);

  system("Pause");
}
