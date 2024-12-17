#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a;
        b=a;
        reverse(a.begin(),a.end());
        if(a==b)
            printf("Yes! It is palindrome!\n");
        else
            printf("Sorry! It is not palindrome!\n");
    }
    return 0;
}
