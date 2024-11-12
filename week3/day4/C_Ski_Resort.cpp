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
        int n,k,mx;
        cin>>n>>k>>mx ;
        int a[n] ;
        int len = 0 ;
        ll ans = 0;
        for(int i = 0 ; i < n ; i++) cin>>a[i];
       for(int i=0;i<n;i++){
        if (a[i] <= mx)
            len += 1;
        else{
            if (len >= k){
                ll temp = len-k+1 ;
                if(temp%2 == 0) ans += (temp/2 * (temp+1));
                else ans += ((temp+1)/2 * temp);

            }
             
            len = 0;}
}
             if (len >= k){
                ll temp = len-k+1 ;
                if(temp%2 == 0) ans += (temp/2 * (temp+1));
                else ans += ((temp+1)/2 * temp);

            }
   
	cout<<ans<<"\n";
}      
    }
 