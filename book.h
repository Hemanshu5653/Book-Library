#pragma once
class Book
{
	int bookID;
    char bookName[50];
    char authorName[50];
    char category[50];
    double price;
    double rating;

    public:
    	Book();
    	Book(int, const char*,const char*,const char*, double, double);
    	void setBookId(int);
    	void setBookName(const char*);
		void setAuthorName(const char*);
	 	void setCategory(const char*);
 	 	void setPrice(double);
 	 	void setRating(double);
 	 	int getBookId();
	 	char* getBookName();
	  	char* getAuthorName();
 	  	char* getCategory();
  	  	double getPrice();
  	   	double getRating();
   	   	void displaydata();
};