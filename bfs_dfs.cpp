#include<iostream>
#include<queue>
#include<stack>
using namespace std;




void bfs(int v[10][10],int num)
{
    int s;
queue<int> q;
    cout<<"\n Enter the origin";
    cin>>s;
    bool b[10];

    for(int i=0;i<num;i++)
    {
        b[i]=false;

    }

    b[s]=true;
    cout<<s;
    q.push(s);
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        for(int i=0;i<num;i++)
        {
           if(v[s][i]==1||v[i][s]==1)
           {
               if(b[i]==false)
               {
                   b[i]=true;
                   cout<<i;
                   q.push(i);
               }
           }
        }

    }

}
void dfs(int v[10][10],int num)
{
    int val;
stack<int> s;
    cout<<"\n Enter the origin";
    cin>>val;
    bool b[10];
    int i;
      for( i=0;i<num;i++)
    {
        b[i]=false;

    }
       b[val]=true;
    cout<<val;
    s.push(val);
    while(!s.empty())
    {
        val=s.top();
        s.pop();

        for( i=0;i<num;i++)
        {
            if(b[i]==false)
            {
                cout<<i;
                b[i]==true;
                if(v[val][i]==1||v[i][val]==1)
                {

                    s.push(i);
                }


            }

        }
    }
}


int main()
{
    int v[10][10];
    int num;

    cout<<"Enter the number of vertices";
    cin>>num;

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<"Enter if there is an edge between the vertices "<<i<<" and "<<j;
            cin>>v[i][j];
        }
    }

    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout<<"\t"<< v[i][j];

        }

        cout<<endl;
    }

    bfs(v,num);
    dfs(v,num);
}
