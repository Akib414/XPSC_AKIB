#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
  ll n,m ;
  cin>>n>>m ;
  ll first[n];
  ll second[m];
  for(ll i = 0 ; i < n ; i++) cin>>first[i];
  for(ll i = 0 ; i < m ; i++) cin>>second[i];
  ll f = 0 , s = 0 ;
  ll ans ;
  while(f < n && s < m){
    ll curr = first[f];
    ll cnt1 = 0 , cnt2 = 0 ;
    while(first[f] == curr && f < n){
        cnt1++ ;
        f++ ;
    } 
    while(second[s] < curr) s++ ;
    while(second[s] == curr && s < m){
        cnt2++ ;
        s++ ;
    }
    ans += (cnt1 * cnt2);
  }
  cout<<ans ;

 
 
    return 0;
}