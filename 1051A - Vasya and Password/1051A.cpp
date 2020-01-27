#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int q=0;q<t;q++){
        string s;
        cin>>s;
        vector <int> up;
        vector <int> low;
        vector <int> num;
        int up_count=0,low_count=0,num_count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>=48 && s[i]<=57){num_count++;num.push_back(i);}
            else if(s[i]>=97 && s[i]<=122){low_count++;low.push_back(i);}
            else{up_count++;up.push_back(i);}
        }
        if(up_count>=1 && low_count >=1 && num_count>=1){
            cout<<s<<endl;
        }
        else {
            if(low_count<1){
                if(up_count>1){
                    s[up.at(0)]='a';
                    low.push_back(up.at(0));
                    sort(low.begin(),low.end());
                    up.erase(up.begin());
                }
                else if(num_count>1){
                    s[num.at(0)]='a';
                    low.push_back(num.at(0));
                    sort(low.begin(),low.end());
                    num.erase(num.begin());
                }
                else{
                    low.push_back(s.size());
                    sort(low.begin(),low.end());
                    s+='a';
                }
                low_count++;
            }
            if(up_count<1){
                if(low_count>1){
                    s[low.at(0)]='A';
                    up.push_back(low.at(0));
                    sort(up.begin(),up.end());
                    low.erase(low.begin());
                }
                else if(num_count>1){
                    s[num.at(0)]='A';
                    up.push_back(num.at(0));
                    sort(up.begin(),up.end());
                    num.erase(num.begin());
                }
                else{
                    up.push_back(s.size());
                    sort(up.begin(),up.end());
                    s+='A';
                }
                up_count++;
            }
            if(num_count<1){
                if(low_count>1){
                    s[low.at(0)]='1';
                    num.push_back(low.at(0));
                    sort(num.begin(),num.end());
                    low.erase(low.begin());
                }
                else if(up_count>1){
                    s[up.at(0)]='1';
                    num.push_back(up.at(0));
                    sort(num.begin(),num.end());
                    up.erase(up.begin());
                }
                else{
                    num.push_back(s.size());
                    sort(num.begin(),num.end());
                    s+='1';
                }
                num_count++;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}