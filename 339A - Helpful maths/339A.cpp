#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    vector <char> v;
    for(int i=0;i<s.size();i++){
        if(s[i]!='+')
        {
            v.push_back(s[i]);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i);
        if(i!=v.size()-1){
            cout<<"+";
        }
    }
    cout<<endl;
    return 0;
}