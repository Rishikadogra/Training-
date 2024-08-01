#include<iostream>
using namespace std;
class Node{
	public:
		int value;
		 Node* next;//node pointing to next node/element
		 Node(int data){
		 	value=data;
		 	next=NULL;	
		 }
};
void insertAtHead(Node* &head,int value){
	Node* new_node=new Node(value);
	 new_node->next=head;
	 head=new_node;	 
}
void display(Node* head){
	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->value<<"->";
		temp=temp->next;
	}
	cout<<"Null"<<endl;
}
void insertAtLast(Node* &head,int value){
    Node* new_node=new Node(value);
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
void display1(Node* head)
{
    Node* temp = head;
    while (temp != NULL)
    {
        if(temp->value %2 == 0)
        {
            cout<<"Even Numbers: ";
            cout<<temp->value<<;
            temp = temp->next;
        }
        else
        {
            cout<<"Odd Numbers: ";
            cout<<temp->value<<;
            temp = temp->next;
        }
    }
    cout<<"NULL"<<endl;  // to indicate the end of the list
}
int main(){
	//Node* n1=new Node(30);
	//cout<<n1->value<<" "<<n1->next<<endl;
    //create empty node
    Node*head=NULL;
    insertAtHead(head,10);
    insertAtHead(head,20);
    insertAtHead(head,55);
    insertAtHead(head,11);
    insertAtHead(head,89);
    insertAtHead(head,44);

    //insertAtLast(head,50);
    display(head);
    display1(head);
    return 0;
}
