#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        vector<string>vc;
        string a;
        int n;
        cin>>n;
        while(n--)
        {
            cin>>a;
            vc.push_back(a);
        }
        sort(vc.begin(),vc.end());
        for(int i=0;i<vc.size();i++)
            cout<<vc[i]<<endl;
    }
    return 0;
}
