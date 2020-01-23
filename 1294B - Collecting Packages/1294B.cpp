#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        pair<int,int> pairs[n];
        for(int i=0;i<n;i++){
            cin>>pairs[i].first;
            cin>>pairs[i].second;
        }
        sort(pairs,pairs+n);
        
        int x=0;
        int y=0;
        string str="";
        int flag=0;
        for(int i=0;i<n;i++){
            if(pairs[i].first>=x && pairs[i].second>=y){
                
                for(int u=0;u<pairs[i].first-x;u++){
                    str+="R";
                }
                x+=(pairs[i].first-x);
                for(int u=0;u<pairs[i].second-y;u++){
                    str+="U";
                }
                y+=(pairs[i].second-y);
            }
            else{
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1){
        cout<<"YES"<<endl;
        cout<<str<<endl;
        }
    }
    return 0;
}