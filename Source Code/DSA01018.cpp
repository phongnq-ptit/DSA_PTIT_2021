#include<bits/stdc++.h>

using namespace std;

// y tuong lam tuong tu sinh to hop

void solve(){
	int n, k;
	cin>>n>>k;
	vector<int> arr(n);
	for(int i = 0; i < k; i++) cin>>arr[i]; 
	
	int step = k;
	while(step > 0 && arr[step] - arr[step - 1] <= 1) step--; // lap den khi khoang cach giua arr[i] va arr[i-1] > 1
	
	// neu cau hinh da cho la cau hinh cuoi cung
	if(step == 0 && arr[0] == 1){
		int val = n - k + 1;
		for(int i = 0; i < k; i++) cout<<val++<<" ";
		return;
	}
	
	arr[step]--; // giam arr[step] di 1 don vi

	int index = k - 1, tmp = n;
	for(int i = index; i >= step + 1; i--) arr[i] = tmp--; // cac phan tu truoc step moi phan tu = phan tu lien sau -1
	
	// in ket qua
	for(int i = 0; i < k; i++) cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int a; cin>>a;
	while(a--) {
		solve();
	}
	return 0;
}