#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i;
    int flag=0;
    for(i=0;i<n-1;i++){
        if(s[i]<=s[i+1]){
            cout<<s[i];
        }
        else{
            flag=1;
            break;
        }
    }
    if(flag==1){
        for(i=i+1;i<n;i++){
            cout<<s[i];
        }
    }
    cout<<endl;
    return 0;
}