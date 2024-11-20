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
        fast_io;
        int n,m ;
        cin>>n>>m ;
        int total[n];
        
        for(int i = 0 ; i < n ; i++){
            cin>>total[i];

        }
        ll ans = 0 ;
        for(int j = 0 ; j < m ; j++){
            int x ;
            cin>>x ;
            x = x-1 ;
            if(total[x] == 0){
                ans++ ;
            }
            else{
                total[x]-- ;
            }

        }
        cout<<ans<<endl ;



        
    }
 
 
    return 0;
}