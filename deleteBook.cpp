 �#d   ���#dm�J�5�d�5fX�
 ܱ#��R���kj��0yR_.j��Օ���@�|�r��uѿK��_�P=pTr������(p�`�6��%�a�3F���p��΢����u�C�n����E�r��/�N����1wfJ6����(`��ų�g�q���(B3��O>�ݰaa����ج��T.Ęw�)Q��~�VG7�}�l��A_�^Q/$o��&�%��1�BT3������2��:!Ť�Tb ����2��C��g��#�B'P)����Y��z =ӈDX'�`$i!�0��A�Uq�����ܮ�@�K�W�!NѮn�cGIP>|W�%����G s�`�2�eov���^)���pz��[�ա,Xy+�y��*-n{�:�$f��nt��Jz��z�UEϞ7�-U�� �q��m�>��qH���a��������uT]5{Q��!4�pK�~;�^U��An|�`�H�uJ����1�\��߅��q�5!�t��� �#d   ���#d/�J�5�®5f��
 ^=%�	���.�A�0��/�u������)@��L��g�݄~�6N_P��i����2�9P�`f���Yz��ݠ����p�mQ�D���c5z����������!�e������g�*�IΚ��5�N�w�q�N��J����fa�t����VSͱ-RCQ�+$��??v�S�:A���`)&�����)�1W��ߋ�����O���!��J�'�� ��cX��*a��-�����v�d.Qj�V��) �:C/d�2q�� 0���i���}S|��-@�^�)���̋a�|�P 1�b,^�߻��;`G4�<�.l߰�p�/�F`l�
�A���*����.�5đXU�>Z�0 q?[����G���*Q�キqJ��!�{�\�Vk�
an���$��wU
P��Q�8(.9�@�_��A��<O��k�����Ս1��iS���ܯ3�w|!�M��~               DATA DICTIONARY                       -
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
//- finder         int                0                  -
//--------------------------------------------------------
#include<iostream>
#include<string>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

void deleteBook(const int DBSIZE, int &counter,
                orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
                orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4, string &foundWord)
{
  string choice1;
  bookType *temp = nullptr;
  temp = new bookType();
  linkedListIterator<bookType> book;
  system("cls");
  lookUpBook(DBSIZE,list1,foundWord);
  cout<<"Do you want to delete this? ";
  cin>>choice1;
  if(choice1 == "y" || choice1 == "Y" )
  {
    for(book = list1.begin(); book != list1.end();++book)
    {
      if(foundWord == (*book).getTitle())
      {
        temp->setBookTitle((*book).getTitle());
        temp->setIsbn((*book).getISBN());
        temp->setAuthor((*book).getAuthor());
        temp->setPublisher((*book).getPub());
        temp->setDOB((*book).getDateAdded());
        temp->setQty((*book).getQtyOnHand());
        temp->setWholesale((*book).getWholesale());
        temp->setRetail((*book).getRetail());
        list1.deleteNode(*temp);
        bookType::decBookCount();
        break;
      }
    }
  }
  else
  {
    cout<<"search for desired book again"<<endl;
  }

  counter--;
  system("Pause");
  return;
}
