#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    int a,b,c,n;
    for(int q=0;q<t;q++){
        cin>>a>>b>>c>>n;
        if(a==b && a==c && n%3==0){
            cout<<"YES"<<endl;
        }
        else if(a==b && a==c && n%3!=0){
            cout<<"NO"<<endl;
        }
        else{
            int arr[3];
            arr[0]=a;
            arr[1]=b;
            arr[2]=c;
            sort(arr,arr+3);
            int dif1=arr[2]-arr[0];
            int dif2=arr[2]-arr[1];
            if(dif1+dif2 > n ){cout<<"NO"<<endl;}
            else{
                arr[0]=arr[0]+dif1;
                arr[1]=arr[1]+dif2;
                n-=dif2;
                n-=dif1;
                if(n<0){
                    cout<<"NO"<<endl;
                }
                else if(n%3==0){
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