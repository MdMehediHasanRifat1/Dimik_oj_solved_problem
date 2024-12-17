#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        double a,b;
        int c=0;
        cin>>a;
        while(a>1.0)
        {
            c++;
            a/=2;
        }
        cout<<c<<" "<<"days"<<endl;
    }
    return 0;
}
