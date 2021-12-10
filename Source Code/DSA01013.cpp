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
	string res;
	
	res += s[0];
	for(int i = 1; i < s.length(); i++){
		if(s[i] == '0') res += res[i - 1];
		else{
			if(res[i - 1] == '0') res += '1';
			else res += '0';
		}
	}
	
	cout<<res<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		solve();
	}
	return 0;
}
