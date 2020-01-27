#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    if(c>=65 && c<=90){
        c+=32;
    }
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1.size()!=s2.size()){
        cout<<"NO"<<endl;
        return 0;
    }
    int i=0;
    while(i<s1.size() && i<s2.size()){
        if(isVowel(s1[i])!=isVowel(s2[i])){
            cout<<"NO"<<endl;
            return 0;
        }
        i++;
    }
    cout<<"YES"<<endl;
    return 0;
}