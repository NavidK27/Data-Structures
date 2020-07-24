#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;
char expr[100];
int A[100];
int n, top= -1;
char a,b,c,x;
void push(char z)
{

    if(top==n-1)
    cout<<"Stack is full"<<endl;
    else
    {
        top++;
        A[top]=z;
    }
}
char pop( )
{
    char pv;
    pv=A[top];

    //cout<<top<<endl;
    top=top-1;
    //cout<<pv<<endl;
    return pv;

}
int main()
{
    cout<<"Enter postfix expression"<<endl;
    cin>>expr;
    n=strlen(expr);
    for(int i=0; i<n; i++)
    {
        x=expr[i];
        switch(x)
        {
            case '+' : a=pop();
                            b= pop();
                            c=b+a;
                            push(c);
                            break;

             case '-' : a=pop();
                            b= pop();
                            c=b-a;
                            push(c);
                            //cout<<A[i]<<endl;
                            break;

             case '*' : a=pop();
                            b= pop();
                            c=b*a;
                            push(c);
                            //cout<<A[i]<<endl;
                            break;

             case '/' : a=pop();
                            b= pop();
                            c=b/a;
                            push(c);
                            //cout<<A[i]<<endl;
                            break;
             case '^' : a=pop();
                            b= pop();
                            c=pow(b,a);
                            push(c);
                            //cout<<c<<endl;
                            break;
             case '%' : a=pop();
                            b= pop();
                            c=b%a;
                            push(c);
                            //cout<<A[i]<<endl;
                            break;
            default:
                            x=x-48;
                            push(x);
                            //cout<<A[i]<<endl;
        }
    }
    cout<<"The final value is "<<A[top]<<endl;
}
