#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int a[n];
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi = max(maxi,a[i]);
            mini = min(mini,a[i]);
        }
        if(maxi == mini){
            cout<<"YES"<<endl;
        }
        else{
            int c=0;
            for(int i=0;i<n;i++){
                if((maxi - a[i])%2==0)c++;
            }
            if(c==n){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
    return 0;
}