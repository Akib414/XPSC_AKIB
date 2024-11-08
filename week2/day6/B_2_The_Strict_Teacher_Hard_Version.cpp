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
        int n,m,q ;
        cin>>n>>m>>q ;
        vector<int>t ;
    
        for(int i = 0 ; i < m ; i++){
            int x ;
            cin>>x ;
            t.push_back(x);
        }
        sort(t.begin(),t.end());
        for(int i = 0 ; i < q ; i++){
            int x ;
            cin>>x ;
            if(x < t[0]) cout<<(x-1 + t[0] - x)<<endl;
            else if(x > t[m-1]) cout<<(n-x + x - t[m-1])<<endl ;
            else{
            int lb = *(--lower_bound(t.begin(),t.end(),x));
            int ub = *upper_bound(t.begin(),t.end(),x);
            int from_left = ((ub+lb)/2) - lb ;
            int from_right = ub - ((ub+lb)/2) ;
            cout<<min(from_left,from_right)<<endl ;
            }
        }
    }
    return 0;
}