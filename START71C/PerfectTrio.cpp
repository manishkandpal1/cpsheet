//   https://www.codechef.com/START71C/problems/PERFECTTRIO

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
  
    void solve(){
       int arr[3];
       cin>>arr[0]>>arr[1]>>arr[2];
       sort(arr,arr+3);
       if(arr[0]+arr[1]==arr[2]){
        cout<<"YES\n";
       }else{
        cout<<"NO\n";
       }
    }
    
    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        int t;
        cin>>t;
        while(t--){
        solve();
        }
    }
