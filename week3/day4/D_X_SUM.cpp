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
       int n , m ;
       cin>>n>>m ;
       int arr[n][m];
       for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++)
        cin>>arr[i][j];
       }
       ll ans = -1e17;
       for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
              ll sum = arr[i][j];
            int ci = i , cj = j ;
            while(ci >= 0 && ci < n && cj >= 0 && cj < m){
                ci = ci-1 , cj = cj+1 ;
                if(ci >= 0 && ci < n && cj >=0 && cj < m){
                    sum+=arr[ci][cj];
                }
                else 
                break ;
            }
              ci = i , cj = j ;
            while(ci >= 0 && ci < n && cj >=0 && cj < m){
                ci = ci-1 , cj = cj-1 ;
                if(ci >= 0 && ci < n && cj >=0 && cj < m){
                    sum+=arr[ci][cj];
                }
                else break ;
            }
              ci = i , cj = j ;
            while(ci >= 0 && ci < n && cj >=0 && cj < m){
                ci = ci+1 , cj = cj-1 ;
                if(ci >= 0 && ci < n && cj >=0 && cj < m){
                    sum+=arr[ci][cj];
                }
                else
                break ;
            }
              ci = i , cj = j ;
            while(ci >= 0 && ci < n && cj >=0 && cj < m){
                ci = ci+1 , cj = cj+1 ;
                if(ci >= 0 && ci < n && cj >=0 && cj < m){
                    sum+=arr[ci][cj];
                }
                else
                break ;
            }
          
            ans = max(ans,sum);
        }
       }
       cout<<ans<<endl ;       
    }
 
 
    return 0;
}