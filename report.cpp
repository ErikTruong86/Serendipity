15)<<setfill('-')<<" "<<
                       setw(15)<<setfill('-')<<" "<<
                       setw(11)<<setfill('-')<<" "<<
                       setw(10)<<setfill('-')<<" "<<
                       setw(16)<<setfill('-')<<" "<<
                       setw(13)<<setfill('-')<<" "<<setfill(' ')<<" *"<<endl;
    }

    cout<<"* "<<left<<setw(27)<<(*book).getTitle().substr(0,26)<<
                      setw(11)<<(*book).getISBN().substr(0,10)<<
                      setw(15)<<(*book).getAuthor().substr(0,14)<<
                      setw(15)<<(*book).getPub().substr(0,14)<<
                      setw(11)<<(*book).getDateAdded().substr(0,10)<<
                right<<setw(9)<<(*book).getQtyOnHand()<<" $"<<fixed<<
     setprecision(2)<<setw(14)<<(*book).getWholesale()<<" $"<<fixed<<
     setprecision(2)<<setw(11)<<(*book).getRetail()<<" *"<<endl;

    i++;
  }

  cout<<setw(121)<<setfill('*')<<"*"<<endl;

  system("pause");
  return;
}
                                                 //--------------------------------------------------------
//File name: mainmenu                                    -
//Project name Serendipity                               -
//--------------------------------------------------------
//Erik Truong etruong7@saddleback.edu                    -
//Course-Selection: CS 1B Ticket #23650                  -
//Creation Date: 1/17/19                                 -
//Date of Last Modification:  2/10/19                    -
//--------------------------------------------------------
//Purpose: Display the report menu and lets the user     -
//         choose which option they want to do           -
//--------------------------------------------------------
//Algorithm:                                             -
// Step 1:   Display all the option so the user see      -
// Step 2:   Once the user inputs their choice, check to -
//           check to see if the input value is correct. -
// Step 3:   Go into the switch loop to then outputs     -
//  unter,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4)
{
  int choice = 0;
  system("cls");
  do
  {
    cout<<"   Serendipity Booksellers"<<endl;
    cout<<"          Report"<<endl<<endl;
    cout<<"1. Inventory List"<<endl;
    cout<<"2. Inventory Wholesale Value"<<endl;
    cout<<"3. Inventory Retail value"<<endl;
    cout<<"4. Listing by Quanitity"<<endl;
    cout<<"5. Listing by Cost"<<endl;
    cout<<"6. Listing by Age"<<endl;
    cout<<"7. Return to the Main Men"<<endl<<endl;
    cout<<"Enter Your Choice:"<<endl;
    cin>>choice;
    while(choice<1 || choice>7)
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
        repList(DBSIZE, counter,list1);
        break;
      case 2:
        repWholeValue(DBSIZE,counter,list1);
        break;
      case 3:
        repRetailValue(DBSIZE,counter,list1);
        break;
      case 4:
        repQuanity(DBSIZE,counter,list2);
        break;
      case 5:
        repCostSorted(DBSIZE,counter,list3);
        break;
      case 6:
        repAge(DBSIZE,counter,list4);
        break;
      case 7:
        break;
      default:
        cout<<"Something went wrong"<<endl;
    }
    system("cls");
  }while(choice!=7);
}
