#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,t,c=0,r;
    scanf("%d",&t);
    while(t--)
    {
        c++;
        vector<int>v;
        scanf("%d",&n);
        for(i=1;i*i<=n;i++)  // n =50  1*1 <= 50  7*7 <=50 8*8<=50
        {
            if(n%i==0)
            {
                if(i*i==n)  // n=16 i=4 n/i = 4 
                {
                    v.push_back(i);
                }
                else
                {
                    v.push_back(i);
                    v.push_back(n/i);
                }
            }
        }
        
        sort(v.begin(),v.end());
        //sort(v,v+n);
        printf("Case %d: ",c);
        for(i=0;i<v.size();i++)
        {
            if(i==v.size()-1)
                printf("%d\n",v[i]);
            else
                printf("%d ",v[i]);
        }
    }
    return 0;
}

