).substr(0,36)<<
                    setw(14)<<setfill(' ')<<" "<<
                    setw(11)<<(*book).getISBN().substr(0,10)<<
                    setw(14)<<setfill(' ')<<" "<<right<<
                    setw(9)<<(*book).getQtyOnHand()<<
                    setw(15)<<setfill(' ')<<" "<<"$"<<
                    fixed<<setprecision(2)<<
             right<<setw(14)<<(*book).getRetail()<<"   *"<<endl;
     grandTotal = grandTotal + ((*book).getRetail() * (*book).getQtyOnHand());
     i++;
   }
   cout<<setw(121)<<setfill('*')<<"*"<<endl<<endl;
   cout<<"The Retailsale GrandTotal of Inventory is $"<<grandTotal<<endl;
   system("pause");
   return;
}
                                                                                                                                                                                                                                                                                                                                                              #include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

// one \t = 8 spaces

void repWholeValue(const int DBSIZE, int &counter, orderedLinkedList<bookType> &list1)
{
  int p = 0;
  int q = DBSIZE/10 + 1;
  time_t now = time(0);
  double checker = 0;
  double grandTotal = 0.0;
  int i = 0;
  linkedListIterator<bookType> book;
  system("cls");
  cout<<setw(121)<<setfill('*')<<"*"<<endl;
  char* dt = ctime(&now);
  cout<<"*\t\t\t\t\t\t\tSerendipity BookSellers\t\t\t\t\t\t*"<<endl;
  cout<<"*\t\t\t\t\t\t\t   Wholesale Listing\t\t\t\t\t\t*"<<endl;
  cout<<"*\t\t"<<dt;
  cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t\t\t\t*"<<endl;
  cout<<"*"<<left<<setw(37)<<setfill(' ')<<" Title"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(11)<<setfill(' ')<<" ISBN"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(10)<<setfill(' ')<<" Qty O/H"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(16)<<setfill(' ')<<" WholeSale Cost"<<"   *"<<endl;

  cout<<"*"<<left<<setw(37)<<setfill('-')<<" "<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(11)<<setfill('-')<<" "<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(10)<<setfill('-')<<" "<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(16)<<setfill('-')<<" "<<setfill(' ')<<"   *"<<endl;

  for(book = list1.begin(); book != list1.end();++book)
  {
    checker = i % 20;
    if(checker == 10|| checker == 0)
    {
      p++;
      system("pause");
      system("cls");
      cout<<setw(121)<<setfill('*')<<"*"<<endl;
      char* dt = ctime(&now);
      cout<<"*\t\t\t\t\t\t\tSerendipity BookSellers\t\t\t\t\t\t*"<<endl;
      cout<<"*\t\t\t\t\t\t\t   Wholesale Listing\t\t\t\t\t\t*"<<endl;
      cout<<"*\t\t"<<dt;
      cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t\t\t\t*"<<endl;
      cout<<"*"<<left<<setw(37)<<setfill(' ')<<" Title"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(11)<<setfill(' ')<<" ISBN"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(10)<<setfill(' ')<<" Qty O/H"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(16)<<setfill(' ')<<" WholeSale Cost"<<"   *"<<endl;

      cout<<"*"<<left<<setw(37)<<setfill('-')<<" "<<
                     setw(14)<<setfill(' ')<<" "<<
 