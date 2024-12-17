#include<bits/stdc++.h>
using namespace std;
int main()
{

    int i,j,n,m,x,t;
    cin>>t;
    while(t--)
    {
         cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>m;
        int b[m],c[n+m];
    for(i=0;i<m;i++)
    {
        cin>>b[i];
    }
    i=0;
    j=0;
    x=-1;
    while(i<n||j<m)
    {
        x++;
        if(i<n&&j<m)
        {
            if(a[i]<=b[j])
            {
                c[x]=a[i];
                i++;
            }
            else
            {
                c[x]=b[j];
                j++;
            }
        }
        else if(i<n)
        {
            c[x]=a[i];
            i++;
        }
        else if(j<m)
        {
            c[x]=b[j];
            j++;
        }
    }
    for(i=0;i<n+m;i++)
    {
        if(i==n+m-1)
            cout<<c[i]<<endl;
        else
            cout<<c[i]<<" ";
    }
    }
    return 0;
}