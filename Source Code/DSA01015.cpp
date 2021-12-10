#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void solve(){
	ll n; cin>>n;
	ll tmp[2] = {0, 9};
	queue<ll> que; que.push(9);

	while(true){
		for(int i = 0; i < 2; i++){
			ll num = que.front() * 10 + tmp[i];
			que.push(num);
		}

		if(que.front()%n == 0) {
			cout<<que.front()<<endl; 
			return;
		} else que.pop();
	}
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}
