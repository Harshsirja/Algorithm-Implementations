#include <iostream>
using namespace std;
int main()
{
    int amount=8;
    int c[4][amount+1];
    int d[]={0,1,4,6};
    for(int i=0;i<amount+1;i++)
    {
        c[0][i]=0;
        c[1][i]=i;
    }
    for(int i=2;i<4;i++)
    {
        c[i][0]=0;
        for(int j=1;j<amount+1;j++)
        {
            if( c[i-1][j] < ( 1 + c[i][ j-d[i] ] ) )
                c[i][j]=c[i-1][j];
            else
                c[i][j]=1+c[i][j-d[i]];
        }
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<amount+1;j++)
            cout<<c[i][j]<<ends;
        cout<<endl;
    }
    return 0;
}
