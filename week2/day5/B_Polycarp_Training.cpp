#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
   ll  n ;
   cin>>n ;
   multiset<ll>s ;
   for(ll i = 0 ; i < n ; i++){
    ll x ;
    cin>>x ;
    s.insert(x);
   }
   ll ans_count = 0 ;
   for(ll i = 1 ; i <= n ; i++){
    auto LB = s.lower_bound(i);
    if(LB == s.end()) break ;
    else {
        ans_count++ ;
        s.erase(LB);
    }
   }
   cout<<ans_count<<endl ;
 
    return 0;
}