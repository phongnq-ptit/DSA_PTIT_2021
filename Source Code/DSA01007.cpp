#include<bits/stdc++.h>

using namespace std;

/*
	A tuong duong 0
	B truong duong 1
*/
bool check_continue = true;
void next_binary(string &s){
	int pos = s.length() - 1;
	while(pos >= 0 && s[pos] == 'B') s[pos--] = 'A';
	
	if(pos < 0){
		check_continue = false;
		return;
	}
	
	s[pos] = 'B';
}

void solve(){
	int n; cin>>n;
	string s;
	for(int i = 0; i < n; i++) s += 'A'; // khoi tao cau hinh dau tien
	
	// lap tim ra cac cau hinh tiep theo
	while(check_continue){
		cout<<s<<" ";
		next_binary(s);
	}
	cout<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
		check_continue = true;
	}
	return 0;
}
