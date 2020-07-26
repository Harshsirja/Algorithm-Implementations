#include <iostream>

using namespace std;

int main()
{
    int starttime[8]= {0,2,3,1,5,7,9,11};
    int finishtime[8]= {4,6,7,8,8,11,12,13};
    int i,k=0;
    int activity[8]= {0};
    activity[0]=1;
    for(i=1; i<8; i++)
    {
        if(starttime[i]>=finishtime[k])
        {
            activity[i]=i+1;
            k=i;
        }
    }
    cout<<"{";
    for(i=0; i<8; i++)
        if(activity[i]!=0)
        {
            cout<<activity[i];
            if(i<6)
                cout<<",";
        }
    cout<<"}";
    return 0;
}
