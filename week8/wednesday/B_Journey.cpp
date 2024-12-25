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
       vector<ll>v(3);
       ll sum = 0 ;
       for(int i = 0 ; i < 3 ; i++) {
        cin>>v[i];
        sum += v[i];
       }
       ll ans = 0 ;
       ans += (n / sum)*3;
       ll to = n%sum ;
       ll nsum = 0 ;
       for(int i = 0 ; i < 3 ; i++){
        if(to == 0){
            cout<<ans<<endl ;
            break ;
        }
        nsum += v[i];
        ans++ ;
        if(nsum >= to) {
            cout<<ans<<endl ;
            break ;
        } 
       }



        
    }
 
 
    return 0;
}