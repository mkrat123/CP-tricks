#include <bits/stdc++.h>
using namespace std;
#define MAXN 1000005
bool prime[MAXN];
void SieveOfEratosthenes()
{  
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=MAXN; p++)
    {
       if (prime[p] == true)
        {
       for (int i=p*2; i<=MAXN; i += p)
          prime[i] = false;
        }
    }
}


int main()
{int n;cin>>n;int ans=0;
SieveOfEratosthenes();
for(int i=2;i<=n;i++){
 if(prime[i])ans++;
}
    cout<<ans<<"\n";
    
    return 0;
}
