#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c,d,r;
        
        cin>>a>>b>>r>>c>>d;
        r=r*r;
        a=(a-c)*(a-c);
        b=(b-d)*(b-d);
        if(r<a+b)
           printf("The point is not inside the circle\n");
        else
           printf("The point is inside the circle\n");
    }
    return 0;
}
