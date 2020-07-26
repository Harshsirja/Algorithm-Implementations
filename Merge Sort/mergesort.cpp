#include<iostream>
using namespace std;

void Merge(int arr[],int min,int mid,int max)
{
  int tmp[30];
  int i,j,k,m;
  j=min;
  m=mid+1;


  for(i=min; j<=mid && m<=max ; i++)
  {

     if(arr[j]<=arr[m])
     {
	 tmp[i]=arr[j];
	 j++;
     }
     else
     {
	 tmp[i]=arr[m];
	 m++;
     }
  }
  if(j>mid)
  {
     for(k=m; k<=max; k++)
     {
	 tmp[i]=arr[k];
	 i++;
     }
  }
  else
  {
     for(k=j; k<=mid; k++)
     {
	tmp[i]=arr[k];
	i++;
     }
  }
  for(k=min; k<=max; k++)
  {
     arr[k]=tmp[k];
   }
}
void Merge_sort(int arr[],int min,int max)
{
 int mid;

 if(min<max)
 {
   mid=(min+max)/2;
   Merge_sort(arr,min,mid);
   Merge_sort(arr,mid+1,max);
   Merge(arr,min,mid,max);
 }
}

int main()
{
    int arr[5];
    cout<<"Enter 5 Values : \n";
    for(int i=0;i<5;i++)
    cin>>arr[i];
    int n=sizeof(arr)/sizeof(arr[0]);
    Merge_sort(arr,0,n-1);
    cout<<"Sorted Value : \n";
    for(int i=0;i<5;i++)
        cout<<arr[i]<<endl;
    return 0;
}
