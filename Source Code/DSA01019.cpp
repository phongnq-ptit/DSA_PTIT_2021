#include<bits/stdc++.h>

using namespace std;

/*
	A tuong duong 0
	H truong duong 1
*/
vector<string> res;

bool check(string s){
	if(s[0] != 'H' || s[s.length() - 1] != 'A') return false;
	for(int i = 1; i < s.length(); i++){
		if(s[i - 1] == 'H' && s[i] == 'H') return false;
	}
	return true;
}

bool check_continue = true;
void next_binary(string &s){
	
	if(check(s)) res.push_back(s); // luu cac cau hinh thoa man yeu cau
	
	int pos = s.length() - 1;
	while(pos >= 0 && s[pos] == 'H') s[pos--] = 'A';
	
	if(pos < 0){
		check_continue = false;
		return;
	}
	
	s[pos] = 'H';
}

void solve(){
	int n; cin>>n;
	string s;
	for(int i = 0; i < n; i++) s += 'A'; // khoi tao cau hinh dau tien
	
	// lap tim ra cac cau hinh tiep theo
	while(check_continue){
		next_binary(s);
	}
	
	// in ket qua
	for(int i = 0; i < res.size(); i++) cout<<res[i]<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
		check_continue = true;
		res.clear();
	}
	return 0;
}
