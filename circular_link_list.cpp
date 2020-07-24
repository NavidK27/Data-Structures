
#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;

};

node * insertbeg(node *head)
{
    int n;
    node *temp=head;
    node * newNode = new node;
    cout<<"Enter the data";
    cin>>n;
    newNode->data = n;
    if(head==NULL)
    {
        newNode->next=newNode;
        head=newNode;
        return head;
    }
    else

    {
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next = newNode;
        newNode->next=head;
        head=newNode;
        return head;


    }
}

node * insertend(node *head)
{
    node *current = head;
    int n;
    while(current->next!=head)
    {

        current=current->next;
    }
    node*last=new node;
    cout<<"Enter the data";
    cin>>n;
    last->data=n;
    current->next=last;
    last->next=head;
    return head;

}

node * deletebeg(node *head)
{
    node *temp=head;
    node *temp1=head->next;
    while(temp->next!=head)
    {

        temp=temp->next;

    }
    temp->next=temp1;
    delete head;
    head=temp->next;
    return head;

}

node * deleteend(node *head)
{
    node *temp=head;
    node *temp1;
while(temp->next!=head)
{
    temp1=temp;
    temp=temp->next;

}
temp1->next=temp->next;
delete temp;
return head;

}
void display(node *head)
{
    if(head==NULL)
    {
        cout<<"Empty";

    }
    else{
        node *current = head;
        while(current->next!=head)
        {
            cout<<current->data;
            current=current->next;

        }
        cout<<current->data;

    }

}

int main()
{
    node *head = NULL;
    int i,con;
    do{
        cout<<"Enter \n 1- insert beginning \n 2- insert end \n 3- delete beginning \n 4- delete end \n 5- display";
        cin>>i;

        switch(i)
        {

        case 1:
            head = insertbeg(head);
            break;
        case 2:
            head  =insertend(head);
            break;
        case 3:
           head =  deletebeg(head);
            break;
        case 4:
            head = deleteend(head);
            break;
        case 5:
            display(head);
            break;



        }
        cout<<"Enter 1 to continue";
        cin>>con;

    }while(con==1);

}
