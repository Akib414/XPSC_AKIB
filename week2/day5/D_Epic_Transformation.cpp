#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    fast_io ;
    int t ;
    cin>>t ;
    while(t--){
        fast_io ;
        ll n ;
        cin>>n ;
        unordered_map<ll,ll>m ;
        for(ll i = 0 ; i < n ; i++){
            ll x ;
            cin>>x ;
            m[x]++ ;
        }
        priority_queue<ll>pq ;
        for(auto a : m){
            pq.push(a.second);
        }
        while(!pq.empty()){
            if(pq.size() < 2) break ;
            ll x,y ;
            x = pq.top();
            pq.pop();
            x-- ;
            y = pq.top();
            pq.pop();
            y-- ;
            if(x > 0) pq.push(x);
            if(y > 0) pq.push(y);
        }
        ll ans = 0 ;
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        cout<<ans<<endl ;



        
    }
 
 
    return 0;
}