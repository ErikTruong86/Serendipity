 �'d   |T��'dE�J���Ahf�� ��2��+�0��0Q�q�����G�/&(@\4͞���g���P[#~�a�?LUby`�w��\as�	�(,�p�<�Tc�X����ccH���;�|X�֑s��S�ŕQ�������e��������q���ϼ�,�����5ai8l�U��,NW�o�2Q��o�dS�U���m{ A��7����l`����k1a���/^J��/+!m;݋}Gz e{�R�k�:q�!�e�s���0h�Ȅ�NQ� ��9���<P��m��0���Z���ᐅz~���@}�-J۾��Vd��V�P�F�i���N0'�H�!`��K�d"�8uqr,�OpRޥe�N���d�|]�ufȇuU2�� �tXh��F"h��"���K�����v���qT헋hL��O�W�%ga8�Q֕���MD���UKQ� ��LN3�V�P��A}k�-���MTL����1��x��r �r�:�_!�nK��� �'d   �T��'d�J5��j[hf&� 6[�n��+X�0,ג0�*����R�~!�r�@^kR�t;�хJ�t6�P�]p���o���=���`>z�\Ƶv��)e�� �p�p�צ �c����΀�)��j!��sR���ԣ'F��w)���&����qC&��h��=j���:aG�9���.s`�%tLQ����eA��<�Ե�Ae��G��>���Yr��>1�=C������Ѽ�!K}=� gW~���`	g���%��
����F��EHl �(������`�(��/0ԬeR��m�n ����@�\����t�q�S��Pؕ�~_q���»p�F`�i�Gw��~1�S�p�n�N�ӳ��z���o�w0���� ��WZ����!q3���G�:ՠ��7��]�q�@� װ4��z���a|�����OE��8�Q�DѠ!�����3At��{��ϠJ���1.l_�u�V����!��d�]#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

// one \t = 8 spaces

void repRetailValue(const int DBSIZE, int &counter, orderedLinkedList<bookType> &list1)
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
  cout<<"*\t\t\t\t\t\t\t  Retailsale Listing\t\t\t\t\t\t*"<<endl;
  cout<<"*\t\t"<<dt;
  cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t\t\t\t*"<<endl;
  cout<<"*"<<left<<setw(37)<<setfill(' ')<<" Title"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(11)<<setfill(' ')<<" ISBN"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(10)<<setfill(' ')<<" Qty O/H"<<
                   setw(14)<<setfill(' ')<<" "<<
                   setw(15)<<setfill(' ')<<" RetailSale Cost"<<"   *"<<endl;

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
      cout<<"*\t\t\t\t\t\t\t  Retailsale Listing\t\t\t\t\t\t*"<<endl;
      cout<<"*\t\t"<<dt;
      cout<<"*\t\tPage   "<<p<<" of "<<q<<"\t\t\tDatabase Size   "<<DBSIZE<<"  Current Book Count: "<<counter<<"\t\t\t\t*"<<endl;
      cout<<"*"<<left<<setw(37)<<setfill(' ')<<" Title"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(11)<<setfill(' ')<<" ISBN"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(10)<<setfill(' ')<<" Qty O/H"<<
                     setw(14)<<setfill(' ')<<" "<<
                     setw(16)<<setfill(' ')<<" RetailSale Cost"<<"   *"<<endl;

      cout<<"*"<<left<<setw(37)<<setfill('-')<<" "<<
                     setw(14)<<setfill(' ')<<" 