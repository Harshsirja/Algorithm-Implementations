#include<iostream>
using namespace std;
void bubble_sort(int a[])
{
    int i,j,z,temp;
    for(i=0; i<4; i++)
    {
        for(j=0; j<5-i-1; j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main()
{
    int a[5];
    cout<<"Enter 5 Values : \n";
    for(int i=0; i<5; i++)
        cin>>a[i];
    bubble_sort(a);
    cout<<"Sorted Values : \n";
    for(int i=0; i<5; i++)
        cout<<a[i]<<endl;
    return 0;
}
