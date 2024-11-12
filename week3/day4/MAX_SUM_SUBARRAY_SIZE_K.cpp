     #include"bits/stdc++.h"
     using namespace std;
      
     #define YES cout<<"YES\n"
     #define NO cout<<"NO\n"
     #define endl "\n"
     #define fast_io ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL)
   typedef long long ll;
     const int MOD = 1000000007;

            long long maximumSumSubarray(vector<int>& Arr, int K) {
        // code here
           long sum = 0; 
    long maxi = INT_MIN; 

    for (int i = 0; i < K; i++) {
        sum += Arr[i];
    }

    maxi = sum; 

    for (int i = K; i < Arr.size(); i++) {
        sum += Arr[i] - Arr[i - K]; 
        maxi = max(maxi, sum); 
    }

    return maxi; 
    }
  



     int main(){
       int n ;
       cin>>n ;
       vector<int>v(n);
       for(int i = 0 ; i < n ; i++) cin>>v[i];
       int k ;
       cin>>k ;
       ll ans = maximumSumSubarray(v,k);
      
      
         return 0;
     }
     

    