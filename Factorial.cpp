#include <bits/stdc++.h>
using namespace std;
int main() {
   long long i,a[21];
    a[0]=1;
    for(i=1;i<21;i++)
        a[i]=i*a[i-1];
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<a[n]<<endl;
    }
    return 0;
}
