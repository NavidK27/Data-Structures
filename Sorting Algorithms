#include<iostream>
 using namespace std;
 void BubbleSort(int n, int arr[])
 {
     int i,temp,j;

 for(i=0;i<(n-1);i++)
 {
 for(j=0;j<(n-i-1);j++)
 {
 if(arr[j]>arr[j+1])
 {
 int temp=arr[j];
 arr[j]=arr[j+1];
 arr[j+1]=temp;
 }
 }
 cout<<endl;
 for(int k=0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
 }
     cout<<"\nSorted List is:\n";
     for(i=0;i<n;i++)
     {
         cout<<arr[i]<<" ";
     }

 }
 void InsertSort(int n, int arr[])
 {
     int i,j,temp;
     for(i=1;i<n;i++)
 {
 temp=arr[i];
 j=i-1;
 while((temp<arr[j]) && (j>=0))
 {
 arr[j+1]=arr[j];
 j=j-1;
 }
 arr[j+1]=temp;
 cout<<"Pass:"<<i<<endl;
 for(int k =0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
         cout<<endl;
 }
 cout<<"Array after sorting : \n";
 for(i=0; i<n; i++)
 {
 cout<<arr[i]<<" ";
 }
 }

 void SelectSort(int n, int arr[])
 {     int i,minplace,temp,j;
     for(int i=0;i<n-1;i++)
     {
         minplace=i;
         for(j=i+1;j<n;j++)
        {             if(arr[j]<arr[minplace])
                 minplace=j;
         }
         temp=arr[i];
         arr[i]=arr[minplace];
         arr[minplace]=temp;
         cout<<endl;
         for(int k=0;k<n;k++)
         {
             cout<<arr[k]<<" ";
         }
     }
 }
 void mer(int arr[],int low,int mid,int high,int n);
 void mergesort(int arr[],int low,int high,int n)
{


    if(low<high)
    {
         int mid;
        mid=(low+high)/2;
        mergesort(arr,low,mid,n);
        mergesort(arr,mid+1,high,n);
        mer(arr,low,mid,high,n);
    }
}
void mer(int arr[20],int low,int mid,int high,int n)
{

    int arr1[10];
    int i,j,k=0;
    i=low;
    j=mid+1;

    while(i<=mid&&j<=high)
    {

        if(arr[i]<arr[j])
        {
            arr1[k]=arr[i];
            i++;
            k++;

        }
        else
        {
            arr1[k]=arr[j];
            j++;
            k++;

        }
    }
    while(i<=mid)
    {
        arr1[k]=arr[i];
        i++;
        k++;

    }
    while(j<=high)
    {
        arr1[k]=arr[j];
        j++;
        k++;
   }
int cnt=0;
   for(int i=low;i<=high;i++)
   {
       arr[i]=arr1[cnt];
       cnt++;
   }
for(int i=0;i<n;i++)
{
    cout<<"\t "<<arr[i];
}
cout<<endl;
}

 int main()
 {
     int arr[50],n,i,choice=1;
      int low,high;
     cout<<"1]Bubble Sort\n2]Insert Sort\n3]Select Sort\n4]Merge Sort";
     cout<<"\nEnter your choice:";
     cin>>choice;

     cout<<"\nEnter total number of elements:";
    cin>>n;
 cout<<"Enter the elements of array:"<<endl;
 for(i=0; i<n; i++)
 {
 cin>>arr[i];
 }
 cout<<"\n";
  low=0;
    high=n-1;
 switch(choice)
 {
     case 1: BubbleSort(n,arr);
                 break;
         case 2: InsertSort(n,arr);
                 break;
         case 3: SelectSort(n,arr);
                 break;
         case 4: mergesort(arr,low,high,n);
         for(int i=low;i<=high;i++)
{
    cout<<endl;
    cout<<"\t "<<arr[i];
}
         break;
         default: cout<<"\nWrong choice";
                 break;
 }
 }
