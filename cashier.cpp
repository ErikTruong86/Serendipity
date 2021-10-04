 P#d   ��P#dQ	Ja#���-f	 @0��0�����] X0]hu�C�/�u�U#C@�0\{/�ћ�ڦ"�cP!eӗ������b5�*`H���m	�=B�OYp��1��-�98�����`Kׁ0�4��j�8��?9/񊽁G�ZT�cT�0Qr��Lq�[�R>ΰ�aEJ���a�
B!��������cQӓ�G|
��a���1A��ԓ������y��1�$��S��f�t!!����2 �v����P��5�ұAi	s�Ok�:_o+ �I�s��d�pP��u�0��]��9��D�}K|�@	�]M�15ъ�z�Ph{P"i.�F���)��D��`)g�)
��l���kyp^���[���
f"��������B�*X�`�R�DA+\��	�"h���G��/q�1�i�����Ʀht�a숧u �w���E�a�Q�W?�:���b$��4�A�!��|����^�,1ĲIcV��~yQ�� !p��^ R#d   ��R#dJ�#��-fJ!	 »��y���_ ��_0������ST?�#p�@��l��ѹ��FqP������Q ��
`�䎺���g_NLDNp��HTh��Hڰ�2��b9��BBe��\�^O���o�l�����
l��)����R�~qw�B$��	���쐼��a�"�-#����0}Q�<�)�Y�#0��cJ�A�c���"�zO�Ӫj13��I}�������K�!���H� �z�R�=4���WY��[%���7Vf� #�wH����a_T�0�2��MU�"N�Ѐ?2@����Ѩ�<N�BP��K<9)�`�S�lx�`�E�ؿ��
��b2p�;%�����f~.�f��h��zё4�DW���k��Q~ց4FR��х��@!�)q&�Ol�A�@��Ɇ�(a�U�&/���� Q�f�ێ~��$�0?цA(k��I��[GVھ�1b.0�&v�������j!N�X��G
 T#d   ��T#d�J�#�|�-f�&	 DG������,6�qsg0�,ǫ�E�1����E@�';�]����Vwtj`�P�������S�����`L�Q���y��9Cp!J�˗伡�W�c��d'�yU����N�f#��U�?�a��V���[��4
�8��q�����E�A�����aً�Q�$���1*h��Q��6����嶘��c Aw������8��=1�?S�HB��A���"K!�+N��G �V��}$_[ߢRzVm�2C]h5M]� �2�� �q��%20"�z�a�� �rV�ez@����۞����iK�
P���2Ɯ��W﷔o`-$�uᨱ�\XZ�p��eޝe&�D��w"���2x�I4��R�
_VB�����"b�P��v���;`���ce�>q�6�n�D̰�5��:�a�"s�,������D�TQ�u1��;�����sI��A��x�4v��ݓN��1 �s����S�]�!,j���p� V#d   
�V#d�J$���-f�+	 �ү�il��YM��,o0#@��_������	�@�^��NT����E[�OpPgo*M9���#����`��l�j��9��-8pc~aO�`���g�=+#�f��g�őAQ�}+I��� b͚�a"j���Ԡ�8����q�7H�*����C;5 �a��xu�&{��VC8�Q-O���iЧ=���|A՜����~0���1o�������¼���!�Xg�*1� �2@:�y��h����z5G+�i�12DT8 '���g�~�J��L>[0d��q�u1�ރ�ۉ��@����S�����H�Ph�M�'S��fB`�$7+�n�F(�7Q�p$\�ǈ꼡"f�"(���6�|p�8yU�<���S�r$ˁ��P�:��e��VTqb��p�V���tÝa��ؗ2A���F}��Q���6��Ш���SUA��ވ����_�F\��1�%��ǡj�D4��U�<!
~gM�b//--------------------------------------------------------
//File name: cashier.cpp                                 -
//Project name Serendipity                               -
//--------------------------------------------------------
//Erik Truong etruong7@saddleback.edu                    -
//Course-Selection: CS 1B Ticket #23650                  -
//Creation Date: 1/17/19                                 -
//Date of Last Modification:  3/6/19                     -
//--------------------------------------------------------
//Purpose: Allows the user to search for the book and    -
//        lets the user buy the book or not. If they do  -
//        then let the user buy x amount of book. Then a -
//        receipt will print then ask if they want to buy-
//        another book.                                  -
//--------------------------------------------------------
//Algorithm:                                             -
// Step 1:   program askes the user to input various data-
// Step 2:   The program would then calculate the Total  -
//           , subtotal, and tax.                        -
// Step 3:   By using the manipulation, the receipt will -
//           be formed in a unified way.                 -
//--------------------------------------------------------
//-                DATA DICTIONARY                       -
//- CONSTANTS                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ----------     -------------      --------------     -
//   N/A            N/A                 N/A              -
//- VARIABLES                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ---------      -------------      --------------     -
//- qty             int                 0                -
//- subtotal        double              0.0              -
//- total           double              0.0              -
//- tax             double              0.0              -
//- choice          char                n/a              -
//- finder          int                 0                -
//- tryAgain        int                 0                -
//- found           bool                false            -
//--------------------------------------------------------
#include<iostream>
#include<string>
#include<iomanip>
#include<ctime>
#include "Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

void cashier(bookType **db, const int DBSIZE,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4)
{
  time_t now = time(0);
  int finder = 0;
  char choice;
  double subtotal = 0.0;
  double total = 0.0;
  double tax = 0.0;
  int qty;
  bool found = false;
  int tryAgain = 0;
  char finalChoice;
  string booksNameArray[DBSIZE];
  double subtotalArray[DBSIZE];
  string bookIsbnArray[DBSIZE];
  int numberOfBooksArray[DBSIZE];
  double bookRetailArray[DBSIZE];
  int storeTheOriginalQtyIncaseUserDontBuy[DBSIZE];
  int listOfFinders[DBSIZE];
  int numberOfPurchases = 0;

  string foundWord;
  setfill(' ');
  found = lookUpBook(DBSIZE,list1,foundWord);
  if(found == 1)
  {
    cout<<endl<<"Do you want to buy this book? (y/n) ";
    cin>>choice;
    while(choice == 'y' || choice == 'Y')
    {
      if(tryAgain != 0)
      {
        system("cls");
        found = lookUpBook(DBSIZE,list1, foundWord);
        cout<<endl<<"Do you want to buy this book? (y/n) ";
        cin>>choice;
        if(choice == 'n' || choice == 'N')
        {
          system("cls");
          char* dt = ctime(&now);
          cout<<dt<<endl<<endl;
          cout<<fixed<<showpoint<<setprecision(2)<<endl;
          cout<<"Serendipity Book Seller"<<endl;
          cout<<left<<setw(5)<<"Qty"ooksArray[numberOfPurchases] = qty;
        subtotalArray[numberOfPurchases] = qty *db[finder]->getRetail();
        bookIsbnArray[numberOfPurchases] = db[finder]->getISBN();
        bookRetailArray[numberOfPurchases] = db[finder]->getRetail();
        numberOfPurchases++;

        tryAgain = 1;
        cin.ignore();
        cout<<"Do you want to buy more books? (Y/N)"<<endl;
        cin >> choice;
        if(choice == 'n' || choice == 'N')
        {
          system("cls");
          char* dt = ctime(&now);
          cout<<dt<<endl<<endl;
          cout<<fixed<<showpoint<<setprecision(2)<<endl;
          cout<<"Serendipity Book Seller"<<endl;
          cout<<left<<setfill(' ')<<setw(5)<<"Qty"<<setw(20)<<"ISBN"<<setw(40)<<"Title"<<setw(10)<<"Price"<<setw(10)<<"Total"<<endl;
          cout<<setfill('-')<<setw(82)<<"-"<<endl<<setfill(' ');
          for(int i = 0; i<numberOfPurchases; i++)
          {
            cout<<left<<setw(5)<<numberOfBooksArray[i]<<setw(20)<<bookIsbnArray[i]<<setw(40)<<booksNameArray[i].substr(0,20)<<
                "$"<<right<<setw(4)<<bookRetailArray[i]<<setw(4)<<"   $"<<subtotalArray[i]<<endl<<endl;
            subtotal = subtotal + subtotalArray[i];
          }
          tax = subtotal * 6 / 100;
          total = tax + subtotal;
          cout<<right<<setw(51)<<"Subtotal:"<<right<<setw(25)<<" $"<<right<<setw(4)<<subtotal<<endl;
          cout<<right<<setw(51)<<"Tax:"<<right<<setw(26)<<" $ "<<right<<setw(5)<<tax<<endl;
          cout<<right<<setw(51)<<"Total:"<<right<<setw(25)<<" $"<<right<<setw(4)<<total<<endl;
          cin.ignore();
          cout<<endl<<"Do you want to comfirm your purchase? ";
          cin>>finalChoice;
          if(finalChoice == 'y' || finalChoice == 'Y')
          {
            cout<<"Thank You For Your Purchase :D"<<endl;
            system("Pause");
            return;
          }
          else
          {
            return;
          }

        }
      }
      else
      {
        cout<<endl<<"There are no more in the inventory"<<endl;
        cout<<"You can not buy it anymore"<<endl;
        system("Pause");
        return;
      }
    }
  }
  return;
}
