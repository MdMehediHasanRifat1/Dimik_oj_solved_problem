#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        char ch;
        cin>>ch;
        if(ch>='A'&&ch<='Z')
            cout<<"Uppercase Character"<<endl;
        else if(ch>='a'&&ch<='z')
            cout<<"Lowercase Character"<<endl;
        else if(ch>='0'&&ch<='9')
            cout<<"Numerical Digit"<<endl;
        else 
            cout<<"Special Characters"<<endl;
    }
    return 0;
}
