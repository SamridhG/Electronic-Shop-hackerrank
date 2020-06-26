       #include<iostream>
#include<vector>
using namespace std;
int main()
{
    int budget,a,ki,ui,i,j,sum,temp=0;
    cin>>budget>>ki>>ui;
    vector<int>K;
    vector<int>U;
    for(i=0;i<ki;i++)
    {
        cin>>a;
        K.push_back(a);
    }
    for(i=0;i<ui;i++)
    {
        cin>>a;
        U.push_back(a);
    }
    for(i=0;i<ki;i++)
    {
        for(j=0;j<ui;j++)
        {
            sum=K[i]+U[j];
            if(sum<=budget && sum>=temp)
            {
                temp=sum;
            }
        }
    }
    if(temp==0)
    {
        cout<<"-1";
    }
    else{
        cout<<temp;
    }
}

