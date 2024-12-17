#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i,n;
    cin>>t;
    while(t--)
    {
        string a,ans1="",ans2="";
        scanf("\n");
        getline(cin,a);
        for(i=0;i<a.size();i++)
        {
            if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u')
                ans1+=a[i];
            else if(a[i]!=' ')
                ans2+=a[i];
        }
        cout<<ans1<<endl;
        cout<<ans2<<endl;
    }
    return 0;
}
