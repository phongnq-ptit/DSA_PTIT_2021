#include <bits/stdc++.h>

using namespace std;

void solve(){
    int t; cin>>t;
	string s;
	int n;
	stack<int> stk;
	while(t--){
		cin>>s;
		if(s == "PUSH"){
			cin>>n;
			stk.push(n);
		}
		else if(s == "POP" && stk.size() > 0) stk.pop();
		else if(s == "PRINT"){
			if(stk.size() == 0) cout<<"NONE"<<endl;
			else cout<<stk.top()<<endl;
		}
	}
}

int main(){
	solve();
    return 0;
}