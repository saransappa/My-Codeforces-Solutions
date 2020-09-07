#include <bits/stdc++.h>
using namespace std;

bool allOnes(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='0')return false;
    }
    return true;
}

bool compare(string &a,string &b){
    return a.size() > b.size();
}

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
	    string s;
	    cin>>s;
	    vector <string> v;
	    for(int i=0;i<=s.size();i++){
	        int maxlen = 0;
	        vector <string> t;
	        for(int len=1;len<=s.size()-i;len++){
	            string k = s.substr(i,len);
	            t.push_back(k);
	        }
	        sort(t.begin(),t.end(),compare);
            for(int j=0;j<t.size();j++){
                if(allOnes(t[j])){
                    v.push_back(t[j]);
                    i+=t[j].size();
                    break;
                }
            }
            
	    }
	    sort(v.begin(),v.end(),compare);
	    /*for(int i=0;i<v.size();i++){
	        cout<<v[i]<<endl;
	    }*/
	    int sum = 0;
	    for(int i=0;i<v.size();i+=2){
	        sum+=v[i].size();
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
