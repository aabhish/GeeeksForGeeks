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
   void deleteNode(T data){
     Node<T> *lead=root;
     Node<T> *trail=NULL;

     if(!isEmpty())
     {
        while(lead)
          {
           if(lead->data == data)//Delete node pointed by trail pointer
            { if(trail == NULL)//means first node
              {
                root = lead->next;
                delete lead;
               lead = root;
              }
            else{
              trail->next = lead->next;
              delete lead;
              lead = trail->next;
             }
              count--;
            }
          else{ // need to move ahead
       
              trail = lead;
              lead=lead->next;
              }
           
         }
     }
     else{cout << "List Is already Empty";}
  }
};
int main(){

  ListOperations<int> list;
  list.insertNode(10);
  list.insertNode(1);
  list.insertNode(2);
  list.insertNode(3);
   list.printList();
   list.deleteNode(2);
   list.printList();
  list.deleteNode(10);
   list.printList();
 list.deleteNode(1);
   list.printList();
list.deleteNode(3);
   list.printList();
list.deleteNode(10);
   list.printList();
return 0;
}


