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
        int n,k ;
        cin>>n>>k ;
        string s ;
        cin>>s ;
        int r = 0, l = 0 ;
        int cntb = 0 ;
        int ans = INT_MAX ;
        while(r < n && l < n){
            if(s[l] == 'B') cntb++ ;
            if(l-r+1 == k){
                ans = min(ans,k - cntb);
                if(s[r] == 'B') cntb-- ;
                r++;
            }
            l++ ;
        }
        cout<<ans<<endl ;


        
    }
 
 
    return 0;
}