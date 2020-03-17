#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int x;
        cin>>x;
        int flag=0;
        for(int i=1;i<=x;i++){
            //for(int j=1;j<=x;j++){
                int j = x-i;
                int g = gcd(i,j);
                int l = (i*j);
                if(g+l==x){
                    cout<<g<<" "<<l<<endl;
                    flag=1;
                    break;
                } 
            /*}
            if(flag == 1){
                break;
            }*/
        }
    }
}