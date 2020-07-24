#include<iostream>
using namespace std;
#define max 5

class que{

private:
  int f,r;
    int m,num;
    int q[max];
    int val;

public:
    que(){

    f=-1;
    r=-1;

    }
    void enqueue(){
 cout<<"\n Enter the element you want to enter";
    cin>>num;
    if( r==(max-1)){
            cout<<"\n Overflow";

    }
 else {

     r++;
        q[r]=num;
        if(r==0){
            f++;
        }
    }

    }

    void isempty(){

    if(f==-1&&r==-1){}

    cout<<"\n It is empty";

    }

    void isfull(){
    if(r==(max-1)){

        cout<<"\n It is full";

    }

    }

    void dequeue(){

    if(f==-1||f>r){

        cout<<"\n Underflow";
    }

   else {
        val=q[f];
        f++;

    }
    }
 void display(){

    cout<<"\n The queue is :";
    int temp;

    if(f==-1&&r==-1){
        cout<<"\n Empty";
    }
    else {

        for(temp=f;temp<=r;temp++){

            cout<<endl<<q[temp];

        }

    }

    }

};

int main(){
que que1;
int i,choice;
do{
   cout<<"\n Enter your choice"<<endl<<"1 - enqueue"<<endl<<"2 - to check empty"<<endl<<"3 - to check full"<<endl<<"4 - dequeue"<<endl<<"5 - display";
    cin>>i;

    switch(i)
        {
  case 1:
 que1.enqueue();
        break;
    case 2:
        que1.isempty();
        break;

    case 3:
        que1.isfull();
        break;

    case 4:
        que1.dequeue();
        break;

    case 5:
        que1.display();

    default:
        cout<<"\n Enter a valid option";


}
cout<<"\n Enter 1 to continue";
        cin>>choice;
}while(choice==1);

}
