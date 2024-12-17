#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        string s;
        scanf("\n");
        getline(cin,s);
        int c=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='A'||s[i]=='a'||s[i]=='e'||s[i]=='E'||s[i]=='I'||s[i]=='i'||s[i]=='O'||s[i]=='o'||s[i]=='u'||s[i]=='U')
            {
                c++;
            }
        }
        printf("Number of vowels = %d\n",c);
    }
    return 0;
}
