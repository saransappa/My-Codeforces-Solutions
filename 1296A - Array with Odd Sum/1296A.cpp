#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        int flag=0;
        int odd=0,even=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            sum+=a[i];
            if(a[i]%2!=0){odd++;}
            else {even++;}
        }
        if(sum%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            if(odd==n || even==n || odd==0 ){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
	return 0;
}
