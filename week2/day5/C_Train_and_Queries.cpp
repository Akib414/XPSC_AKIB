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
    ll n,k ;
    cin>>n>>k ;
    map<ll,set<ll>>m ;
    for(ll i = 1 ; i <= n ; i++){
        ll x ;
        cin>>x ;
        m[x].insert(i);
    }


    for(ll i = 0 ; i < k ; i++){
        ll s,e ;
        cin>>s>>e ;
        if(m.find(s) == m.end() || m.find(e) == m.end()) NO ;
     

        else{
            if(*m[s].begin() < *(--m[e].end())) YES ;
            else NO ;
        }
    }

        
    }
 
 
    return 0;
}