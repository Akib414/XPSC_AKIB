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
        int n ;
        cin>>n ;
        priority_queue<int>pq ;
        ll ans = 0 ;
        for(int i = 0 ; i < n ; i++){
            int x ;
            cin>>x ;
            if(x == 0){
                if(!pq.empty()){
                ans += pq.top();
                pq.pop();
                }
            }
            else{
                pq.push(x);
            }
        }
        cout<<ans<<endl ;


        
    }
 
 
    return 0;
}