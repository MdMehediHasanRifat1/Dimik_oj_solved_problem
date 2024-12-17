#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        while(n)
        {
            c+=(n/5);
            n/=5;
        }
        cout<<c<<endl;
    }
    return 0;
}
