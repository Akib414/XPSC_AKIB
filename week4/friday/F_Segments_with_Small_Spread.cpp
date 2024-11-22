#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    ll n,k;
    cin>>n>>k ;

    vector<ll>v(n);
    for(ll i = 0 ; i < n ; i++) cin>>v[i];
    multiset<ll>m ;
    ll l = 0 , r = 0 ;
    ll ans = 0 ;
    for(r = 0 ; r < n ; r++){
     m.insert(v[r]);
     auto mn = *m.begin();
     auto mx = *m.rbegin();
     if(mx-mn <= k){
        ans += (r-l+1);
     }
     while(mx - mn > k && l <= r){
        m.erase(m.find(v[l]));
         mn = *m.begin();
         mx = *m.rbegin();
         l++ ;
        if(mx-mn <= k){
        ans += (r-l+1);
     }
     }
    }
  
    cout<<ans<<endl ;

 
 
    return 0;
}