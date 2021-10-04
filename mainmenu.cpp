//--------------------------------------------------------
//File name: mainmenu.cpp                                -
//Project name Serendipity                               -
//--------------------------------------------------------
//Erik Truong etruong7@saddleback.edu                    -
//Course-Selection: CS 1B Ticket #23650                  -
//Creation Date: 4/17/19                                 -
//Date of Last Modification:  4/17/19                    -
//--------------------------------------------------------
//Purpose: Display the mainmenu and lets the user choose -
//         which option they want to do                  -
//--------------------------------------------------------
//Algorithm:                                             -
// Step 1:   Display all the option so the user see      -
// Step 2:   Once the user inputs their choice, check to -
//           check to see if the input value is correct. -
// Step 3:   Go into the switch loop to then call upon   -
//           the function which furthers go into the     -
//           program.                                    -
// Step 4:  It allows the user to choose reports now to  -
//          see the list of the pointer array.           -
//--------------------------------------------------------
//-                DATA DICTIONARY                       -
//- CONSTANTS                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ----------     -------------      --------------     -
//- DBSIZE         int                20                 -
//-                                                      -
//- VARIABLES                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ---------      -------------      --------------     -
//-  choice         int                 0                -
//-  db             **bookType          nullptr          -
//-  finder         int                 0                -
//--------------------------------------------------------

#include<iostream>
#include<fstream>
#include<string>
#include"Serendipity.h"
#include"bookType.h"
#include"orderedLinkedList.h"
using namespace std;

const int DBSIZE = 125;

int main()
{

  bookType **db = nullptr;
  db = new bookType*[DBSIZE];

  //Linked List start
  orderedLinkedList<bookType> list1, list2, list3, list4;
  list1.initializeList();
  list2.initializeList();
  list3.initializeList();
  list4.initializeList();
  bookType *temp;
  int counter = 0;
  linkedListIterator<bookType> book;
  
  for(int i = 0; i<DBSIZE; i++)
  {
    db[i] = nullptr;
  }
  int finder = 0;


  string tempTitle = "EMPTY";
  string tempIsbn = "EMPTY";
  string tempAuthor = "EMPTY";
  string tempPublisher = "EMPTY";
  string tempDate = "EMPTY";
  int tempQty = 0;
  double tempWholesale = 0;
  double tempRetail = 0;

  ifstream myFile;
  ofstream outFile;
  myFile.open("database-3.txt");
  while(!myFile.fail())
  {
    getline(myFile,tempTitle,'\n');
    getline(myFile,tempIsbn,'\n');
    getline(myFile,tempAuthor,'\n');
    getline(myFile,tempPublisher,'\n');
    getline(myFile,tempDate,'\n');
    myFile>>tempQty;
    myFile>>tempWholesale;
    myFile>>tempRetail;
    myFile.ignore(1);
    db[counter] = new bookType(tempTitle, tempIsbn, tempAuthor, tempPublisher,
                               tempDate, tempQty, tempWholesale, tempRetail);

    temp = new bookType(tempTitle, tempIsbn, tempAuthor, tempPublisher,
                         tempDate, tempQty, tempWholesale, tempRetail);
    counter++;

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
  }
  myFile.close();

/*
  linkedListIterator<bookType>book;
  for(book = list4.begin(); book!= list4.end(); ++book)
  {
    cout<<*book<<endl;
  }

  system("pause");
*/
  int choice = 0;
  system("cls");
  do{
    system("cls");
    cout<<"Serendipity Bookseller"<<endl;
    cout<<"       Main Menu"<<endl<<endl;
    cout<<"1. Cashier Module"<<endl;
    cout<<"2. Inventory Database Module"<<endl;
    cout<<"3. Report Module"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<endl;
    cout<<"enter choice"<<endl;
    cin>>choice;
    while(choice<1 || choice > 4)
    {
      if(cin.fail())
      {
        cin.clear();
        cin.ignore(200000,'\n');
        cin>>choice;
      }
    }
    switch (choice)
    {
      case 1:
        system("cls");
        cashier(db,DBSIZE,list1, list2, list3, list4);
        break;
      case 2:
        invMenu(db,DBSIZE,counter,list1, list2, list3, list4);
        break;
      case 3:
        reports(DBSIZE,counter,list1, list2, list3, list4);
        break;
      case 4:
        cout<<"GoodBye"<<endl;
        outFile.open("database.txt");
        for(book = list4.begin(); book!= list4.end(); ++book)
        {
          outFile<<*book<<endl;
        }

        system("pause");

        system("exit");
        break;
      default:
        cout<<"Something Went Wrong!"<<endl;
    }
  }while(choice !=4);

  return 0;
}
