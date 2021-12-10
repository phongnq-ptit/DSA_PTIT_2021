#include<bits/stdc++.h>

using namespace std;

void bai_lam(){
	string s; cin>>s;
	
	// pos se la vi tri co gia tri la '0' dau tien tinh tu phai qua trai
	int pos = s.length() - 1; 
	while(pos >= 0 && s[pos] != '0') pos--;
	
	s[pos] = '1';
	if(pos < 0){
		for(int i = 0; i < s.length(); i++) s[i] = '0';
	} else{
		for(int i = pos + 1; i < s.length(); i++) s[i] = '0';
	}
	
	cout<<s<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		bai_lam();
	}
	return 0;
}
