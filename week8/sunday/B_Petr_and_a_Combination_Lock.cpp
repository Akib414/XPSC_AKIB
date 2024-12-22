//lets assume anti-clockwise is 1
//and clockwise is 0 
#include"bits/stdc++.h"
using namespace std;
 
#define YES cout<<"YES\n"
#define NO cout<<"NO\n"
#define endl "\n"
#define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
 
typedef long long ll;
const int MOD = 1000000007;
int main(){

        int n ;
        cin>>n ;
        vector<int>v(n);
        bool flag = false ;
        for(int i = 0 ; i < n ; i++) cin>>v[i];

        for(int i = 0 ; i < (1 << n) ; i++){
            int sum = 0 ;
           
            for(int j = 0 ; j < n ; j++){
              
                if((i>>j)&1){
                    sum += v[j];
                }
                else{
                    sum -= v[j];
                }
            }
          
            if(sum == 0 || sum % 3603 == 0){
                flag = true ;
                break ;
            }      
        }
     if(flag) YES ;
     else NO ;


        
    }
 
 

