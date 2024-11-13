#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){
    stack<string>st ;
    unordered_map<string,bool>m;
    int n ; 
    cin>>n ;
    for(int i = 0 ; i < n ; i++){
        string s ;
        cin>>s ;
        st.push(s);
        m[s] = false ;
    }
    string ans = "";
    while(!st.empty()){
        string top = st.top();
        st.pop();
        if(m[top] == false){
            int n = top.size();
            ans = ans + top[n-2] + top [n-1];
            m[top] = true;
        }
    }
  cout<<ans;
 
 
    return 0;
}