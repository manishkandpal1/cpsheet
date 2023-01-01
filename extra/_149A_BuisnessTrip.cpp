// https://codeforces.com/problemset/problem/149/A

    #include <bits/stdc++.h>
    using namespace std;
    #define endl '\n'
    #define ll long long

    void solve(){
        int k, a[12], total(0);
          cin >> k;
          for (int i=0;i<12;++i){
              cin >> a[i];
              total+=a[i];
            }
        if (total<k){
         cout<<-1<<endl;
         }
         else{
            sort(a, a + sizeof(a) / sizeof(a[0]), greater<int>());
            int sum = 0,month = 0;
            while (sum < k) {
            sum += a[month];
            month += 1;
            }
         cout << month << endl;
         }
    }

    signed main()  {
        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(0);
        solve();
    }
