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
        ll j , c ;
        cin>>j>>c;
        ll mini = 1e18;
        ll ans = -1 ;
        for(int i = 0 ; i < j ; i++){
            ll x ;
            cin>>x;
            if(x >= c){
                if(x%c < mini){

                    mini = x%c ;
                    ans = x%c ;
                }


            }
        }
        cout<<ans<<endl ;


        
    }
 
 
    return 0;
}