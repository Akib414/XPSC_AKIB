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
    ll n ;
    cin>>n ;
    ll arr[n];
    map<ll,ll>m;
    for(ll i = 0 ; i < n ; i++){
        cin>>arr[i];
        m[arr[i]]++ ;
    }
    ll left = 0 ;
    ll boxes = n ;
    int i = 1 ;
    for(auto a : m){
        if(i == 1){
            left += a.second ;
        }
        else{
            boxes = boxes - min(left,a.second);
            left = left - min(left,a.second);
            left = left + a.second ;
        }
        i++ ;
    }
      cout<<boxes;
    return 0;
}