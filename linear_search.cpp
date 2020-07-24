#include<iostream>
using namespace std;

void linearsearch(int mar[],int id[],int num,int n)
{
    int c=0;
    int i;
    for(i=0;i<n;i++)
    {
        if(num==mar[i])
        {
            c++;
            break;
        }

    }
    if(c==1)
    {
    cout<<endl<<"\n The id number having the marks you searched for is "<<id[i];
    }
    else
    {
        cout<<"\n Not there";
    }
}


int main()
{
 int id[10];
int mar[10];
        int a,n;
        int num;
        cout<<"Enter the number of students";
        cin>>n;
        for(a=0;a<n;a++)
        {
           cout<<"\n Student number "<<a+1;
           cout<<"\n Enter the id";
           cin>> id[a];
           cout<<"\n Enter the marks";
           cin>>mar[a];
        }
        cout<<"\n Enter the marks you want to search for";
        cin>>num;
        linearsearch(mar,id,num,n);
}
