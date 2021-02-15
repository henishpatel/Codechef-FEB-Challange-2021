#include<bits/stdc++.h>
#include<math.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define int long long int 
typedef unsigned long long ull;
#define codec ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);;
typedef vector<int> vi;
#define deb(x) cout<<#x<<" "<<x<<endl;
#define all(t) (t).begin(),(t).end()
typedef pair<int, int> pi;
 
int distinct(set<char> x,set<char> y)
{
    int ans=0;
    for(char i:x)
    {
        for(char j:y)
        {
            if(i==j) 
            {
                ans++;
                break;
            }
        }
    }
    int a=x.size(),b=y.size();
    return (a-ans)*(b-ans);
}

signed main(){
    codec;
    int T=1;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        string str[n];
        for(int i=0;i<n;i++){
            cin>>str[i];
        } 
        map<string,set<char>> m;
        for(int i=0;i<n;i++){
            m[str[i].substr(1,str[i].size())].insert(str[i][0]);
        }
        int ans=0;
        vector<string> s;
        for(auto i:m){
            s.push_back(i.first);
            
        }
        int k=s.size();
        for(int i=0;i<k;i++){
            for(int j=i+1;j<k;j++){
                ans+=distinct(m[s[i]],m[s[j]]);
            }
        }
        ans *= 2;
        cout<<ans<<endl;
    }
}