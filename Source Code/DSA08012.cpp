#include<bits/stdc++.h>

using namespace std;

bool check(int n){
	priority_queue<int> que;
	while(n != 0) {
		que.push(n%10);
		n /= 10;
	}
	
	if(que.top() > 5) return false;
	
	while(que.size() > 1){
		int tmp = que.top(); que.pop();
		if(tmp == que.top()) return false;
	}
	
	return true;
}

void solve(){
	int l, r; cin>>l>>r;
	if(l > r) swap(l, r);
	
	int count = 0;
	for(int i = l; i <= r; i++){
		if(check(i)) count++;
	}
	
	cout<<count<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}