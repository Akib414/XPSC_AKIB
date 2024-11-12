#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int k) {
     
     
      vector<long long>ans;
      deque<long long int>dq;
      for(long long int i = 0 ; i < k ; i++){
          if(A[i]<0)
          dq.push_back(i);
      }
          if(dq.size() >0)ans.push_back(A[dq.front()]);
          else ans.push_back(0);
      for(long long int i = k ; i<N ; i++){
          if((!dq.empty()) && (i - dq.front() >= k)){
              dq.pop_front();
          }
           if(A[i]<0) dq.push_back(i);
         if(dq.size()>0) ans.push_back(A[dq.front()]);
          else ans.push_back(0);
      }
      return ans;
 }
int main(){
    ll n,k ;
    cin>>n>>k ;
    ll arr[n];
    for(ll i = 0 ; i < n ; i++) cin>>arr[i];
    vector<ll>ans = printFirstNegativeInteger(arr,n,k);
    
 
 
    return 0;
}