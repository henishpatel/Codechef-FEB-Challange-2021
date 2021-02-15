#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define int long long int 
typedef unsigned long long ull;
#define codec ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);;
typedef vector<int> vi;
void solve(){
    int n;
    cin >> n;
    vi W(n),L(n);
    for(int i=0;i<n;i++){
        cin >> W[i];
    }
    for(int i=0;i<n;i++){
        cin >> L[i];
    }
    map<int,int> M;
    for(int i=0;i<n;i++){
        M[W[i]] = i+1;
    }
    int ans=0;
    for(int i=1;i<n+1;i++){
        for(int j=0;j<n;j++){
            if(W[j]==i){
                while(M[i]<=M[i-1]){
                    M[i]+=L[j];
                    ans++;
                }
            }
        }
    }
    cout << ans <<endl;
}
signed main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}
