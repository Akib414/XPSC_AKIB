#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define vll vector<ll>

#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
   ll n,s ;
   cin>>n>>s ;
   vector<ll>v(n);
   for(int i = 0 ; i < n ; i++){
    cin>>v[i];
   }
   ll l = 0 , r = 0 ;
   ll sum = 0 ;
   ll ans = +1e18 ;
   while(r < n && l < n){
        sum += v[r];
      
    while( sum >= s){
        ans = min(ans,r-l+1);
        sum -= v[l];
        l++ ;
    }
  r++ ;
   }
   if(ans == 1e18) cout<<"-1";
   else
   cout<<ans ;


 
 
    return 0;
}