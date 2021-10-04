#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

void repQuanity(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list2)
{
  int p = 0;
  int q = DBSIZE/10 + 1;
  time_t now = time(0);
  double checker = 0;
  double grandTotal = 0.0;
  int i = 0;
  linkedListIterator<bookType> book;
  system("cls");
  cout<<setw(100)<<setfill('*')<<"*"<<endl;
  char* dt = ctime(&now);
  cout<<"*\t\t\t\t\t\tSerendipity BookSellers\t\t\t\t   *"<<endl;
  cout<<"*\t\t\t\t\t\t  Retailsale Listing\t\t\t\t   *"<<endl;
  cout<<"*\t\t"<<dt;
  cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t   *"<<endl;
  cout<<"*"<<left<<setw(37)<<setfill(' ')<<" Title"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(11)<<setfill(' ')<<" ISBN"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(10)<<setfill(' ')<<" Qty O/H"<<"\t\t   *"<<endl;


  cout<<"*"<<left<<setw(37)<<setfill('-')<<" "<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(11)<<setfill('-')<<" "<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(10)<<setfill('-')<<" "<<setfill(' ')<<"\t\t   *"<<endl;


  for(book = list2.begin(); book != list2.end();++book)
  {
    checker = i % 20;
    if(checker == 10|| checker == 0)
    {
      p++;
      system("pause");
      system("cls");
      cout<<setw(100)<<setfill('*')<<"*"<<endl;
      char* dt = ctime(&now);
      cout<<"*\t\t\t\t\t\tSerendipity BookSellers\t\t\t\t   *"<<endl;
      cout<<"*\t\t\t\t\t\t  Retailsale Listing\t\t\t\t   *"<<endl;
      cout<<"*\t\t"<<dt;
      cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t   *"<<endl;
      cout<<"*"<<left<<setw(37)<<setfill(' ')<<" Title"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(11)<<setfill(' ')<<" ISBN"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(10)<<setfill(' ')<<" Qty O/H"<<"\t\t   *"<<endl;


      cout<<"*"<<left<<setw(37)<<setfill('-')<<" "<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(11)<<setfill('-')<<" "<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(10)<<setfill('-')<<" "<<setfill(' ')<<"\t\t   *"<<endl;
    }

    cout<<"* "<<left<<setw(37)<<(*book).getTitle().substr(0,36)<<
                    setw(14)<<setfill(' ')<<" "<<
                    setw(11)<<(*book).getISBN().substr(0,10)<<
                    setw(14)<<setfill(' ')<<" "<<right<<
                    setw(9)<<(*book).getQtyOnHand()<<"\t\t   *"<<endl;
     i++;
   }
   system("pause");
   return;
}
