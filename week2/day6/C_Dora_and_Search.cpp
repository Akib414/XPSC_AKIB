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
        priority_queue<int,vector<int>,greater<int>>pmax ;
        priority_queue<int>pmin ;
       
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
            pmax.push(v[i]);
            pmin.push(v[i]);
        }
        int l = 0 , r = n-1 ;
        bool flag = false ;
        while(l<r){
            if(v[l] == pmax.top()){
                l++;
                pmax.pop();
            }
            else if(v[l] == pmin.top()){
                l++ ;
                pmin.pop();
            }
            else if(v[r] ==pmax.top()){
                r-- ;
                pmax.pop();
            }
            else if(v[r] == pmin.top()){
                r-- ;
                pmin.pop();
            }
            else {
                flag = true ;
                break ;
                
            }
        }
        if(flag) cout<<l+1<<" "<<r+1<<endl ;
        else cout<<"-1"<<endl ;



        
    }
 
 
    return 0;
}