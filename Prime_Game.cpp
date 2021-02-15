#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define endl "\n"
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long int 
#define codec ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);;
typedef vector<int> vi;
typedef pair<int, int> pi;

vi Count_prime(1e6+1,0);

void SieveOfEratosthenes(int n)
{
    n=1e6;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if(prime[p]==true)
               Count_prime[p]+=Count_prime[p-1]+1;
        else 
            Count_prime[p]=Count_prime[p-1];
}

void solve(){
    int x,y;
    cin >> x;
    cin >> y;
    if(Count_prime[x] <= y){
        cout << "Chef"<<endl;
    }else{
        cout <<"Divyam"<<endl;
    }
}

signed main(){
    codec;
    SieveOfEratosthenes((int)1e6);
    int T=1;
    cin >> T;
    while(T--){
        solve();
    }
}

