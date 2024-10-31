#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
   fast_io ;
   ll n ;
   cin>>n ;
   ll arr[n];
   vector<ll>odds ;
   ll sum = 0 ;
   for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
    sum+= arr[i];
    if(arr[i]%2 == 1)
     odds.push_back(arr[i]);
   }
   sort(odds.begin(),odds.end());
   if(odds.size()%2 == 1) sum = sum - odds[0];
      cout<<sum ;


    return 0;
}