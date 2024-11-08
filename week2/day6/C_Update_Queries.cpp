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
        int n,m ;
        cin>>n>>m ;
          string mn ;
        cin>>mn;
        priority_queue<int,vector<int>,greater<int>>ind ;
        priority_queue<char,vector<char>,greater<char>>str ;
        bool vis[n];
        for(int i = 0 ; i < n ; i++) vis[i] = false ;
        for(int i = 0 ; i < m ; i++){
            int x ;
            cin>>x ;
            ind.push(x);
        }
            for(int i = 0 ; i < m ; i++){
            char x ;
            cin>>x ;
            str.push(x);
        }
        int it = min(m,n);
        int cnt = 0 ;
        while(!str.empty() && !ind.empty()){
            int index = ind.top();
            ind.pop();
            char charecter = str.top();
            str.pop();
             if(vis[index-1] == false){
            mn[index-1] = charecter ;
            vis[index-1] = true ;
            cnt++ ;
            if(cnt == m || cnt == n) break ;
            }
            else{
                str.push(charecter);
            }
        }
        cout<<mn<<endl ;
        
    }
 
 
    return 0;
}