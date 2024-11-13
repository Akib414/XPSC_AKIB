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
     priority_queue<ll>cars ;
     priority_queue<ll>energy;
     ll c,e,h ;
     cin>>c>>e>>h ;
     for(ll i = 0 ; i < c ; i++){
        ll x ;
        cin>>x ;
        cars.push(x);
     }
     for(ll i = 0 ; i < e ; i++){
        ll x ;
        cin>>x ;
        energy.push(x*h);
     }
     ll ans = 0 ;
     while(!cars.empty() && !energy.empty()){
        ll temc = cars.top();
        ll teme = energy.top();
        ans += min(temc,teme);
        cars.pop();
        energy.pop();
     }
     cout<<ans<<endl ;
        
    }
 
 
    return 0;
}