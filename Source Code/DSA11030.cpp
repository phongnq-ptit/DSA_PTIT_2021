#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> List;
vector<int> cnt;
vector<bool> tick;
bool check;
int start, finish;

void DFS(int u){
	if(u == finish) check = true;
	if(check) return;

	tick[u] = true;
	for(auto val: List[u]){
		if(tick[val]) continue;
		cnt[val] = cnt[u] + 1;
		DFS(val);
	}
}

void solve(){
	int n, u, v, Q; cin>>n;
	List.clear(); List.resize(n + 5);

	for(int i = 0; i < n - 1; i++){
		cin>>u>>v;
		List[u].push_back(v);
		List[v].push_back(u);
	}
 	
 	cin >> Q;
 	while(Q--){
 		cin>>start>>finish;
 		cnt.assign(n + 5, 0);
 		tick.assign(n + 5, 0);
 		check = false;
 			
 		DFS(start);
 		cout<<cnt[finish]<<endl;
	}
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
	int a; cin>>a; 
	while(a--) solve();	
	return 0;	
}