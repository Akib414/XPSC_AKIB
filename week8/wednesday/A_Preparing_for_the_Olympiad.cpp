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
        vector<int>a(n);
        vector<int>b(n) ;

        for(int i = 0 ; i < n ; i++) cin>>a[i];
        for(int i = 0 ; i < n ; i++) cin>>b[i];
        ll suma = 0 , sumb = 0 ;

        for(int i = 0 ; i < n ; i++){
            if(i == n-1){
                suma += a[i];
            }
            else{
                if(a[i] > b[i+1]){
                    suma += a[i];
                    sumb += b[i+1];
                }
            }
        }
         cout<<suma-sumb<<endl ;

        
    }
 
 
    return 0;
}