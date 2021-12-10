#include<bits/stdc++.h>

using namespace std;

vector<string> res;

// kiem tra xem trong xau co chua duy nhat k ky tu A hay khong
bool is_ok(string s, int k){
	int count = 0;
	bool isHave = false;
	for(int i = 0; i < s.length(); i++){
		if(s[i] == 'A') count ++;
		else count = 0;
		
		if(count > k) return false;
		else if(count == k){
			if(!isHave) isHave = true;
			else return false;
		}
	}
	return isHave;
}

// sinh xau nhi phan
/*
	A tuong duong 0
	B tuong duong 1
*/
bool check_continue = true;
void next_binary(string &s, int k){
	if(is_ok(s, k)) res.push_back(s); // them cac cau hinh thoa man yeu cau vao vector
	
	int pos = s.length() - 1;
	while(pos >= 0 && s[pos] == 'B') s[pos--] = 'A';
	
	if(pos < 0){
		check_continue = false;
		return;
	}
	
	s[pos] = 'B';
}

void solve(){
	int n, k; cin>>n>>k;
	string s;
	
	for(int i = 0; i < n; i++) s += 'A'; // xac dinh cau hinh dau tien
	
	// lap sinh xau nhi phan
	while(check_continue){
		next_binary(s, k);
	}
	
	// in ket qua
	cout<<res.size()<<endl;
	for(int i = 0; i < res.size(); i++) cout<<res[i]<<endl;
}

int main(){
	solve();
	return 0;
}
