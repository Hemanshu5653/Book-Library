#include<iostream>
#include<string.h>
#include "book.h"
#include "bookmanagement.h"
using namespace std;

   BookManagement :: BookManagement(int& b)
   {
   	  this->size = b;
      this->index = -1;
	  this->bptr = new Book[b];
   }

   BookManagement :: BookManagement(BookManagement& bm)
   {
   	   this->size = bm.size;
       this->index = bm.index;
	   this->bptr = new Book[this->size];

        for(int i = 0; i<=index; i++)
          bptr[i] = bm.bptr[i];
   }

   void BookManagement ::hardCodedData()
   {
      	bptr[++index] = Book(101,"Bhagavad Gita","Veda Vyasa","Hindu Spiritual",450,8.9);
		bptr[++index] = Book(102,"Do Epic Shit","Ankur Warikoo","Personal Awareness",600,7.1);
		bptr[++index] = Book(103,"Made To Stick","Dan Heath","Story Telling",250,9.1);
		bptr[++index] = Book(104,"Dnyneshwari","D.Maharaj","Hindu Spiritual",550,7.8);
		bptr[++index] = Book(105,"Atomic Habits","James Clear","Story Telling",450,6.8);
   }

   bool BookManagement :: isFull()
   {
    	return (index == size-1);
   }
   bool BookManagement :: isEmpty()
   {
   	   return (index==-1);
   }
   bool BookManagement :: addBook(Book& b1)
   {
   	   if(isFull())
        {
        	return false;
		}
	   else
	   {
	      	bptr[++index] = b1;
		    return true;
	   }
   }

   bool BookManagement :: searchByBookId(int& bId)
   {
   	  if(isEmpty())
       {
          return false;
       }
       else
       {
       	 int flag = 0;
       	  for(int i= 0; i<index; i++)
  	      {
             if(bptr[i].getBookId() == bId)
             {
             	flag=1;
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|                                        BOOK MANAGEMENT SYSTEM                                          |~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|   BOOK ID   "<<"|"<<"        BOOK NAME      "<<"|"<<"         AUTHOR        "<<"|"<<"       CATEGORY        "<<"|"<<" PRICE "<<"|"<<"  RATING  "<<"|~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|\n";
				bptr[i].displaydata();
				cout<<"|~|--------------------------------------------------------------------------------------------------------|~|\n";
				break;
			 }
		  }
          if(flag == 0)
          {
          	 cout<<"Book Not Found !!";
		  }
          return true;
	   }
   }
   bool BookManagement :: searchByBookName(const char* bookName)
   {
   	  if(isEmpty())
      {
      	 return false;
	  }
      else
      {
      	 int flag = 0, i, res;
         for(i=0; i<=index; i++)
         {
         	res=strcasecmp(bptr[i].getBookName(), bookName);
         	if(res == 0)
         	{
                cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|                                        BOOK MANAGEMENT SYSTEM                                          |~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|   BOOK ID   "<<"|"<<"        BOOK NAME      "<<"|"<<"         AUTHOR        "<<"|"<<"       CATEGORY        "<<"|"<<" PRICE "<<"|"<<"  RATING  "<<"|~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|\n";
				bptr[i].displaydata();
				cout<<"|~|--------------------------------------------------------------------------------------------------------|~|\n";
				flag=1;
		    }
		 }
         if(flag == 0)
         {
         	cout<<"Book Not Found !!\n";
		 }
         return true;
	  }
   }
    bool BookManagement :: searchByAuthorName(const char* bookAuthor)
   {
   	  if(isEmpty())
      {
      	 return false;
	  }
      else
      {
      	 int flag = 0, i, res;
         for(i=0; i<=index; i++)
         {
         	res=strcasecmp(bptr[i].getAuthorName(), bookAuthor);
         	if(res == 0)
         	{
                cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|                                        BOOK MANAGEMENT SYSTEM                                          |~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|   BOOK ID   "<<"|"<<"        BOOK NAME      "<<"|"<<"         AUTHOR        "<<"|"<<"       CATEGORY        "<<"|"<<" PRICE "<<"|"<<"  RATING  "<<"|~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|\n";
				bptr[i].displaydata();
				cout<<"|~|--------------------------------------------------------------------------------------------------------|~|\n";
				flag=1;
		    }
		 }
         if(flag == 0)
         {
         	cout<<"Book Not Found !!\n";
		 }
         return true;
	  }
   }

    bool BookManagement :: searchBycategory(const char* category)
   {
   	  if(isEmpty())
      {
      	 return false;
	  }
      else
      {
      	 int flag = 0, i, res;
         for(i=0; i<=index; i++)
         {
         	res=strcasecmp(bptr[i].getCategory(), category);
         	if(res == 0)
         	{
                cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|                                        BOOK MANAGEMENT SYSTEM                                          |~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
				cout<<"\n|~|   BOOK ID   "<<"|"<<"        BOOK NAME      "<<"|"<<"         AUTHOR        "<<"|"<<"       CATEGORY        "<<"|"<<" PRICE "<<"|"<<"  RATING  "<<"|~|";
				cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|\n";
				bptr[i].displaydata();
				cout<<"|~|--------------------------------------------------------------------------------------------------------|~|\n";
				flag=1;
		    }
		 }
         if(flag == 0)
         {
         	cout<<"Book Not Found !!\n";
		 }
         return true;
	  }
   }

//update book
  bool BookManagement :: updateBook()
   {
   	 if(isEmpty())
	 {
          return false;
     }
     else
     {
     	double price, rating;

     	int i, flag = 0;
     	int bookId;
		cout<<"Enter Book ID to update book: ";
	 	cin>>bookId;

   		for(i=0; i<=index; i++)
	 	{
	 	   if(bptr[i].getBookId() == bookId)
		   {
		   	  flag = 1;

        	  cout<<"Enter Price: ";
              cin>>price;
              bptr[i].setPrice(price);

              cout<<"Enter Rating: ";
              cin>>rating;
              bptr[i].setRating(rating);

              cout<<"Updated Successfully!! \n";

              break;
           }
	   }
       if(flag==0)
       {
       	 cout<<"No Book Found with price: "<<bookId<<"\n";
	   }
       return true;
	 }
   }
//delete book
   bool BookManagement :: deleteBook()
      {
      	  if(isEmpty())
           {
           	  return false;
		   }
           else
	        {
        	    int i, flag = 0;
       		    int bookId;

				cout<<"Enter book price to update book: ";
	 			cin>>bookId;

	  			for(i=0; i<=index; i++)
  	   			{
                    if(bptr[i].getBookId()== bookId)
                    {
                    	flag = 1;
                    	for(int j=i; j<=index-1; j++)
                    	{
                    		bptr[j] = bptr[j+1];
						}
	  					i--;
		  			 	index--;
	  			 	 	break;
					}
			    }
	 	    	if(flag == 1)
 		     	{
				   cout<<"Book Deleted Succesfully!!";
			    }
       			else
	            {
            	    cout<<"\nBook with Book ID %d not found.", bookId;
			    }
	 	    	return true;
			}
	  }

//sort player
bool BookManagement :: sortBook()
{
	if(isEmpty())
	{
		return false;
	}
	else
	{
		int choice;
		cout<<"\nEnter Choice for Sorting By :";
		cout<<"\n1.Rating";
		cout<<"\n2.Price";

		cout<<"\n\nEnter Choice:";
		cin>>choice;
		if(choice==1)
		{
			//sort by rating
			int i,j;
			for(i=0; i<=index; i++)
			{
				for(j=i+1; j<=index; j++)
				{
					if(bptr[i].getRating() < bptr[j].getRating())
					{
						Book temp=bptr[i];
						bptr[i]=bptr[j];
						bptr[j]=temp;
					 }
				}
			}
			cout<<"\nSorted Data By Rating :-\n";
		}
		else if(choice==2)
		{
			//sort by price
			int i,j;
			for(i=0; i<index; i++)
			{
				for(j=i+1; j<=index; j++)
				{
					if(bptr[i].getPrice() < bptr[j].getPrice())
					{
						Book temp=bptr[i];
						bptr[i]=bptr[j];
						bptr[j]=temp;
					}
				}
			}
			cout<<"\nSorted Data By Price :-\n";
		}
		else
			cout<<"\nYou have entered wrong choice!!!";
		displayBook();
	}
	return true;
}
//display
void BookManagement :: displayBook()
{
    cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
	cout<<"\n|~|                                        BOOK MANAGEMENT SYSTEM                                          |~|";
	cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|";
	cout<<"\n|~|   BOOK ID   "<<"|"<<"        BOOK NAME      "<<"|"<<"         AUTHOR        "<<"|"<<"       CATEGORY        "<<"|"<<" PRICE "<<"|"<<"  RATING  "<<"|~|";
	cout<<"\n|~|--------------------------------------------------------------------------------------------------------|~|\n";
	for(int i=0; i<=index; i++)
		{
			bptr[i].displaydata();
		}
	cout<<"|~|--------------------------------------------------------------------------------------------------------|~|\n";
}
BookManagement :: ~BookManagement()
{
	if(bptr != NULL)
	{
		delete []bptr;
	}
}