#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    ll n,m ;
    cin>>n>>m ;
    ll first[n];
    ll second[m];
    for(int i = 0 ; i < n ; i++){
        cin>>first[i];
    }
    for(int i = 0 ; i < m ; i++){
        cin>>second[i];
    }
     
    ll f = 0, s = 0 ;
    ll cnt = 0  ;
    while(s < m){
        ll curr = second[s];
        while(first[f] < curr && f < n){
            cnt++ ;
            f++;
        }
        cout<<cnt<<" ";
        s++;
    }
 
    return 0;
}