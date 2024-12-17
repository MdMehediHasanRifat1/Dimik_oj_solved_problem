#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i,n;
        string a;
        scanf("\n");
        getline(cin,a);
        n=a.size();
        int s=-1,e=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]!=' ')
            {
                s=i;
                while(a[i]!=' ')
                {
                    e=i;
                    if(i==n-1)
                    {
                        e=n-1;
                        break;
                    }
                    i++;
                }
                reverse(a.begin()+s,a.begin()+e+1);
            }
        }
        cout<<a<<endl;
    }
    return 0;
}
