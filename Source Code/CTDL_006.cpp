#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
	cin>>n;
	int a[n], tick[10000];
	for(int i = 0; i < n; i++) {
		cin>>a[i];
		tick[a[i]] = 1;
	}
    
	for(int i = 0; i < n; i++){
		if (tick[a[i]]) {
			cout<<a[i]<<" ";
			tick[a[i]]=0;
		}
	} 
}

int main(){
	solve();
	cout<<endl;
}