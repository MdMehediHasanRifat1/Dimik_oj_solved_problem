#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        if(n==0)
            cout<<1<<endl;
        else if(n==1)
        {
            cout<<"2 + 1"<<endl;
        }
        else
        {
            for(i=n;i>=2;i--)
            {
                cout<<"2^"<<i<<" + ";
            }
            cout<<"2 + 1"<<endl;
        }
    }
    return 0;
}
