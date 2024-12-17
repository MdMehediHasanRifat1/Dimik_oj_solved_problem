#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,a,b,c,temp;
    cin>>t;
    while(t--)
    {
        cin>>n;
        temp=n;
        a=n%10;
        n/=10;
        b=n%10;
        n/=10;
        c=n;
        if((a*a*a+b*b*b+c*c*c)==temp)
            printf("%d is an armstrong number!\n",temp);
        else
            printf("%d is not an armstrong number!\n",temp);
    }
    return 0;
}
