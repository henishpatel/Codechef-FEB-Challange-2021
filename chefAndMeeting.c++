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
int timeConversion(string str1,string str2){
    int ans=0;
    if(str2[0]=='A'){
        if(str1[0]=='1' && str1[1]=='2'){
            ans = (str1[3]-48)*10;
            ans += (str1[4]-48);
            return ans;
        }else{
            ans = (str1[0]-48)*1000;
            ans += (str1[1]-48)*100;
            ans += (str1[3]-48)*10;
            ans += (str1[4]-48);
            return ans;
        }
    }else{
        if(str1[0]=='1' && str1[1]=='2'){
            ans = (str1[0]-48)*1000;
            ans += (str1[1]-48)*100;
            ans += (str1[3]-48)*10;
            ans += (str1[4]-48);
            return ans;
        }else{
            ans = (str1[0]-48)*1000;
            ans += (str1[1]-48)*100;
            ans += 1200;
            ans += (str1[3]-48)*10;
            ans += (str1[4]-48);
            return ans;
        }
    }
    return 0;
}
void solve(){
    string p1,p2,f1,f2,f3,f4;
    int p,n,lb,up;
    cin >>p1>>p2;
    p = timeConversion(p1,p2);
    cin >> n;
    while(n--){
        cin >> f1 >> f2 >> f3 >> f4;
        lb = timeConversion(f1,f2);
        up = timeConversion(f3,f4);
        if(lb<=p && up>=p){
            cout<< 1;
        }else{
            cout << 0;
        }
    }
    cout<<endl;
}

signed main(){
    int T;
    cin >> T;
    while(T--){
        solve();
    }
}
