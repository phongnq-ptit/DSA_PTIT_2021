#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n,x;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++) cin>>arr[i];
	cin>>x;
	for (int i = 0; i < n; i++){
		if (arr[i] != x) cout<<arr[i]<<" ";
	} 
}

int main(){
	solve();
	cout<<endl;
}