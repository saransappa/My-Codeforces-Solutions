#include <bits/stdc++.h>
using namespace std;

bool is_similar(string s,string t){
    if(s.size()!=t.size())return false;
    else{
        for(int i=0;i<s.size();i++){
            if(s[i]==t[i])return true;
        }
    }
    return false;
}

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
	    int len;
	    cin>>len;
	    string s;
	    cin>>s;
	    vector <string> v;
	    for(int i=0;i<=s.size()-len;i++){
	        v.push_back(s.substr(i,len));
	    }
	    string t= "";
	    for(int i=0;i<len;i++)t+='0';
	    for(int i=0;i<v.size();i++){
	        if(!is_similar(t,v[i])){
	            t[i]=v[i][i];
	        }
	    }
	    cout<<t<<endl;
	}
	return 0;
}
