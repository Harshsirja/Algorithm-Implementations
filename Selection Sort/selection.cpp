#include<iostream>
using namespace std;

void selection_sort(int a[])
{
    int i,j,temp;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
int main()
{
    int a[5];
    cout<<"Enter 5 Values : \n";
    for(int i=0;i<5;i++)
        cin>>a[i];
    selection_sort(a);
    cout<<"Sorted Value : \n";
    for(int i=0;i<5;i++)
        cout<<a[i]<<endl;
    return 0;
}
