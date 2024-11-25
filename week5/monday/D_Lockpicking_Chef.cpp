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
        ll n,m ;
        cin>>n>>m ;
        string s,lock ;
        cin>>s>>lock ;
        ll ans = 1e18 ;
        for(int i = 0 ; i < n ; i++){
            ll moves = 0 ;
            for(int j = 0 ; j < m ; j++){
               ll a = s[i+j] - '0' , b = lock[j] - '0';
               ll c = abs(a-b);
               ll d ;
               if(a < b){
                d = abs(10+a-b);
               }
               else{
                d = abs(10+b-a);
               }
               moves += min(c,d);
            }
            ans = min(moves,ans);
        }
       cout<<ans<<endl ;     
    }
 
 
    return 0;
}