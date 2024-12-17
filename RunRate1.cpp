#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int target,run,ballr,ballp,runr;
        cin>>target>>run>>ballr;
        double cr,rr,ov1,ov2;
        ballp=300-ballr;
        runr=target-run+1;
        printf("%0.2lf ",(double)(run*6)/ballp);
        if(target-run<0)
        {
            printf("0.00\n");
            continue;
        }
        printf("%0.2lf\n",(double)(runr*6)/ballr);
    }
    return 0;
}
