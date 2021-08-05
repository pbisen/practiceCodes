#include<iostream>

using namespace std;

class node{
    public:
    int value;
    node* next;

    node(int val){
        value = val;
        next = NULL;
    }
};

void insertAtHead(node* &head, int val){
    node* toAdd = new node(val);
    node* temp = head;

    if(temp == NULL){
        head = toAdd;
        head->next = head;
        return;
    }

    do{
        temp = temp->next;

    }
    while(temp->next != head);

    temp->next = toAdd;
    toAdd->next = head;
    head = toAdd;


}

void insertAtTail(node* &head,int val){
    node* temp = head;

    if(head == NULL){
        insertAtHead(head,val);
        return;
    }

    do{
        temp = temp->next;

    }
    while(temp->next != head);

    node* toAdd = new node(val);

    temp->next = toAdd;
    toAdd->next = head;
}

void displayList(node* head){
    node* temp = head;

    do{
        cout<<temp->value<<" ";
        temp = temp->next;

    }
    while(temp != head);

    cout<<endl;

    
}

void deleteAtHead(node* &head){

     node* temp = head;

    do{
        temp = temp->next;

    }
    while(temp->next != head);

    temp->next = temp->next->next;
    delete head;
    head = temp->next;

    

}

void deleteNode(node* &head, int pos){
    if(pos == 1){

        deleteAtHead(head);
        return;

    }

    int count = 1;
    node* temp = head;

    for(int i = 0; i < pos-1; i++){
        temp = temp->next;
    }

    node* toDelete = temp->next;

    temp->next = temp->next->next;

    delete toDelete;


}

int main(){
    node* head = NULL;

    insertAtHead(head, 1);
    insertAtHead(head, 9);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    insertAtTail(head, 5);
    displayList(head);

    deleteNode(head, 1);
    displayList(head);

}