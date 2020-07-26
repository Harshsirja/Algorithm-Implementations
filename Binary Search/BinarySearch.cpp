#include<iostream>

using namespace std;

void bubble_sort(int a[])
{
    int i,j,z,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


int BinarySearch(int a[],int low,int high,int key)
{
    int mid=(low+high)/2;
    if(a[mid]>key)
    {
        high=mid-1;
        BinarySearch(a,low,high,key);
    }
    else if(a[mid]<key)
    {
        low=mid+1;
        BinarySearch(a,low,high,key);
    }
    else if(a[mid]==key)
    {
        return mid;
    }
}
int main()
{
    int a[5];
    int key;
    cout<<"Enter 5 Values : ";
    for(int i=0;i<5;i++)
        cin>>a[i];
    bubble_sort(a);
    cout<<"Enter key Value : ";
    cin>>key;
    int n=sizeof(a)/sizeof(a[0]);
    int position=BinarySearch(a,0,n-1,key);
    cout<<"Position of key is : "<<position;
    return 0;
}
