#include<iostream>
using namespace std;

class Node
{
	int data;
	Node*next; //to get the address of next node
	public:
	Node(int);
	int getData();
	Node*getNext();
	void setdata(int);
	void setNext(Node *);	
	
};