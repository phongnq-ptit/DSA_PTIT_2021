#include<bits/stdc++.h>

using namespace std;

void solve(){
	string s; cin>>s;
	
	int pos = s.length() - 1;
	while(pos >= 0 && s[pos] == '0') s[pos--] = '1';
	if(pos >= 0) s[pos] = '0';
	cout<<s<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		solve();
	}
	return 0;
}
