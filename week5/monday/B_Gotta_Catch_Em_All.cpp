#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    int t ;
    cin>>t ;
    while(t--){
       ll n,x,y ;
       cin>>n>>x>>y ;
       vector<ll>v(n);
       ll ans = 0 ;
       for(int i = 0 ; i < n ; i++){
        cin>>v[i];
        if(v[i]*x > y) ans += y ;
        else ans += v[i]*x ;
     
       }
    cout<<ans<<endl ;
 
        
    }
 
 
    return 0;
}