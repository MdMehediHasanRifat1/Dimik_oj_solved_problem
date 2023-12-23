#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,j,c=1001;
    for(i=1;i<=200;i++)
    {
        for(j=1;j<=5;j++)
        {
            c--;
            if(j==5)
                printf("%d\n",c);
            else
                printf("%d ",c);
        }
    }
    return 0;
}