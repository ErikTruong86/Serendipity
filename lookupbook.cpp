 l$d   T"�l$d�J�D��+<f� \�������e��	��0��F�WPᙌ#����@=�D���?�>�(lP�������k�Ҟtd`dF�f@��}!`9p9�T���ԡ]�=�̀|P�Bq7�K��f��m���")Q�k�wt&��L}�>Zq}W4����Y {���aA� �a���n����Qw~ɕ�r.��h�7�A�&5��o�Gj]_��19*:Y����YyhkCwp!E;Mv� �җ�
��W��I,n�%�v.�s�5�_l8 ��"s݃��߆��0:��X��h�U�/�@%z�Oj��.�&��F-P��D����&�q�T`E�[L���aaو�p���mw��O��;����Μ.ב���%h��d��l>6����OҠ��|#���q,�N������� o)a,�z0	����B�Qf�eR�ź����$�QWA��h�z���j$�"��1hD"�������c!�Ŀ� n$d   r"�n$d�J�D�BF<f ���	����	t��0;@���b��wÁs
}@t�6`��]��0P��}6(��u�?��TO`�H��ϔ�E��.p{�*�U��;��&�~>����5�i��6���/퀈��E��协j����vP�jCq��ZE�C��k��+�aN�	,!��֓��?�Q��RbO�п��TPA=�D�������Fd�u1���w+��[J��M!#^[��� �Z�� p�M�`l�0��(�S�Vc� ?�G�����U��0|�T�md�F5��V7@'��q?8�L������P�a�:�iA�������y`Ǳy��/���j!�z�p<@�V ����^�AU��u��a²���I������Sk}���X��	w��/��E�q�'���!��T�$>қa���Ӏ�������z��Q���V)�����h�x�AL����6�w�"��1�Mҏ��\@��X-�!rŰ���         which will also be made to be lower case.   -
// Step 3:   Use the find() function to help with finding-
//           the substring within the whole string.      -
// Step 4:   Display the info when found or no exisit    -
//--------------------------------------------------------
//-                DATA DICTIONARY                       -
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
//- found          bool               false              -
//- index          int                0                  -
//- search         string             n/a                -
//- tempTitle      string             n/a                -
//- location       int                0                  -
//--------------------------------------------------------
#include<iostream>
#include<string>
#include"Serendipity.h"
#include"bookType.h"
#include"linkedListType.h"
#include"orderedLinkedList.h"
using namespace std;

bool lookUpBook(const int DBSIZE, orderedLinkedList<bookType> &list1,string &foundWord)
{
  system("cls");
  bool found = false;
  int index = 0;
  string search;
  string tempTitle;
  string tempIsbn;
  int location = 0;
  char choice;
  linkedListIterator<bookType> book;
  bookType *temp;
  temp = new bookType();
  cin.ignore();
  cout<<"Enter the title or ISBN of the book to search for: "<<endl;
  getline(cin, search,'\n');
  int countCheck = 0;

  //change to lowercase for
  for(int i = 0; i < search.length(); i++)
  {
    search[i] = static_cast<char>(tolower(search[i]));
  }

  temp->setBookTitle(search);

  for(book = list1.begin(); book != list1.end();++book)
  {
    tempTitle = (*book).getTitle();
    for(int i = 0; i<tempTitle.length();i++)
    {
      tempTitle[i] = static_cast<char>(tolower(tempTitle[i]));
    }
    location = tempTitle.find(search);
    if(location != string::npos || search == (*book).getISBN())
    {
      cout<<(*book)<<endl;
      cout<<"Is this your book? (y/n)"<<endl;
      cin>>choice;
      if(choice == 'y' || choice == 'Y')
      {
        found = true;
        foundWord = (*book).getTitle();
        break;
      }
      system("cls");
      cin.ignore();
    }
    countCheck++;
  }

  if(found == false)
  {
    cout<<"Book Is Not Here"<<endl;
  }

  system("Pause");
  return found;
}
