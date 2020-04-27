#include <bits/stdc++.h>
using namespace std;

int dup(int arr[], int size) 
{ 
    for (int i = 0; i < size; i++) 
    { 
        if (arr[abs(arr[i])] >= 0) 
            arr[abs(arr[i])] = -arr[abs(arr[i])]; 
        else
            return i; 
    }
    return INT_MIN;
} 

void swap(int *a,int *b){
    int t= *a;
    *a = *b;
    *b = t;
}

int main() {
	int t;
	cin>>t;
	for(int q=0;q<t;q++){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    sort(a,a+n,greater<>());
	    for(int i=0;i<n;i++){
	        cout<<a[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
