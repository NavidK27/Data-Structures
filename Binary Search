#include<iostream>
using namespace std;
void binarysearch(int marks[],int id[],int low,int high,int num)
    {
        int m;
        int c =0;
        m=(low+high)/2;

        if(marks[high]<num)
        {
            cout<<"\n Not there";
        }
        while(low<=high)
        {
            if(marks[m]==num)
            {
                c++;
                break;

            }
            else if(marks[m]>num)
            {
                high = m-1;

                m=(low+high)/2;
            }
            else if(marks[m]<num)
            {
                low=m+1;
                m=(high+low)/2;
            }
        }
        if(c==1)
        {
            cout<<endl<<"\n The id number having the marks you searched for is "<<id[m];
        }
        else
                cout<<"\n Not there";

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
        int l = 0;
        binarysearch(mar,id,l,n-1,num);
    }

