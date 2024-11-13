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
      string s ;
      cin>>s ;
      vector<ll>v ;
      ll sum = 0;
    vector<ll>ans ;
      for(int i = 0 ; i < n ; i++){
        if(s[i] == 'R'){
            v.push_back(n-i-1);
            sum += n-i-1 ;
        }
        else{
            v.push_back(i);
            sum += i ;
        }
      }
      
      sort(v.begin(),v.end());
      for(int i = 0 ; i < n ; i++){
        if(v[i] < (n - 1 - v[i])){
            sum += (n- 1 - v[i]-v[i]);
        }
        ans.push_back(sum);
      }
      for(auto a : ans) cout<<a<<" ";
      cout<<endl ;

    }
 
 
    return 0;
}