#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    ll n,k;
    cin>>n>>k ;

    vector<ll>v(n);
    for(ll i = 0 ; i < n ; i++) cin>>v[i];
    unordered_map<ll,ll>m ;
        if(k == 0){
        cout<<"0";
        exit(0);
    }
    ll l = 0 , r = 0 ;
    ll ans = 0 ;
    int size = 0 ;
    for(r = 0 ; r < n ; r++){
        if(m[v[r]] == 0) size++ ;
        m[v[r]]++;
        if(size > k){
               m[v[r]]-- ;
               size-- ;
               r-- ;
        while(size == k && l <= r){
            ans += (r-l+1);
            m[v[l]]-- ;
            if(m[v[l]] == 0){
                size--;
            }
            l++ ;
        }
    }
    }
    if(l < r){
        ll temp = (r-l)*(r-l+1)/2 ;
        ans += temp ;
    }
    cout<<ans<<endl ;

 
 
    return 0;
}