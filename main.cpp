using namespace std;
#include <iostream>
#include"book.h"
#include"bookmanagement.h"
int main()
{
	int size = 100;
	BookManagement bookManagement(size);
	bookManagement.hardCodedData();

	int choice;
	do
	{
	    cout<<"\n"<<"-------------------------------"<<"~ Book Management System ~"<<"-------------------------------"<<"\n"<<"\n";
			cout<<"\n\t\t\t\t\t\t1.Display Book";
		cout<<"\n\t\t\t\t\t\t2.Add Book";
		cout<<"\n\t\t\t\t\t\t3.Search Book";
		cout<<"\n\t\t\t\t\t\t4.Update Book";
		cout<<"\n\t\t\t\t\t\t5.Delete Book";
		cout<<"\n\t\t\t\t\t\t6.Sorting Book";
		cout<<"\n\t\t\t\t\t\t7.Exit";


		cout<<"\nEnter Choice: ";
  		cin>>choice;

  		switch(choice)
  		{
		   case 1:
           {
		     bookManagement.displayBook();
			 break;
	       }
	   	   case 2:
           {
           	 int bookId;
   	         char bookName[40], authorName[40], category[40];
             double price, rating;

             cout<<"\n\nEnter Book ID: ";
             cin>>bookId;

             cout<<"Enter Book Name: ";
             cin>>bookName;

             cout<<"Enter Book Author Name: ";
             cin>>authorName;

             cout<<"Enter Book Category: ";
             cin>>category;

             cout<<"Enter Book Price: ";
             cin>>price;

             cout<<"\nEnter Book Rating: ";
             cin>>rating;

             Book b1(bookId, bookName, authorName, category, price, rating);
             if(bookManagement.addBook(b1))

               cout<<"\nBook Added SuccesFully!!";
             else

                cout<<"\nBook Stack Is Full!!";

             break;
		   }
 	       case 3:
		   {
		   	   	cout<<"\n1.Book ID";
				cout<<"\n2.Book Name";
				cout<<"\n3.Author Name";
				cout<<"\n4.Category";
				cout<<"\n\nSearch Book By :";

                int choice1;
                cin>>choice1;

                if( choice1 == 1)
                {
                	int bookId;
                	cout<<"Enter the Book ID you want to search: ";
                	cin>>bookId;
                	int res = bookManagement.searchByBookId(bookId);
                	if(res==0)
                	  cout<<"\nBook ID is Empty !!";
				}
				else if(choice1 == 2)
				{
				   char bookName[40];
 		    	   fflush(stdin);
	      		   cout<<"Enter The Book Name You Want To search: ";
      			   gets(bookName);

 	   	 		   int res = bookManagement.searchByBookName(bookName);
       	    	   if(res==0)
       			       cout<<"\nBook Not Found !!";
				}
			    else if(choice1 == 3)
				{
				   char authorName[40];
			   	   fflush(stdin);
	      		   cout<<"Enter The Author Name You Want To search: ";
      			   gets(authorName);

 	   	 		   int res = bookManagement.searchByAuthorName(authorName);
       	    	   if(res==0)
       			       cout<<"\nAuthor Name Not Found!!";
				}
				else if(choice1 == 4)
				{
				   char category[40];
	      		   fflush(stdin);
	      		   cout<<"Enter The Author Name You Want To search: ";
      			   gets(category);

 	   	 		   int res = bookManagement.searchBycategory(category);
       	    	   if(res==0)
       			       cout<<"\nCategory Not Found !!";
				}
			    else
                  cout<<"Invalid Choice !!";
				  break;
		   }
 	       case 4:
	       {
		      int res = bookManagement.updateBook();
              if(res==0)
                 cout<<"\nSystem is Full !!";
              break;
		   }
 	       case 5:
 		   {
               int res = bookManagement.deleteBook();
               if(res==0)
                  cout<<"\nBook Stack Is Empty !!";
               break;
		   }
 	       case 6:
 		   {
               int res = bookManagement.sortBook();
               if(res==0)

               	 cout<<"\nBook Stack Is Empty !!";

		   }
 	       case 7:
 		   {
		      cout<<"Exiting Program. Thank You!!"<<" \n";
			  break;
	       }
		   default:
		   {
		      cout<<"\nPlease Enter Valid Choice !!";
		   }
    	}
    }while(choice!=7);
     return 0;
}