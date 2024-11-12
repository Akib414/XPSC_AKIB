#include"bits/stdc++.h"
using namespace std;
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
typedef long long ll;
const int MOD = 1000000007;

vector<int>akibify(vector<int>one , vector<int>two){
    int f = 0,s =0 ;
    int m = one.size();
    int n = two.size();

    vector<int>ans ;
    while(f < m && s < n){
        if(one[f] <= two[s]){
            ans.push_back(one[f]) ;
            f++;
        } 
        else{
         ans.push_back(two[s]) ;
         s++;

    }

    }
    while(f < m){
      ans.push_back(one[f]);  
      f++;
   
    } 
    while(s < n){
      ans.push_back(two[s])  ;
      s++;
      
    } 

    return ans;
}

int main(){
    ll m , n ;
    cin>>m>>n ;
    vector<int>one(m);
    vector<int>two(n);
    for(int i  = 0 ; i < m ; i++) cin>>one[i];
    for(int j = 0 ; j < n ; j++) cin>>two[j];
    vector<int>ans = akibify(one,two);
    for(int i = 0 ; i < ans.size() ; i++) cout<<ans[i]<<" ";
 
 
    return 0;
}