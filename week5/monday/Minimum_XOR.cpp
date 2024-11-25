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
      vector<ll>v(n);
      cin>>v[0];
      ll xorall = v[0];
      for(int i = 1 ; i < n ; i++){
        cin>>v[i];
        xorall = xorall^v[i];
      }
   
      ll mini = xorall ;
      for(auto  a : v){
        mini = min(mini,xorall^a);
      }
      cout<<mini<<endl ;
    }
    return 0;
}