#pragma once
#include "book.h"

class BookManagement
{
	int size, index;
	Book* bptr;

	public:
	  BookManagement(int&);
   	  BookManagement(BookManagement&);

      void hardCodedData();

      bool isEmpty();
      bool isFull();

      bool addBook(Book&);

	  bool searchBook(int&);
      bool searchByBookId(int&);
      bool searchByBookName(const char*);
	  bool searchByAuthorName(const char*);
   	  bool searchBycategory(const char*);

      bool updateBook();
      bool updateByPrice(double&);
      bool updateByRating(double&);

      bool deleteBook();

      bool sortBook();
      bool sortByPrice(double&);
      bool sortByRating(double&);

      void displayBook();
      ~BookManagement();
};