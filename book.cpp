using namespace std;
#include<iostream>
#include<string.h>
#include "book.h"
#include "bookmanagement.h"

  Book::Book()
  {
  	this->bookID = 0;
  	strcpy(this->bookName, "Not Given");
	strcpy(this->authorName, "Not Given");
	strcpy(this->category, "Not Given");
	this->price = 0;
	this->rating = 0;
  }

  Book::Book(int bId, const char* bname, const char* aname, const char* cate, double p, double r)
  {
  	this->bookID = bId;
  	strcpy(this->bookName, bname);
  	strcpy(this->authorName, aname);
  	strcpy(this->category, cate);
  	this->price = p;
  	this->rating = r;
  }

  void Book :: setBookId(int bId)
  {
  	this->bookID = bId;
  }
  void Book :: setBookName(const char* name)
  {
     strcpy(this->bookName, name);
  }
  void Book :: setAuthorName(const char* aname)
  {
      strcpy(this->authorName, aname);
  }
  void Book :: setCategory(const char* cate)
  {
       strcpy(this->category, cate);
  }
  void Book :: setPrice(double price)
  {
      this->price = price;
  }
  void Book :: setRating(double rating)
  {
      this->rating = rating;
  }

   int Book :: getBookId()
   {
   	 return this->bookID;
   }
  char* Book :: getBookName()
   {
   	  return this->bookName;
   }
   char* Book :: getAuthorName()
   {
       return this->authorName;
   }
   char* Book :: getCategory()
   {
   	  return this->category;
   }
   double Book :: getPrice()
   {
   	 return this->price;
   }
   double Book :: getRating()
   {
   	 return this->rating;
   }

void Book :: displaydata()
{
	cout<<"|~|     "<<this->bookID<<"     |\t"<<this->bookName<<"\t|\t"<<this->authorName<<"\t|   "<<this->category<<"\t|  "<<this->price<<"  |    "<<this->rating<<"   |~|\n";

}