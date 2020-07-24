#include <iostream>
using namespace std;
struct node
{
    int data;
    node * next;
};
node * insertbeg(node * head)
{
 int value;
    cout<<"\n Enter the value ";
    cin>>value;

    node * first;
    first = new node;
    first->data = value;
    first->next = head;
    head = first;
    return head;
}
void display(node *head)
{
    node * temp = head;
    while(temp!=NULL)
    {
        cout<<endl<<temp->data;
        temp = temp->next;
    }
}
void insertend(node* head)
{
    cout<<"\n Inserting at the end";
    node* current=head;
    node*last=new node;
    cout<<"\n Enter the value";
    cin>>last->data;
    last->next=NULL;
    if(head==NULL)
    {
        head=last;
    }
    else
        while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=last;
}
node * deletebeg(node * head)
{
    cout<<"\n Deleting the beginning node";
    node *temp=head;
    cout<<"\n The deleted element is "<<temp->data;
    head = head->next;
    delete temp;
    return head;
}
void deleteend(node*head)
{
    cout<<"\n Deleting the ending node";
    node *temp=head;
    node * temp1;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;

    }
    cout<<"\n The deleted element is "<<temp->data;
    temp1->next=NULL;
    delete temp;
}
int main()
{
    int num;
    int i;
    cout<<"\n Enter the number of nodes";
    cin>>num;
    node * head = NULL;
    for(i=0;i<num;i++){
    head = insertbeg(head);
    }
    insertend(head);
    display(head);
    head = deletebeg(head);
    display(head);
    deleteend(head);
    display(head);
}
