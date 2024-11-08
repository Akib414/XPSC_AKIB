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
        char now ;
        cin>>now ;
        string light ;
        cin>>light ;
        unordered_map<char,vector<int>>m ;
        for(int i = 0 ; i < n ; i++){
            m[light[i]].push_back(i);
        }
        int ans = INT_MIN ;
       
        for(auto a : m[now]){
            int temp = INT_MAX ;
            for(auto b : m['g']){
                if(b >= a) temp = min(temp,b-a);
                else{
                    int togo = n-a+b ;
                    temp = min(temp,togo);
                }
            }
            ans = max(temp,ans);
          
        }
        cout<<ans<<endl ;



        
    }
 
 
    return 0;
}