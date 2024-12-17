#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,n;
    scanf("%d",&t);
    while(t--)
    {
        int c=0;
        string s,b;
        scanf("\n");
        getline(cin,s);
        istringstream word(s);
        while(word>>b)
        {
            c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
