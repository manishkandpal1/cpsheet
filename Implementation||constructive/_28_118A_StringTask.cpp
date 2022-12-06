#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long

bool checkcons(char ch){
    if(ch=='A' || ch=='a' ||ch=='O' || ch=='o' ||ch=='Y' || ch=='y' ||ch=='E' || ch=='e' ||ch=='U' || ch=='u' ||ch=='I' || ch=='i'){
        return false;
    }
    return true;

}
void solve(){
    string s;
    cin>>s;
    string temp="";
    for(int i=0;i<s.size();i++){
        if(checkcons(s[i])){
            temp.push_back('.');
            temp.push_back(tolower(s[i]));
        }
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i];
    }

}

signed main()
{
     ios::sync_with_stdio(false);
     cin.tie(NULL);
     solve();
}
