#include<iostream>
using namespace std;


class stack{

private:
    int top,max;
    int array[100];


    int i,num,value;
public:

    stack(){
    top=-1;
    max=50;
    }
void push(){


cout<<"Enter the number you want to push";
cin>>num;

if(top>=(max-1)){
    cout<<"Overflow";
}
else {top++;
array[top]=num;
}
}
void pop(){

if(top==-1){
    cout<<"\n Underflow";
}
else{
    value=array[top];
top--;
}
}

void display(){

cout<<"\n The elements are: ";
for(i=0;i<=top;i++){

    cout<<"\n";
    cout<<array[i];

}

}

};

int main(){

stack s;
int  x,y,cont=1;


while(cont==1)
{

cout<<"\n The choices are "<<endl<< "1 - Push "<<endl<<"2 - Pop"<<endl<<"3 - Display";
cin>>x;
switch(x)
{

    case 1: s.push();
    break;
    case 2: s.pop();
    break;
    case 3: s.display();
    break;
    default:
        break;
}
cout<<"\n Enter 1 to continue";
cin>>cont;
}
}
