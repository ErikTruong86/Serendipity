 $d   ��$d��JI;�48f�5 �H��5��CZ�k0��N������j�q��@��D�я��p�Pm�T)�[�gd���q�`�~?�]�1?o���p鳄�n�����Hd4r�, �䍜w����|L��G~�] ��*f� �c������>q͎�̥ʫ�	^�p�n�a���M��������'�Q��Z���ЭZQ��C�A/P�ƠS�Ĳ��6�1�y�a��y�	�6�!�Ѵ�AA] �G�2l�+4���&׈>�3�ę��� m�6|K��d�%J��0�9I�6��gWzI?�@�B�~)��>��PnnP8/ֿ�vx��2��`���m0�`�_kf�+p�%��`Q��4D.Y�Ѐ��V6���
���-����6��C�J[2|?���]Y��W�q|<BW�r�J��j�Ia`)7 ��6��l;dgblQ�]{��0�Ю}:�K89A>]m�ʔ�vh-�4%1���l����G�9y�!�44S�_� $d   ��$d_�J�;��'8f.; �QJ�I���S�Z�s0�QP��!��0��?
I@���H��ѭ�Ӄ���P/j�a�i�ŗ7l�Q�`��AFd`��d�˱��p+��:�p���������.�`�󧑹Ի(�Tl��v�g�����C9�~zIf��pqk-N����K������ao�q�����˨
@��Q���_G�{�o�Z�]%A�5S֚U��F#�ϟ9}1'"��6�K���S!s�:ȵ� �# �.��1�y��j?"S�k!C��̐ ��
SB3� ��ѽ0, AK1���Me�@�&N�(��ќF�F<W�P0#��$c3��R�Z�`w�Ξ#Cα������p���Kֈ�ڨ�^D���Xi�]�(h ���:�`�薓���{~���.=�F��q��Y
z��2ư�U�a>���5���m2��Q�l����p`R�U_�A��Өy���'�f%��1Vo='}��Q0�Z!����ň�  $d   �� $d!�J�;��A8ft@ �K������qn`{0-K�Qd���g'�W�@�Ozw����j��tP�s��w�#�wG�1�`��c�m�Ig��pmO&~g8�i����,��0��ܲJؑ���k�\4������4	�w����� t��Y�q	��oC�#���;����aMT��`ۿ���#�.�Qm����1hd�[v�A���W�ȓ?��<P1Ũ��o!�����!Q��!QU-�N*r �������O�ׂ�.��ȧ�g������? qVw�)9���7��0n��8_��t�L�R�9@�9}�JǫѺcV�9�P�����2�푂��`���M�U������ӝp.F�6[��Ճd���Ѯ|Z�d9�F>N���ِ"�������Ā�[f�a���q�A�[����٪Ӧ�.a���g��n)���Q�{m�\�p�2Cj/`�A��9��"��e~�1����c�N��&���!��Y6��N "$d   ��"$d��J�;�N\8f�E �hM�9r�� ���0o�S�7პ�ܣK@�Iԫh8���QpQܗ#P�̔��7�����"
r`����g���2��p�P������G��a���2�zXš���3��d��c��]���Տu�;䠂m�,#�q�jSA�}_��?�D9��a+�P�*ݳ���<���Q!C�N������m�#AI q��Y��J���?#1c@Qg;������>�t�!/�i�՞� ��/Z��6m��HEQgd&U|���?���� �1� 0��>!���50��0s�R8�
W��@�L��l�`�؀�6wUP��oj}��>�����`{�
��hZ�:��3��Vpp�_�!ൡ���.j���x;\��d|��Fx��1E!	=��d��m�@����.�}�qV�<^9�������a��h"�! ��o e�jQ�欰h^��%�rj�nAX9��1O��+\c?݆1�f� �RJ�T�A-!~&�\��der         int                 0                -
//--------------------------------------------------------
#include<iostream>
#include<string>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

const int DBSIZE = 20;

void invMenu(bookType **db, const int DBSIZE, int &counter,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4)
{
  int choice = 0;
  int finder = 0;
  string foundWord;
  system("cls");

  do
  {
    cout<<"   Serendipity Booksellers"<<endl;
    cout<<"     Inventory Database"<<endl<<endl;
    cout<<"1. Look Up a Book"<<endl;
    cout<<"2. Add a Book"<<endl;
    cout<<"3. Edit a book's Record"<<endl;
    cout<<"4. Delete a Book"<<endl;
    cout<<"5. Return to the Main Menu"<<endl<<endl;
    cout<<"Enter Your Choice:"<<endl;
    cin>>choice;
    while(choice<1||choice>5)
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
        lookUpBook(DBSIZE, list1,foundWord);
        break;
      case 2:
        if(counter < DBSIZE)
        {
          addBook(db, DBSIZE, counter, finder,list1, list2, list3, list4);
        }
        else
        {
          cout<<"DATABASE is full, Cannot add any more"<<endl;
          cout<<foundWord<<endl;
          system("Pause");
        }
        break;
      case 3:
        editBook(db, DBSIZE,list1, list2, list3, list4,foundWord);
        break;
      case 4:
        deleteBook(DBSIZE, counter,list1, list2, list3, list4,foundWord);
        break;
      case 5:
        break;
      default:
        cout<<"Something went wrong"<<endl;
    }
    system("cls");
  }while(choice!=5);
}
