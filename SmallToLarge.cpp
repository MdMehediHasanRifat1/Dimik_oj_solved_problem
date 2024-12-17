#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,j;
    cin>>t;
    for(j=1;j<=t;j++)
    {
        vector<int>a;
        int i,v;
        for(i=0;i<3;i++)
        {
            cin>>v;
            a.push_back(v);
        }
        sort(a.begin(),a.end());
        printf("Case %d: ",j);
        for(i=0;i<3;i++)
        {
            if(i==2)
                printf("%d\n",a[i]);
            else
                printf("%d ",a[i]);
        }
    }
    return 0;
}
