//https://www.codechef.com/START71C/problems/PREFIXFLIP

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long
  
    
    void solve(){
        int n,k,sol=INT_MAX;
        cin>>n>>k;
        string str;
        cin>>str;
        int a[n];
        int c=0;
        for(int i=1;i<n;i++){
            if(str[i-1]!=str[i]){
                c++;
                a[i]=c;
            }else{
                a[i]=c;
            }
        }
        a[0]=0;
        for(int i=n-1;i>=0;i--){
            if(i-k+1<0) break;
            int chk=a[i]-a[i-k+1];
            if(str[i]=='0')chk++;
            sol=min(sol,chk);
        }
        cout<<sol<<endl;
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
