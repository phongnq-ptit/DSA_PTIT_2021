#include<bits/stdc++.h>

using namespace std;

/*
X-1
T-2
D-3
*/
int n;
vector<int> A(n), B(n);

int findIndex(int val, int comp, int local){
	int pos = -1;
	for(int i = n - 1; i >= local + 1; i--){
		if(A[i] == val){
			if(pos == -1) pos = i;
			if(B[i] == comp) return i;
		}
	}
	return pos;
}

void solve(){
	cin >> n;
	A.resize(n);
	B.resize(n);
	for(int i = 0; i < n; i++){
		char c;
		cin >> c;
		A[i] = c == 'X'? 1 : c == 'T'? 2 : 3;
		B[i] = A[i];
	}
	sort(B.begin(), B.end());
	int ans = 0;
	for(int i = 0; i < n; i++){
		if(A[i] == B[i]) continue;
		int pos = findIndex(B[i], A[i], i);
		
		swap(A[pos], A[i]);
		ans++;
	}
	cout << ans << endl;
}


int main(){
    solve();
    return 0;
}