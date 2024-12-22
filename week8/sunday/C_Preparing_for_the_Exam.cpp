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
        ll n,m,k ;
        cin>>n>>m>>k ;
              vector<ll>mv;
            set<ll>kv;
            for(ll i = 0 ; i < m ; i++){
              ll x ;
              cin>>x ;
              mv.push_back(x);
            }
            for(ll i = 0 ; i < k ; i++){
                ll x ;
                cin>>x ;
                kv.insert(x);
            }

        if(n-k > 1) {
            for(ll i = 0 ; i < m ; i++) cout<<0;

            
        }
        else if(n == k){
                    for(ll i = 0 ; i < m ; i++) cout<<1;
        
        }
        else{
      
            for(ll i = 0 ; i < m ; i++){
                if(kv.count(mv[i]) > 0){
                    cout<<0;
                }
                else{
                    cout<<1;
                }

            }

        }
      cout<<endl ;

        
    }
 
 
    return 0;
}