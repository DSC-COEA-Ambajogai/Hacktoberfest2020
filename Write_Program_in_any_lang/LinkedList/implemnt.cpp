//Implementation of LinkedList
//
#include<bits/stdc++.h>
using namespace std;



//Creating a Node
struct Node{
    int data;
    Node *next;
};

//Creating a Linked List Class;
class LList{
    private:
        Node *head, *tail;
    public:
        LList(){
            head = NULL;
            tail = NULL;
        }


    //Now we create a methond/function to insert at begin ;
    void insertAtBegin(int x){
        Node *temp = new Node;
        temp-> data = x;
        temp -> next = NULL;


        if(head == NULL){
            head = temp;
            tail = temp;

        }
        else{
            tail->next = temp;
            tail = tail->next;
        }
    }
    //end of upper function


        //Now lets creat a tranversal function;
        void print() {
            Node *temp = head;
            while(temp != NULL){

                cout << (temp->data) << ' ';
                temp = temp->next;
            }

        }
        //function ends;


        //Recursive way to transversal;
        //first we will create a function that will get the data of head ;
        //then we will pass that head in recursive calls;
        Node* gethead(){

            return head;
        }

        //second part of the function
        void display(Node *head){

            if(head == NULL){
                cout << "NULL";
            }else{
                cout << (head->data) << " ";
                display(head->next);
            }
        }//fucntions end here;

};


int main() {
    LList ll;

    ll.insertAtBegin(10);
    ll.insertAtBegin(110);
    ll.insertAtBegin(290);
    ll.insertAtBegin(20);
    ll.insertAtBegin(40);
    ll.print();
    cout << "Below is output of recursive call" << endl;
    ll.display(ll.gethead());

    return 0;

}



