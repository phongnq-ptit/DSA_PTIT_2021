#include<bits/stdc++.h>

using namespace std;

bool check_continue = true;
void sinh_to_hop(string &s, int n, int k){
	int pos = s.length() - 1;
	while(pos >= 0 && (int) s[pos] == 64 + n - k + pos + 1) pos--;
	
	if(pos < 0) {
		check_continue = false;
		return;
	}
	
	s[pos]++;
	char value = s[pos];
	for(int i = pos + 1; i < s.length(); i++) s[i] = ++value;
}

void solve(){
	int n, k; cin>>n>>k;
	string s;
	for(int i = 0; i < k; i++) s += (char) 65 + i; // khoi tao cau hinh dau tien
	
	// lap tim cac cau hinh tiep theo
	while(check_continue){
		cout<<s<<endl;
		sinh_to_hop(s, n, k);
	}
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
		check_continue = true;
	}
	return 0;
}
