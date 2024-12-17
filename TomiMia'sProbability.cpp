#include <bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    long long ans=1,i;
    for(i=1;i<=n;i++)
        ans*=i;
    return ans;
}
int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        string s,words;
        scanf("\n");
        getline(cin,s);
        map<string,int>mp;
        vector<string>v;
        istringstream iss(s);
        long long c=0;
        long long ans=1;
        while(iss>>words)
        {
            c++;
            ans*=c;
            mp[words]++;
            v.push_back(words);
        }
        sort(v.begin(),v.end());
        v.erase(unique(v.begin(),v.end()),v.end());
        for(i=0;i<v.size();i++)
        {
            ans/=fact(mp[v[i]]);
        }
        cout<<"1/"<<ans<<endl;
    }
    return 0;
}
