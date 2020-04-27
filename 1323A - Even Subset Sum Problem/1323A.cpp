#include <bits/stdc++.h>
using namespace std;
#define pb push_back 
int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int a[n],even=0,odd=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even++;
            }
            else{
                odd++;
            }
        }
        if(even>0){
            for(int i=0;i<n;i++){
                if(a[i]%2==0){
                    cout<<"1"<<endl;
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
        else if(odd>1){
            cout<<"2"<<endl;
            int c=0;
            for(int i=0;i<n;i++){
                if(c==2)break;
                if(a[i]%2!=0){
                    c++;
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
        
    }
	return 0;
}
