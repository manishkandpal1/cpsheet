// https://www.codechef.com/START71C/problems/SNAPCHAT

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
  
    int ans(int a[],int b[],int n){
        int sol=0,count=0;
        for(int i=0;i<n;i++){
            if(a[i]==0 || b[i]==0){
                count=0;
            }else{
                count++;
                 sol=max(sol,count);
            }
        }
        return sol;
    }
    void solve(){
      int n;
      cin>>n;
      int a[n],b[n];
      for(auto &it:a){
        cin>>it;
      }
       for(auto &it:b){
        cin>>it;
      }
      cout<<ans(a,b,n)<<"\n";
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
