#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,r,sum=0;
        cin>>n;
        while(n)
        {
            r=n%10;
            sum=sum*10+r;
            n/=10;
        }
        cout<<sum<<endl;
    }
    return 0;
}
