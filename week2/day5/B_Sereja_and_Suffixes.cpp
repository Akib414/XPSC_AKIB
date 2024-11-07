#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NUint),cout.tie(NUint)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
   int m,n ;
   cin>>m>>n ;
   unordered_map<int,int>ms ;
   int arr[m];
   for(int i = 0 ; i < m ; i++){
    cin>>arr[i];
   }
   set<int>temp ;
   for(int i = m-1 ; i >= 0 ; i--){
    temp.insert(arr[i]);
    ms[i+1] = temp.size() ; 
   }
   for(int i = 1 ; i <= n ; i++){
    int x ;
    cin>>x ;
    cout<<ms[x]<<endl ;
   }


 
 
    return 0;
}