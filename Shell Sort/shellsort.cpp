#include<iostream>

using namespace std;

void shell_sort(int a[])
{
    int interval=4;
    int i,j,k,temp;
    k=0;
    while(interval>0)
    {
        for(k=0;k<interval;k++)
        {
            for(i=k+interval;i<10;i+=interval)
            {
                j=i-interval;
                temp=a[i];
                while(j>=0 && a[j]>temp)
                {
                    a[j+interval]=a[j];
                    j-=interval;
                }
                a[j+interval]=temp;
            }
        }
            interval/=2;
    }
}
int main()
{
    int a[10];
    cout<<"Enter 10 Values : \n";
    for(int i=0;i<10;i++)
        cin>>a[i];
    shell_sort(a);
    cout<<"Sorted Value : \n";
    for(int i=0;i<10;i++)
        cout<<a[i]<<endl;
    return 0;
}
