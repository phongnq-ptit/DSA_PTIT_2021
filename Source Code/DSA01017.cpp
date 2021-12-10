#include<bits/stdc++.h>

using namespace std;

/*
	in ma gray theo xau nhi phan
	arr[0] giu nguyen
	xet cac vi tri tu i den n (i = 1,2,3,...)
	arr[i - 1] != arr[i] => in ra 1
	arr[i - 1] == arr[i] => in ra 0
*/

void solve(){
	string s; cin>>s;
	
	cout<<s[0];
	for(int i = 1; i < s.length(); i++){
		if(s[i - 1] != s[i]) cout<<"1";
		else cout<<"0";
	}
	cout<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		solve();
	}
	return 0;
}
