#include<iostream>
using namespace std;
struct node
{
int data;
node *prev;
node *next;
};
class linked_list
{
    public:
    node *head=new node();
    linked_list()
    {
      head=NULL;
    }
void insert_beg()
{
    node *first= new node();
    first->prev=NULL;
    cout<<"enter the value"<<endl;
    cin>>first->data;
    if(head==NULL)
    {
        first->next=head;
        head=first;
    }
    else
    {
        first->next=head;
        head->prev=first;
        head=first;
    }
}
void insert_end()
{
    node *last=new node();
    node *temp=head;
    cout<<"enter the value"<<endl;
    cin>>last->data;
    last->next=NULL;
    if(head==NULL)
    {
        last->prev=head;
        head=last;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=last;
        last->prev=temp;
    }
}
void display()
{
    if(head==NULL)
    {
        cout<<"empty"<<endl;
    }
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void displayrev()
{
 cout<<"\n Displaying reverse \n";
    if(head==NULL)
    {
        cout<<"empty"<<endl;
    }
    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->prev;
    }
    cout<<endl;
}
void deletebeg()
{
 cout<<"\n Deleting beginning \n";
 node *temp=head;
    if(head==NULL)
    {
        cout<<"cant delete"<<endl;
    }
    head=head->next;
    delete temp;
}
void deleteend()
{
cout<<"\n Deleting end \n";
    node *temp=head;
    node *temp1=head->next;
    if(head==NULL)
    {
        cout<<"cant delete"<<endl;
    }
    else if(head->next==NULL || head->prev==NULL)
    {
        head=NULL;
    }
    else
    {
    while(temp1->next!=NULL)
    {
        temp=temp->next;
        temp1=temp1->next;
    }
    temp->next=NULL;
    delete temp1;
    }
}
void insertafter()
{
    node *temp=head;
    node * new_node = new node;
    int val,n;
    cout<<"\n Enter the data";
    cin>>n;
    cout<<"\n Enter the value after which the data is to be inserted";
    cin>>val;
    new_node->data = n;
    while(temp->data!=val)
    {
        temp=temp->next;
    }
        new_node->prev = temp;
        new_node->next = temp->next;
        temp->next->prev = new_node;
        temp->next = new_node;
}

void insertbefore()
{
    node *temp = head;
    int n,val;
    node * new_node = new node;
    cout<<"\n Enter the data";
    cin>>n;
    cout<<"\n Enter the value before which the data is to be inserted";
    cin>>val;
    new_node->data = n;
    while(temp->data!=val)
    {
        temp=temp->next;

    }
    new_node->next=temp;
    new_node->prev=temp->prev;
    temp->prev->next=new_node;
    temp->prev=new_node;


}

void deleteafter()
{
    node *temp=head;
    node *temp1;
    int val;
    cout<<"\n Enter the data after which the node has to be deleted";
    cin>> val;
    while(temp->data!=val)
    {
        temp=temp->next;

    }
    temp1 = temp->next;
    temp->next=temp1->next;
    temp1->next->prev=temp;
    delete temp1;

}

void deletebefore()
{
      node *temp=head;
    node *temp1;
    int val;
    cout<<"\n Enter the data before which the node has to be deleted";
    cin>> val;
       while(temp->data!=val)
    {
        temp=temp->next;

    }
    temp1 = temp->prev;
    if(temp1==head)
    {
        deletebeg();
    }
    else{
        temp->prev = temp1->prev;
        temp1->prev->next=temp;

    }
    delete temp1;


}

};
int main()
{
    linked_list obj;
    obj.insert_beg();
    obj.insert_beg();
    obj.insert_end();
    obj.display();
    obj.displayrev();
    obj.insertafter();
    obj.display();
    obj.insertbefore();
    obj.display();
    obj.deletebeg();
    obj.display();
    obj.deleteafter();
    obj.display();
    obj.deletebefore();
    obj.display();
    obj.deleteend();
    obj.display();

}
