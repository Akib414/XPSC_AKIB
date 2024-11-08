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
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
        }
        unordered_map<int,int>m ;
        string s;
        cin>>s ;
        set<int>zero ;
        set<int>one ;
        for(int i = 0 ; i < n ; i++){
            if(s[i] == '0') zero.insert(v[i]);
            else one.insert(v[i]);
        }
        int i = 1;
        for(auto a : zero){
            m[a] = i++ ;
        }
        for(auto a : one){
            m[a] = i++ ;
        }
        for(auto a : v){
            cout<<m[a]<<" ";
        }
        cout<<endl ;
       
 



        
    }
 
 
    return 0;
}