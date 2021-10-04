#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

void repAge(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list4)
{
  int q = DBSIZE/10 + 1;
  int p = 0;
  time_t now = time(0);
  double checker = 0;
  int i = 0;
  linkedListIterator<bookType> book;
  system("cls");
  cout<<setw(121)<<setfill('*')<<"*"<<endl;
  char* dt = ctime(&now);
  cout<<"*\t\t\t\t\t\t\tSerendipity BookSellers\t\t\t\t\t\t*"<<endl;
  cout<<"*\t\t\t\t\t\t\t     Report Listing\t\t\t\t\t\t*"<<endl;
  cout<<"*\t\t"<<dt;
  cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t\t\t\t*"<<endl;
  cout<<"*"<<left<<setw(80)<<setfill(' ')<<" Title"<<"   "<<
                    setw(11)<<setfill(' ')<<" ISBN"<<"  "<<
                    setw(11)<<setfill(' ')<<" Date Added"<<"  "<<
                    setw(10)<<setfill(' ')<<" Qty O/H"<<"*"<<endl;


  cout<<"*"<<left<<setw(80)<<setfill('-')<<" "<<"   "<<
                   setw(11)<<setfill('-')<<" "<<"  "<<
                   setw(11)<<setfill('-')<<" "<<" "<<
                   setw(10)<<setfill('-')<<" "<<setfill(' ')<<" *"<<endl;
   //the upper part
//------------------------------------------------------------------------------

  for(book = list4.begin(); book != list4.end();++book)
  {
    checker = i % 20;
    if(checker == 10 || checker == 0)
    {

      p++;
      system("pause");
      system("cls");
      cout<<setw(121)<<setfill('*')<<"*"<<endl;
      char* dt = ctime(&now);
      cout<<"*\t\t\t\t\t\t\tSerendipity BookSellers\t\t\t\t\t\t*"<<endl;
      cout<<"*\t\t\t\t\t\t\t     Report Listing\t\t\t\t\t\t*"<<endl;
      cout<<"*\t\t"<<dt;
      cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t\t\t\t*"<<endl;
      cout<<"*"<<left<<setw(80)<<setfill(' ')<<" Title"<<"   "<<
                        setw(11)<<setfill(' ')<<" ISBN"<<"  "<<
                        setw(11)<<setfill(' ')<<" Date Added"<<"  "<<
                        setw(10)<<setfill(' ')<<" Qty O/H"<<"*"<<endl;


      cout<<"*"<<left<<setw(80)<<setfill('-')<<" "<<"   "<<
                       setw(11)<<setfill('-')<<" "<<"  "<<
                       setw(11)<<setfill('-')<<" "<<" "<<
                       setw(10)<<setfill('-')<<" "<<setfill(' ')<<" *"<<endl;
    }

    cout<<"* "<<left<<setw(80)<<(*book).getTitle().substr(0,79)<<"   "<<
                      setw(11)<<(*book).getISBN().substr(0,10)<<"  "<<
                      setw(11)<<(*book).getDateAdded().substr(0,10)<<" "<<
                      right<<setw(9)<<(*book).getQtyOnHand()<<" *"<<endl;
    i++;
  }

  cout<<setw(121)<<setfill('*')<<"*"<<endl;

  system("pause");
  return;
}
