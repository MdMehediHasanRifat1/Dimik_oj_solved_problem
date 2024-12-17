#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        string a;
        scanf("\n");
        getline(cin,a);
        char ch;
        cin>>ch;
        int c=0;
        for(i=0;i<a.size();i++)
        {
            if(a[i]==ch)
                c++;
        }
        if(c>0)
        cout<<"Occurrence of '"<<ch<<"' in '"<<a<<"' = "<<c<<endl;
        else
            cout<<"'"<<ch<<"' "<<"is not present"<<endl;
    }
    return 0;
}
