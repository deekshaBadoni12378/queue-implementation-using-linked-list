#include <iostream>
#include<conio.h>
using namespace std;
struct Node
{
int x;

Node *link;
};

Node *front = NULL;
Node *rear = NULL;
bool isempty()
{
 if(front == NULL && rear == NULL)
 return true;
 else
 return false;
}
void insertion ( )
{
    int val;
    cout<<"insert element:"<<endl;
    cin>>val;
 Node *ptr = new Node();
 ptr->x= val;
 ptr->link = NULL;
 if( front == NULL )
 {
  front = ptr;
  rear = ptr;
 }
 else
 {
  rear ->link = ptr;
  rear = ptr;
 }
}
void deletion ( )
{
 if( isempty() )
 cout<<"empty\n";
 else
 if( front == rear)
 {

  front = rear = NULL;
 }
 else
 {
  Node *ptr = front;
  front = front->link;

 }
}
void display()
{
 if (isempty())
  cout<<"empty\n";
 else
 {
  Node *ptr = front;
  while( ptr !=NULL)
  {
   cout<<ptr->x<<" ";
   ptr= ptr->link;
  }
 }
}
int main()
{
 int op;

 {
  cout<<"\n1.insertion";
  cout<<"\n2.deletion";
  cout<<"\n4.display";
  cout<<"\n5.exit";
  do{
    cout<<"\nyour choice:"<<endl;
    cin>>op;

  switch (op)
  {
  case 1: cout<<insertion;

          break;
  case 2: deletion();
          break;
  case 3: display();
          break;
  case 4: cout<<"exit"<<endl;
  break;
  default: cout<<"wrong choice"<<endl;
  }
 }
 while(op!=6);
 return 0;
 }
}
