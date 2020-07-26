#include <iostream>

using namespace std;

int main()
{
    int weight=8;
    int v[]={0,4,6,15,15,12};
    int w[]={0,1,2,3,4,5};
    int vw[6][weight+1];
    for(int i=0;i<weight+1;i++)
    {
        vw[0][i]=0;
        vw[1][i]=i;
    }
    for(int i=2;i<6;i++)
    {
        vw[i][0]=0;
        for(int j=1;j<weight+1;j++)
        {
            if( vw[i-1][j] > (1 + vw[i][ j-v[i] ]) )
            {
                vw[i][j]=vw[i-1][j];
            }
            else
            {
                vw[i][j]=1+vw[i][ j-v[i] ];
            }
        }
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<weight+1;j++)
            cout<<vw[i][j]<<ends;
        cout<<endl;
    }


}
