#include <iostream>
using namespace std;
#define ll unsigned long long
int main() 
{
    int t,i,j;
    cin>>t;
    ll a[52][53];
    a[0][0]=1;
    a[1][0]=1;
    a[1][1]=1;
    for(i=2;i<=51;i++)
    {
      a[i][0]=1;
      for(j=1;j<i;j++)
      {
        a[i][j]=a[i-1][j-1]+a[i-1][j];
      }
      a[i][j]=1;
    }
    while(t--)
    {
      ll n;
      cin>>n;
      for(i=0;i<=n;i++)
      {
        for(j=0;j<=i;j++)
        {
          if(j==i)
            cout<<a[i][j]<<endl;
          else
            cout<<a[i][j]<<" ";
        }
      }
      cout<<endl;
    }
}