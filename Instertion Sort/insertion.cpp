#include<iostream>

using namespace std;

void insertion_sort(int a[])
{
    int j,temp;
    for(int i=1;i<5;i++)
    {
        j=i-1;
        temp=a[i];
        while(j>=0 && a[j]>temp)
        {
             a[j+1]=a[j];
             j--;
        }
        a[j+1]=temp;
    }
}
int main()
{
    int a[5];
    cout<<"Enter 5 Values : \n";
    for(int i=0;i<5;i++)
        cin>>a[i];
    insertion_sort(a);
    cout<<"Sorted Value : \n";
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    return 0;
}
