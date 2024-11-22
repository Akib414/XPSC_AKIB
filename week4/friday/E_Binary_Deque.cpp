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
    ll n , s ;
    cin>>n>>s ;
    vector<int>v(n);
    ll sum = 0 ;
    for(auto &a : v){
     cin>>a ; 
     sum += a ;  
    } 
    if(s > sum) cout<<"-1"<<endl ;
    else{
    ll l = 0  ;
    sum = 0 ;
    ll lseg = -1e10 ;
    for(ll r = 0 ; r < n ; r++){
        sum += v[r];
        if(sum == s){
            lseg = max(r-l+1,lseg);
        }
        while(sum > s){
            sum -= v[l];
            l++ ;
        }
    }
        cout<<n-lseg<<endl ;
    }



        
    }
 
 
    return 0;
}