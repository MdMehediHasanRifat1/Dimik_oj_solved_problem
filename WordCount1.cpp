#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        scanf("\n");
        getline(cin,a);
        istringstream s(a);
        int c=0;
        string n;
        while(s>>n)
        {
            c++;
        }
        cout<<"Count = "<<c<<endl;
    }
    return 0;
}
