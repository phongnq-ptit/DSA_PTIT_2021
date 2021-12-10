#include<bits/stdc++.h>

using namespace std;

void solve(){
	int test; cin>>test;
	string s; cin>>s;
	vector<int> num;
	for(char i: s) num.push_back(i - '0');

	int n = num.size();
	int pos = n - 2;
	while(n >= 0 && num[pos] >= num[pos + 1]) pos--;

	if(pos < 0){
		cout<<test<<" BIGGEST"<<endl;
		return;
	}

	int index = n - 1;
	while(num[pos] >= num[index]) index--;
	swap(num[pos], num[index]);
	
	int left = pos + 1, right = n - 1;
	while(left < right){
		swap(num[left], num[right]);
		left++; right--;	
	}

	cout<<test<<" ";
	for(auto i: num) cout<<i;
	cout<<endl;
}

int main(){
	int a; cin>>a; 
	while(a--){
		solve();
	}
	return 0;
}
