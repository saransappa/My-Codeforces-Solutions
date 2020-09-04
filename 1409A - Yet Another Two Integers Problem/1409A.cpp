#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        int a,b;
        cin>>a>>b;
        int k, count = 0;
        k = abs(a-b);
        while(k){
            count+=k/10;
            k = k%10;
            count+=k/9;
            k = k%9;
            count+=k/8;
            k = k%8;
            count+=k/7;
            k = k%7;
            count+=k/6;
            k = k%6;
            count+=k/5;
            k = k%5;
            count+=k/4;
            k = k%4;
            count+=k/3;
            k = k%3;
            count+=k/2;
            k = k%2;
            count+=k/1;
            k = k%1;
        }
        cout<<count<<endl;
    }
    return 0;
}