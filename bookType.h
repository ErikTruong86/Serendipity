#ifndef BOOKTYPE_H
#define BOOKTYPE_H

#include<iostream>
#include<string>
#include"Serendipity.h"
using namespace std;

class bookType
{
  friend ostream &operator<<(ostream& osObj, const bookType& book);
public:
  //Constructor
  bookType();
  bookType(string t, string i, string a, string p, string d, int q, double w, double r);
  //Setters
  void setBookTitle(string t);
  void setPublisher(string p);
  void setIsbn(string i);
  void setAuthor(string a);
  void setDOB(string d);
  void setQty(int q);
  void setWholesale(double w);
  void setRetail(double r);
  void setSortingCode(int sc);
  static void incBookCount();
  static void decBookCount();

  //Getters
  string getTitle() const;
  string getISBN() const;
  string getAuthor() const;
  string getPub() const;
  string getDateAdded() const;
  int getQtyOnHand() const;
  double getWholesale() const;
  double getRetail() const;
  int getBookCount() const;

  //Functions
  void print();
  bool equals(bookType);

  //overload operator
  bool operator<=(const bookType& other) const;
  bool operator>=(const bookType& other) const;
  bool operator==(const bookType& other) const;
  bool operator!=(const bookType& other) const;

private:
  string bookTitle;
  string isbn;
  string author;
  string publisher;
  string dateAdded;
  int qtyOnHand;
  double wholesale;
  double retail;
  int sortingCode; //0-> nothing  1->qty 2->wholesale 3->age
  static int bookCount;
};



#endif
