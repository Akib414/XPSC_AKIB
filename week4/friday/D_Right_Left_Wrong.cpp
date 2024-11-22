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
     ll n ;
     cin>>n ;
     vector<ll>v(n) ;
     ll sum = 0 ;
     for(int i = 0 ; i <  n ; i++){
        cin>>v[i];
        sum += v[i];
        v[i] = sum ;
     }
     string s ;
     cin>>s ;
     ll l = 0 , r = n-1 ;
     ll ans = 0 ;
     while(l < r){
        if(s[l] == 'L' && s[r] == 'R'){
            if(l == 0){
               ans += (v[r]);
            }
            else{
                ans += (v[r] - v[l-1]);
            }
            l++;
            r-- ;
        }
        while(s[l] == 'R'){
            l++ ;
        }
        while(s[r] == 'L'){
            r-- ;
        }
     }


      cout<<ans<<endl ;  
    }
 
 
    return 0;
}