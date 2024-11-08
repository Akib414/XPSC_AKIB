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
  
    map<int,int>m ;
    int n ;
    cin>>n ;

    for(int i = 0 ; i < n ; i++){
        int x ;
        cin>>x ;
        m[x]++ ;
    }
    pair<int,int>p ;
    ll ans = 0 ;
    for(auto [x,y] : m){
        if(x != p.first+1){
            ans+=y ;
        }
        else if(y > p.second){
            ans += y-p.second ;
        }
        p = {x,y};
    }
    cout<<ans<<endl ;

        
    }
 
 
    return 0;
}