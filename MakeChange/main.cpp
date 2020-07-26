#include <iostream>
using namespace std;
int main()
{
    int availabelcoin[5]={100,25,10,5,1};
    int n;
    cout<<"Enter Amount : \n";
    cin>>n;
    int i=0;
    int sum=0;
    int coin[5]={0};
    while(i<5)
    {
        if(sum+availabelcoin[i]<=n)
        {
            coin[i]++;
            n-=(sum+availabelcoin[i]);
        }
        else
        {
            i++;
        }
    }
    int totalcoin=0;
    for(i=0;i<5;i++)
    {
        if(coin[i]==1 || coin[i]==0)
            cout<<"\n"<<availabelcoin[i]<<" : "<<coin[i];
        else
            cout<<"\n"<<availabelcoin[i]<<" : "<<coin[i];
        totalcoin+=coin[i];
    }
    cout<<"\nTotal Coins = "<<totalcoin;
}
