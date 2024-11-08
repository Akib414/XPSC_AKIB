#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    int q ;
    cin>>q ;
    int i = 1 ;
    set<pair<int,int>>two ;
    set<pair<int,int>>thr ;
    vector<int>ans ;
    while(q--){
        int x ;
        cin>>x ;
        if(x == 1){
            int p;
            cin>>p ;
            two.insert({i,p});
            thr.insert({p,-1*i});
            i++ ;
        }
        else if(x == 2){
            ans.push_back(two.begin()->first);
            int p1 = two.begin()->first ;
            int p2 = two.begin()->second ;
            two.erase({p1,p2});
            thr.erase({p2,-1*p1});
        }
        else{
            int p1 =(--thr.end())->first ;
            int p2 =(--thr.end())->second ;
            ans.push_back(-1*p2);
            two.erase({-1*p2,p1});
            thr.erase({p1,p2});
        }  
    }
 for(auto a : ans){
    cout<<a<<" ";
 }
 cout<<endl ;
 
    return 0;
}