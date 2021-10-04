//--------------------------------------------------------
//File name:     Serendipity.h                           -
//Project name   Serendipity                             -
//--------------------------------------------------------
//Erik Truong etruong7@saddleback.edu                    -
//Course-Selection: CS 1B Ticket #23650                  -
//Creation Date:   1/17/19                               -
//Date of Last Modification:   2/20/19                   -
//--------------------------------------------------------
//Purpose: This file is for the functions to be prototype-
//                                                       -
//--------------------------------------------------------
//Algorithm:                                             -
// Step 1:      N/A                                      -
//--------------------------------------------------------
//-                DATA DICTIONARY                       -
//- CONSTANTS                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ----------     -------------      --------------     -
//    N/A            N/A                N/A              -
//- VARIABLES                                            -
//-                                                      -
//- NAME           DATA TYPE          INITIAL VALUE      -
//- ---------      -------------      --------------     -
//-  N/A             N/A                 N/A             -
//--------------------------------------------------------

#ifndef SERENDIPITY_H
#define SERENDIPITY_H

#include<string>
#include"bookType.h"
#include"orderedLinkedList.h"
#include"linkedListType.h"
using namespace std;

void cashier(bookType **db, const int DBSIZE,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4);

void invMenu(bookType **db,const int DBSIZE, int &counter,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4);

void reports(const int DBSIZE, int &counter,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4);

void bookinfo(bookType **db, int &finder,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4);

bool lookUpBook(const int DBSIZE, orderedLinkedList<bookType> &list1, string &foundWord);

void addBook(bookType **db, const int DBSIZE, int &counter, int &finder,
            orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
            orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4);

void editBook(bookType **db, const int DBSIZE,
          orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
          orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4, string &foundWord);

void deleteBook(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list1,orderedLinkedList<bookType> &list2,
          orderedLinkedList<bookType> &list3,orderedLinkedList<bookType> &list4, string &foundWord);

void repList(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list1);

void repWholeValue(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list1);

void repRetailValue(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list1);

void repQuanity(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list2);

void repCostSorted(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list3);

void repAge(const int DBSIZE, int &counter,
          orderedLinkedList<bookType> &list4);

#endif
