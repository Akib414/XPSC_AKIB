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
        ll sum = 0 ;
        ll n = 0 ;
        cin>>n ;
        ll a[n];
        for(ll i = 0 ; i < n ; i++) cin>>a[i];
        sum += a[0];
        sum+=a[n-1];
        ll ans = sum;
        bool flag = true ;
        while(1){
                  ans  = sum ;
                  flag = true ;  
        for(int i = 1 ; i < n-1 ; i++){
      
          
            if(a[i-1] + a[i+1] == 4){
                if(4-a[i] < a[i]){
                     a[i] = 4-a[i];
                     flag = false ;
                }
            }
            ans+=a[i];
        }
        if(flag) break ;
        }
        cout<<ans<<endl ;


        
    }
 
 
    return 0;
}