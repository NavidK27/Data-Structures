#include<iostream>
using namespace std;

struct node
{
    int data;
    node *left;
    node *right;

};
node* deleteNode(node*,int);
node *insertbs(node* root,int n)

{

  if(root==NULL)
    {
        root = new node;
        root->data=n;
        root->right=NULL;
        root->left=NULL;
        return root;
    }

    else if(root->data>n)
    {
        root->left = insertbs(root->left,n);

    }

    else if(root->data<n)
    {
        root->right = insertbs(root->right,n);
    }

    else
    {
        cout<<"\n Duplicates not allowed";
    }
}

node* create(node* root)
{
    int num,i=0;
    cout<<"\n Enter the number of nodes";
    cin>>num;
    for(i=0;i<num;i++)
    {
          int n;
    cout<<"\n Enter the data";
    cin>>n;
        root=insertbs(root,n);

    }
return root;
}

void preorder(node *root)
{

    if(root!=NULL)
    {
        cout<<root->data<<"\t";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node *root)
{

    if(root!=NULL)
    {
       inorder(root->left);
         cout<<root->data<<"\t";
         inorder(root->right);
    }
}

void postorder(node* root)
{

    if(root!=NULL)
    {
       postorder(root->left);
        postorder(root->right);
           cout<<root->data<<"\t";
    }
}
int findmin(node* root)
{
    while(root->left!=NULL)
    {
        root=root->left;
    }
    return root->data;
}
node* deleteRoot(node* root,int val)
{
    if(root->left==NULL && root->right==NULL)
    {
        root=NULL;
        delete root; //terminal node
    }
    else if(root->left==NULL)
    {
        node *temp=root;    // one child on right
        root=root->right;
        delete temp;

    }
    else if(root->right=NULL)
    {
        node* temp=root;    //one child on left
        root=root->left;
        delete temp;
    }
    else
    {
        node *temp=root;
        root->data= findmin(root->right);
        root->right = deleteNode(root->right,temp->data);
    }
    return root;

}

node * deleteNode(node * root,int val)
{
    if(root==NULL)
    {
        cout<<"\n No node";
    }
    else if (val==root->data)
    {
        root = deleteRoot(root,val);


    }
    else if (val<root->data)
    {
        root->left=deleteNode(root->left,val);
    }
    else if(val>root->data)
    {
        root->right=deleteNode(root->right,val);
    }
    return root;
}

int totalNodes(node *root)
{
    if(root==NULL)
    {
        return 0;

    }
    else
        return(totalNodes(root->left)+totalNodes(root->right)+1);
}

node *smallest(node *root)
{
    if(root==NULL||root->left==NULL)
    {
        return root;
    }
    else return smallest(root->left);
}
node *largest(node *root)
{
    if(root==NULL||root->right==NULL)
    {
        return root;
    }
    else return largest(root->right);
}

int height(node *root)
{
    int lheight,rheight;
    if(root==NULL)
    {
        return 0;
    }
    else
    {
        lheight=height(root->left);
        rheight=height(root->right);
        if(lheight>rheight)
        {
            return lheight+1;
        }
        else
        {
            return rheight+1;
        }

    }

}
int main()
{


    node* root = NULL;
    root = create(root);
    cout<<"\n Preorder is ";
    cout<<endl;
    preorder(root);
    cout<<"\n Inorder is ";
     cout<<endl;
    inorder(root);
    cout<<"\n Postorder is ";
     cout<<endl;
    postorder(root);
    int val;
    cout<<"\n Enter the value of the node to delete";
    cin>>val;
    root = deleteNode(root,val);
    cout<<"\n Preorder is ";
    cout<<endl;
    preorder(root);
    int tots;
    tots = totalNodes(root);
    cout<<"\n Total number of nodes are: "<<tots;
    node* t = smallest(root);
    cout<<"\n Smallest element is: "<<t->data;
    node * l = largest(root);
    cout<<"\n Largest element is: "<<l->data;
    int h = height(root);
    cout<<"\n Height of the tree is: "<<h;




}
