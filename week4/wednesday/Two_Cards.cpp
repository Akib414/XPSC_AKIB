#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
bool cmp(pair<int,int>a , pair<int,int>b){
    if(a.first == b.first) return b.first > a.first ;
    return a.first > b.first ;
}
int main(){
    int t ;
    cin>>t ;
    while(t--){
    int maxi = INT_MIN ;
    int n ;
    cin>>n ;
    vector<pair<int,int>>v(n);
    for(int i  = 0  ; i < n ; i++){
        int x ;
        cin>>x ;
        v[i].first = x ;
        maxi = max(x,maxi);
    }
    for(int i  = 0  ; i < n ; i++){
        int x ;
        cin>>x ;
        v[i].second = x ;
        maxi = max(x,maxi);
    }
    sort(v.begin(),v.end(),cmp);
        if(max(v[0].first,v[0].second) == maxi) {
            if(max(v[1].first , v[1].second) < maxi) cout<<"Yes"<<endl ;
            else cout<<"No"<<endl ;
        }
        else{
           cout<<"Yes"<<endl ;
        }
    }
 
 
    return 0;
}