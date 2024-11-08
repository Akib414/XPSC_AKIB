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
    cout<<2<<endl ;
    priority_queue<int>odd ;
    priority_queue<int>even ;
    for(int i = 1 ; i <= n ; i++){
        if(i%2) odd.push(i);
        else even.push(i);
    }
    while(1){
        if(n == 2) {
            cout<<1<<" "<<2<<endl ;
            break ;
        } 
        if(n == 3){
            cout<<2<<" "<<3<<endl ;
            cout<<1<<" "<<3<<endl ;
            break;
        }
        if(even.size() + odd.size() == 1) break ;
        else if(odd.top() > even.top()){
            int x = odd.top();
            odd.pop();
            int y = odd.top();
            odd.pop();
            int ans = (x+y)/2 ;
            if(ans%2) odd.push(ans);
            else even.push(ans);
            cout<<x<<" "<<y<<endl ;
        }
        else{
                int x = even.top();
            even.pop();
            int y = even.top();
            even.pop();
            int ans = (x+y)/2 ;
            if(ans%2) odd.push(ans);
            else even.push(ans);
            cout<<x<<" "<<y<<endl ;
        }

    }

}
    
 
 
    return 0;
}