#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n; cin>>n;
	queue<int> que;
	while (n--){
		string str; cin >> str;
		if (str == "PUSH"){
			int x; cin>>x;
			que.push(x);
		}
		if (str == "POP"){
			if (!que.empty())
				que.pop();
		}
		if (str == "PRINTFRONT")
			if (!que.empty())
				cout <<que.front()<< endl;
			else cout <<"NONE"<< endl;
	}
}

int main(){
	solve();
    return 0;
}