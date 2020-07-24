#include<iostream>
using namespace std;
struct node
{
    int id;
    char name;
    node *left;
    node *right;
};
class binarytree
{
    public:
    binarytree()
    {
    node *root= NULL;
    }
    node* insertnode(node *root, int value, char name1)
    {
        if(root == NULL)
        {
             node *newnode= new node();
            newnode->id= value;
            newnode->name= name1;
            newnode ->left= NULL;
            newnode->right= NULL;
            root= newnode;
            return root;
        }
        else if(root->id > value)
        root->left= insertnode(root->left, value, name1);
        else if(root -> id <value)
        root->right= insertnode(root->right, value, name1);
        else
            cout<<"Value exists in the tree \n";
    }
    void predisplay(node *root)
    {
        if(root==NULL)
            cout<<"Tree is empty \n";
            else if(root!= NULL)
            {
                cout<<root ->id<<endl;
                cout<<root->name<<endl;
        if(root->left != NULL)
        {
        predisplay(root->left);
        }
        if(root->right != NULL)
        {
        predisplay(root->right);
        }
            }
    }
    void indisplay(node *root)
    {
        if(root==NULL)
            cout<<"Tree is empty \n";
            else if(root->left != NULL)
        {
        indisplay(root->left);
        }
                if(root!= NULL)
            {
                cout<<root ->id<<endl;
                cout<<root->name<<endl;

        if(root->right != NULL)
        {
        indisplay(root->right);
        }
            }
    }

    void postdisplay(node *root)
    {
        if(root==NULL)
            cout<<"Tree is empty \n";
            else if(root->left != NULL)
        {
        postdisplay(root->left);
        }
                if(root->right != NULL)
        {
        postdisplay(root->right);
        }
                if(root!= NULL)
            {
                cout<<root ->id<<endl;
                cout<<root->name<<endl;
            }

    }


    void bst(node *root, int value)
    {   int flag=0;

         if(root!=NULL)
        {

        if(root->id == value)
            {cout<<"Value is found \n";
                cout<<root->name;
                flag = 1;
            }
        else
            if(value > root->id)
            bst(root->right, value);
        else
            if (value<root->id)
            bst(root ->left, value);
        }

        else if(flag==0)
            cout<<"Value not found \n";
    }
};
int main()
{
    cout<<"\n Customer details: ";
    binarytree bt;
    node *root= NULL;
    int choice;
    do
    {int value;
        char name1;
    cout<<"\n Enter ID to be entered \n";
    cin>>value;
    cout<<"Enter name of customer \n";
    cin>>name1;
    root= bt.insertnode(root,value,name1);
    cout<<"Enter 0 to exit. Enter 5 to continue inserting customer details \n";
    cin>>choice;
    }while(choice !=0);
    int choice1;
    do
    {
    cout<<" \nMenu \n 1. Predisplay \n 2. In display \n 3. Post display \n 4. Search \n 5. Enter new ID \n 0 to exit \n enter choice\n ";
    cin>>choice1;
    switch(choice1)
    {
       case 1:  cout<<"Pre display \n";
   bt.predisplay(root);
   cout<<endl;
   break;
       case 2:

   cout<<"In display \n";
   bt.indisplay(root);
   break;
   case 3:
   cout<<endl<<"Post display \n";
   bt.postdisplay(root);
    break;

    case 4:
   int value1;
   cout<<"Enter ID to be found \n";
   cin>>value1;
   bt.bst(root, value1);
   break;
    case 5:
        int newval;
        cout<<"Enter new value \n";
        cin>>newval;
        char newname;
        cout<<"Enter new name \n";
        cin>>newname;
        root= bt.insertnode(root,newval,newname);
        break;
    }
    }
    while(choice1!=0);
}
