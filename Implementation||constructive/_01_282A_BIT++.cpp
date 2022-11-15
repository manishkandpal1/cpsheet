#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

void solve(){
    int n;
    cin >> n;
 
    int x = 0;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s[0] == '+')
            x++;
        if(s[0] == '-')
            x--;
        if(s[2] == '+')
            x++;
        if(s[2] == '-')
            x--;
    }
    cout << x << endl;
}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
     return 0;
}
