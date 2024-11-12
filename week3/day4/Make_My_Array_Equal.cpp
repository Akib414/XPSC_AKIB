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
	while(t--)
	{
	    ll n;cin>>n;
	    ll a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    
	    sort(a,a+n);
	    if(n==1){
	        cout<<"YES\n";
	    }
	    else if(n==2)
	    {
	        if(a[0]==a[1] || a[0]==0||a[1]==0) cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	    else
	    {
	        bool flag = true ;
	        for(int i=0;i<n-1;i++)
	        {
	            if(a[i]==0)
	            {
	                continue;
	            }
	            else if(a[i]!=a[i+1])
	            {
	                flag=false;break;
	            }
	        }
	        if(!flag) cout<<"NO\n";
	        else cout<<"YES\n";
	    }
	}

}
 
 
