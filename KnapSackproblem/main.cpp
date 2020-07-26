#include <iostream>

using namespace std;

int main()
{
    float weight[5]={3,1,5,6,8};
    float value[5]={12,8,15,42,90};
    float W=7;
    float v=0.0;
    float ratio_vw[5];
    int i,j,k;
    float portion;
    for(i=0;i<5;i++)
        ratio_vw[i]=(value[i]/weight[i]);
    for(j=0;j<5;j++)
    {
        for(k=0;k<5;k++)
        {
            if(ratio_vw[k]<ratio_vw[j])
            {
                swap(ratio_vw[k],ratio_vw[j]);
                swap(weight[k],weight[j]);
                swap(value[k],value[j]);
            }
        }
    }
    i=0;
    while(W > 0)
    {
        if(W < weight[i])
        {
            portion=W/weight[i];
            W-=portion*weight[i];
            v+=value[i]*portion;
        }
        else
        {
            W-=weight[i];
            v+=value[i];
            i++;
        }
    }
    cout<<v;
    /*for(i=0;i<5;i++)
    {
        cout<<weight[i]<<ends;
        cout<<value[i]<<ends;
        cout<<ratio[i]<<endl;
    }*/
    return 0;

}
