#include<iostream>

using namespace std;
void heapify(int A[],int n,int i)
{
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && A[largest]<A[l])
    {
        largest=l;
    }
    if(r<n && A[r]>A[largest])
    {
        largest=r;
    }
    if(largest!=i)
    {
        swap(A[i],A[largest]);
        heapify(A,n,largest);
    }
}
void buildmaxheap(int A[],int n)
{
    for(int i=(n/2)-1; i>=0; i--)
    {
        heapify(A,n,i);
    }
}
void heap_sort(int A[],int n)
{
    int i;
    buildmaxheap(A,n);
    for(i=n-1; i>=0; i--)
    {
        swap(A[0],A[i]);
        heapify(A,i,0);
    }
}
int main()
{
    int A[10];
    cout<<"Enter 10 Values : ";
    for(int i=0; i<10; i++)
        cin>>A[i];
    int n=sizeof(A)/sizeof(A[0]);
    heap_sort(A,n);
    cout<<endl;
    for(int i=0; i<10; i++)
        cout<<A[i]<<endl;
    return 0;
}

