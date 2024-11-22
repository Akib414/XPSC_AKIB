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
        ll n , k;
        cin>>n>>k ;
        vector<ll>frt(n);
        vector<ll>hgt(n);
        ll sum = 0 ;
        for(ll i = 0 ; i < n ; i++){
           cin>>frt[i]; 
           sum += frt[i];
           frt[i] = sum ;
        } 
        for(ll i = 0 ; i < n ; i++) cin>>hgt[i];
        ll l = 0 , r = 0 ;
        ll ans = 0 ;
        while(r < n ){
            if(l == 0 ){
                if(frt[r] <= k){
                 ans = max(ans,r-l+1);   
                } 
            }
            else{
                 if(frt[r] - frt[l-1] <= k){
                    ans = max(ans,r-l+1); 
                 } 
            }
            while((l == 0 && frt[r] > k) || (l > 0 && frt[r]-frt[l-1] > k)){
             l++ ;
             ans = max(ans,r-l+1); 
            }   
            if(r < n-1 && hgt[r] % hgt[r+1]){
                l = r+1 ;         
            }
            r++ ;
    
        }
       cout<<ans<<endl ;
      }
 
 
    return 0;
}