 �'d   �Q��'d�JY��<�efP[ ��� �!���t.���0!�ک.Ͼ��"�#��@,P��]Xї��괌}P�Z�1��o{P��`�;�1pw#�9}�I;�paV������B������ݜ�N���w��T���'&�
�ÝL��Ʀ�t>}<DqըV+Y;�����#�a�c*fb�
���{]]��QωA:u���%׺�A7��S�"�<��s�1�ou����������!�7��Z 5�9�a��cM��b��ٙ�n*���'*V �N)h��l���"&W0bU�s���� �� /�@Mĕ���ц�|��P��M2`P(�~��B���`m�~�����h�p0~��p"X���� �*�a-��Ev�]�����q n�ڐ󬗄TA�R>"s�怠զ@.ůq��`�4N�¡s�ڭahz��r��,��(ZQ��qal���&Ƨ� AF��3����(uJ�{�1�Y�<g��BB��+d�!��M� � �'d   �Q��'d��J�����ef�` G� j���[)�.<r�0cl6���I��Y08�?�@.C�+�Jѵ�~��{,P�pj1�ͮ�����`>z
��&�ע)��/�p��p�Rpl���Pyˀ���Y��~������\Z�WK��2��!j���B|��7ʟ�SDqsG���!˰�/�AK@�aw���,������v�Q��ʱ"�����5�A�)�MÞ�Dg�$vv1/e�0X��k���7!{Ps�c�	 7��xQw9�Y��"XB3Wb)n�! gt��^+�
�~;�0�Nn�លv�%U@O�gј�Ѥ�>W��P����Uݛ�ܖ,=���`�֜V?�V��0s���pd��p�]��❵3f��G@�_��t�0ğmSy��~\ �����nku�P[�W|Kbr'�q"Ilb�ذIX5�= aFG,�
�;�-���߮Qܤ�e�K��訿I"�A��:"����tsBk^1^�����h���y���!ʇ��I9#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

// one \t = 8 spaces

void repList(const int DBSIZE, int &counter, orderedLinkedList<bookType> &list1)
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
  cout<<"*"<<left<<setw(27)<<setfill(' ')<<" Title"<<
                    setw(11)<<setfill(' ')<<" ISBN"<<
                    setw(15)<<setfill(' ')<<" Author"<<
                    setw(15)<<setfill(' ')<<" Publisher"<<
                    setw(11)<<setfill(' ')<<" Date Added"<<
                    setw(10)<<setfill(' ')<<" Qty O/H"<<
                    setw(16)<<setfill(' ')<<" WholeSale Cost"<<
                    setw(13)<<setfill(' ')<<" Retail Price"<<" *"<<endl;

  cout<<"*"<<left<<setw(27)<<setfill('-')<<" "<<
                   setw(11)<<setfill('-')<<" "<<
                   setw(15)<<setfill('-')<<" "<<
                   setw(15)<<setfill('-')<<" "<<
                   setw(11)<<setfill('-')<<" "<<
                   setw(10)<<setfill('-')<<" "<<
                   setw(16)<<setfill('-')<<" "<<
                   setw(13)<<setfill('-')<<" "<<setfill(' ')<<" *"<<endl;
   //the upper part
//------------------------------------------------------------------------------

  for(book = list1.begin(); book != list1.end();++book)
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
      cout<<"*"<<left<<setw(27)<<setfill(' ')<<" Title"<<
                        setw(11)<<setfill(' ')<<" ISBN"<<
                        setw(15)<<setfill(' ')<<" Author"<<
                        setw(15)<<setfill(' ')<<" Publisher"<<
                        setw(11)<<setfill(' ')<<" Date Added"<<
                        setw(10)<<setfill(' ')<<" Qty O/H"<<
                        setw(16)<<setfill(' ')<<" WholeSale Cost"<<
                        setw(13)<<setfill(' ')<<" Retail Price"<<" *"<<endl;

      cout<<"*"<<left<<setw(27)<<setfill('-')<<" "<<
                       setw(11)<<