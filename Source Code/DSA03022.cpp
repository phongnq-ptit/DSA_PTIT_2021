#include<bits/stdc++.h>

using namespace std;

void solve(){
    long long n;
	cin >> n;
	vector<long long> A(n);
	for(int i=0; i<n; i++) cin >> A[i];
	sort(A.begin(), A.end());
	long long ans =  max({A[0] * A[1] * A[n - 1], A[n - 1] * A[n - 2] * A[n - 3], A[0] * A[1], A[n - 1] * A[n - 2]});
	
	cout << ans << endl;
}

int main(){
    solve();
    return 0;
}