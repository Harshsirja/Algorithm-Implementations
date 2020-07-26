#include<iostream>

using namespace std;
int Partition(int a[],int p,int r)
{
    int x=a[r];
    int i,j;
    i=p-1;
    for(j=p;j<=r-1;j++)
    {
        if(a[j]<x)
        {
            i++;
            swap(a[i],a[j]);

        }
    }
    swap(a[i+1],a[r]);
    return (i+1);
}
void Quick_sort(int a[],int p,int r)
{
    int q;
    if(p<r)
    {
        q=Partition(a,p,r);
        Quick_sort(a,p,q-1);
        Quick_sort(a,q+1,r);
    }
}
int main()
{
    int a[5];
    cout<<"Enter 5 Values : \n";
    for(int i=0;i<5;i++)
    cin>>a[i];
    int n=sizeof(a)/sizeof(a[0]);
    Quick_sort(a,0,n-1);
    cout<<"Sorted Value : \n";
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    return 0;
}
