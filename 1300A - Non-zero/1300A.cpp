#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n];
        int zero = 0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){zero++;}
            sum+=a[i];
        }
        int count =0 ;
        while(zero>0){
            count++;
            zero--;
            sum++;
        }
        while(1){
            if(sum!=0){
                break;
            }
            sum++;
            count++;
            
        }
        cout<<count<<endl;
    }
	return 0;
}