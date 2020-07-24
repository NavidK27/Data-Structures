#include<iostream>
using namespace std;
#define max 5
class circular{
private:
 int f,r;
    int cq[max];
    int num,val;

public:

    circular(){

    f=-1;
    r=-1;

    }

void  enqueue(){
 cout<<endl<<"Enter the number";
        cin>>num;

  if(((r+1)%max)==f){

        cout<<"\n Full";
    }
    else {
            r=(r+1)%max;
            cq[r]=num;
            if(r==0){
                f++;

            }

    }
    }

    void dequeue(){

    if(f==-1&&r==-1){

        cout<<"\n Empty";
    }

    else if(f==r){
     val=cq[r];
        f=r=-1;

    }
    else{
        val=cq[f];
        f=(f+1)%max;
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

            cout<<endl<<cq[(temp)%max];

        }

    }
  }
};

int main(){
circular c;
int i,choice;
do{
cout<<"\n Enter your choice"<<endl<<"1 - enqueue"<<endl<<"2 - dequeue"<<endl<<"3 - display";
    cin>>i;

    switch(i)
        {
  case 1:
       c.enqueue();
        break;
  case 2:
        c.dequeue();
        break;
  case 3:
        c.display();
break;

    default:
        cout<<"\n Enter a valid option";


}
cout<<"\n Enter 1 to continue";
        cin>>choice;
}while(choice==1);

}
