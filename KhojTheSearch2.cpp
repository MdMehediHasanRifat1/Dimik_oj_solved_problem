#include<bits/stdc++.h>
using namespace std;
#define ll long long 
int main()
{
    int i,t,n;
    cin>>t;
    while(t--)
    {
        string a,b,c;
        int d=0;
        cin>>a>>b;
        for(i=0;i<a.size()-b.size()+1;i++)
        {
            c=a.substr(i,b.size());
            if(c==b)
            {
                d++;
            }
        }
        cout<<d<<endl;
    }
    return 0;
}