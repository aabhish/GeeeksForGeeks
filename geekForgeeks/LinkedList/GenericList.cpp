#include<iostream>
using namespace std;


template<class T>
class Node{

public:
T data;
Node *next;
};

template<class T>
class ListOperations
{
 Node<T> *root;
 int count;
 public:
  ListOperations(){
        root = NULL;
        count =0;
   }
  bool isEmpty(){
     if(count ==0)//List is empty
     return true;
     return false;
  }
  void insertNode(T data)
   {
      Node<T> *temp;
      temp = new Node<T>;
      temp->data = data;
      temp->next = NULL;
       if(isEmpty()){
       root = temp;
       }
      else{
       temp->next = root;
       root=temp;
      }
     count++;
        
   }
  void printList(){
    Node<T> *temp = root;
     while(temp){
        cout<<temp->data<<endl;
        temp = temp->next;
    }
  }
};


int main(){

  ListOperations<string> list;
  list.insertNode("Abhish");
  list.insertNode("Sonali");
   list.printList();
 
return 0;
}
