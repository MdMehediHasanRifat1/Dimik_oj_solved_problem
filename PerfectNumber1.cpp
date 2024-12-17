#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main() 
{
  int t;
  cin>>t;
  while(t--)
  {
    string n;
    cin>>n;
    if(n=="6")
      printf("YES, 6 is a perfect number!\n");
    else if(n=="28")
      printf("YES, 28 is a perfect number!\n");
    else if(n=="496")
      printf("YES, 496 is a perfect number!\n");
    else if(n=="8128")
      printf("YES, 8128 is a perfect number!\n");
    else if(n=="33550336")
      printf("YES, 33550336 is a perfect number!\n");
    else if(n=="8589869056")
      printf("YES, 8589869056 is a perfect number!\n");
    else if(n=="137438691328")
      printf("YES, 137438691328 is a perfect number!\n");
    else if(n=="2305843008139952128")
      printf("YES, 2305843008139952128 is a perfect number!\n");
    else 
      cout<<"NO, "<<n<<" is not a perfect number!"<<endl;
  }
}