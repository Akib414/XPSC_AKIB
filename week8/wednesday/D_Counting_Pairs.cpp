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
        ll sum = 0 ;
        vector<vector<int>>idx(100001);
        for(int i = 0 ; i < n ; i++) {
            cin>>v[i];
            idx[v[i]].push_back(i);
             sum += v[i];
        }
       vector<ll>trak(100001,0);
        ll ans = 0 ;
        for(ll i = 0 ; i < n ; i++){
          ll low = sum - v[i] - y;
          ll high = sum - v[i] - x ;
         
             for(ll j = low ; j <= high ; j++){
                 for(auto a : idx[j]){
                    if(a > i) ans++ ;
                 }
                }
             
             idx[v[i]][trak[v[i]]] = -1 ;
             trak[v[i]]++ ;  
        }
       cout<<ans<<endl ;

        
    }
 
 
    return 0;
}