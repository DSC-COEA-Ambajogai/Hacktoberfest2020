//Given a linked list find the sum of its elements;
//
#include<bits/stdc++.h>
using namespace std;



//creating a node
struct Node{
    int data;
    Node *next;

};

class Llist{

    private:
       Node *head, *tail;

    public:
      Llist() {
          head = NULL;
          tail = NULL;

      }

      //Insertion at begenning
      void insertAt(int x){
          Node *temp = new Node;
          temp -> data = x;
          temp -> next = NULL;

          if(head == NULL){
              head = temp;
              tail = temp;
          }else{
              tail -> next = temp;
              tail = tail-> next;
          }

      }

      //create a sum function
      int lsum(){

          int outsum = 0;


          Node *temp = head;
          while(temp != NULL){
              outsum += temp->data;
              temp = temp->next;
          }

          return outsum;
      }

};


int main(){
    Llist ll;

    ll.insertAt(3);
    ll.insertAt(3);
    ll.insertAt(3);
    ll.insertAt(3);
    ll.insertAt(3);

    cout << ll.lsum();
    return 0;
}

