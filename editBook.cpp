//--------------------------------------------------------
//File name: editBook.cpp                                -
//Project name Serendipity                               -
//--------------------------------------------------------
//Erik Truong etruong7@saddleback.edu                    -
//Course-Selection: CS 1B Ticket #23650                  -
//Creation Date: 1/17/19                                 -
//Date of Last Modification:  3/6/19                     -
//--------------------------------------------------------
//Purpose: edit books within the database                -
//--------------------------------------------------------
//Algorithm:   editBook                                  -
// Step 1:   lookUpBook is called to find the book you   -
//           want to edit and displays the info          -
// Step 2:   Choose what you want to change              -
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
//- choice1        string             n/a                -
//- choice2        int                0                  -
//- finder         int                0                  -
//--------------------------------------------------------
#include<iostream>
#include<string>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

void editBook(bookType **db, const int DBSIZE,
              orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
              orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4,string &foundWord)
{
  string choice1;
  int finder = 0;
  int choice2 = 0;
  string wordTemp;
  int intTemp = 0;
  double doubleTemp = 0.0;

  system("cls");
  lookUpBook(DBSIZE,list1,foundWord);
  cout<<"Do you want to edit this? y/n:   ";
  cin>>choice1;
  if(choice1 == "y" || choice1 == "Y")
  {
    do
    {
      system("cls");
    cout<<"(1) Edit Book Title"<<"\t\t\t"<<db[finder]->getTitle()<<endl;
    cout<<"(2) Edit ISBN"<<"\t\t\t\t"<<db[finder]->getISBN()<<endl;
    cout<<"(3) Edit Author"<<"\t\t\t\t"<<db[finder]->getAuthor()<<endl;
    cout<<"(4) Edit Publisher"<<"\t\t\t"<<db[finder]->getPub()<<endl;
    cout<<"(5) Edit Date Added (mm/dd//yyyy)"<<"\t"<<db[finder]->getDateAdded()<<endl;
    cout<<"(6) Edit Quanitity on Hand"<<"\t\t"<<db[finder]->getQtyOnHand()<<endl;
    cout<<"(7) Edit Wholesale Cost"<<"\t\t\t"<<db[finder]->getWholesale()<<endl;
    cout<<"(8) Edit Retail Price"<<"\t\t\t"<<db[finder]->getRetail()<<endl;
    cout<<"(9) Return to Inventory Menu"<<endl;
    cin>>choice2;
    while(choice2 < 1|| choice2 > 9)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(200000,'\n');
        cin>>choice2;
      }
    }
    switch(choice2)
    {
      case 1:
        cout<<"Enter Title"<<endl;
        cin.ignore();
        getline(cin,wordTemp);
        db[finder]->setBookTitle(wordTemp);
        break;
      case 2:
        cout<<"Enter ISBN"<<endl;
        cin.ignore();
        getline(cin,wordTemp);
        db[finder]->setIsbn(wordTemp);
        break;
      case 3:
        cout<<"Enter Author"<<endl;
        cin.ignore();
        getline(cin,wordTemp);
        db[finder]->setAuthor(wordTemp);
        break;
      case 4:
        cout<<"Enter Publisher"<<endl;
        cin.ignore();
        getline(cin,wordTemp);
        db[finder]->setPublisher(wordTemp);
        break;
      case 5:
        cout<<"Enter Date"<<endl;
        cin.ignore();
        getline(cin,wordTemp);
        db[finder]->setDOB(wordTemp);
        break;
      case 6:
        cout<<"Enter QTY"<<endl;
        cin>>intTemp;
        db[finder]->setQty(intTemp);
        break;
      case 7:
        cout<<"Enter Wholesale"<<endl;
        cin>>doubleTemp;
        db[finder]->setWholesale(doubleTemp);
        break;
      case 8:
        cout<<"Enter Retail"<<endl;
        cin>>doubleTemp;
        db[finder]->setRetail(doubleTemp);
        break;
      case 9:
        return;
        break;
      default:
        cout<<"Didn't go into switch statement"<<endl;
    }
  }while(choice2!=9);
  }
  else
  {
    cout<<"search for desired book again"<<endl;
    return;
  }
}
