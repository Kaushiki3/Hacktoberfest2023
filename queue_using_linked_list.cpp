#include<iostream>
using namespace std;
struct Node
{
 int data;
  Node *next;

}*front=NULL,*rear=NULL;
void enqueue(int x){
    Node *t =new Node;
    
    if(front==NULL){
        t->data=x;
        t->next=NULL;
        front=rear=t;
        
    }
    else{
        t->data=x;
        t->next=NULL;
        rear->next=t;
        rear=t;
    }
}
int dequeue(){
    int x=-1;
    if(front==NULL){
        cout<<"it is empty";
    }
    else{
        x=front->data;
        Node *p;
        p=front;
        front=front->next;
        delete (p);
    }
    return x;
}
void display(){
    if(front==NULL){
        cout<<"it is empty";
    }
    else{
        Node *i =front;
        while(i!=NULL){
            cout<<"this is display"<<"-"<<i->data<<endl;
            i=i->next;
        }
    }
}
int main(){
   enqueue(3);
   enqueue(4); 
   enqueue(5);
   cout<<dequeue()<<endl;
   enqueue(8);
   display();
   cout<<dequeue()<<endl; 
   cout<<dequeue()<<endl; 
   cout<<dequeue()<<endl;
   cout<<dequeue()<<endl;
   return 0;
}
