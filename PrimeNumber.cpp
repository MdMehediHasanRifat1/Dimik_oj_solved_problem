#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j;
    bool prime[100007]={false};
    prime[0]=true;
    prime[1]=true;
    for(i=2;i*i<100007;i++)
    {
        for(j=i*i;j<100007;j+=i)
            prime[j]=true;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c=0;
        cin>>a>>b;
        for(i=a;i<=b;i++)
        {
            if(prime[i]==false)
                c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
