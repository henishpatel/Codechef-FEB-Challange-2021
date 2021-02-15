#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define pb push_back 
#define int long long int 
typedef unsigned long long ull;
#define mod 1000000007
#define xx first
#define yy second
#define codec ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);;
typedef vector<int> vi;
#define deb(x) cout<<#x<<" "<<x<<endl;
#define all(t) (t).begin(),(t).end()
typedef pair<int, int> pi;
#define pie 3.1415926535
#define output(x) cout << ( x ? "YES" : "NO" ) << '\n' ;

void solve(){
        int n,i,j,ans;
        cin >> n;
        vector<int> arr(n);
        for(j=0;j<n;j++){
            cin >> arr[j];
        }
        ans =  (*max_element(arr.begin(), arr.end()) - *min_element(arr.begin(), arr.end())) *2; 
        cout << ans << endl;
}

signed main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}