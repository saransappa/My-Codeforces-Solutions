#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n<11){
            cout<<"NO"<<endl;
        }
        else if(n==11 && s[0]!='8'){
            cout<<"NO"<<endl;
        }
        else if(n==11 && s[0]=='8'){
            cout<<"YES"<<endl;
        }
        else{
            int c=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='8'){
                    c=i;
                    break;
                }
            }
            if(c==-1){
                cout<<"NO"<<endl;
            }
            else{
                if(n-c>=11){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
    return 0;
}