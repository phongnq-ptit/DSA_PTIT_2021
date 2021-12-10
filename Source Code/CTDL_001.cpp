#include<bits/stdc++.h>

using namespace std;

// in ra cau hinh
void output(int arr[], int n){
	for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
	cout<<endl;
}

// kiem tra xem xau nhi phan co doi xung khong
bool is_ok(int arr[], int n){
	for(int i = 0; i < n/2; i++){
		if(arr[i] != arr[n - i - 1]) return false;
	}
	return true;
}

// sinh xau nhi phan bang quay lui
void next_binary(int arr[], int n, int len){
	for(int i = 0; i <= 1; i++){
		arr[len] = i;
		if(len == n - 1){
			if(is_ok(arr, n)) output(arr, n);
		} else next_binary(arr, n, len + 1);
	}
}

void solve(){
	int n; cin>>n;
	int arr[n] = {};
	
	next_binary(arr, n, 0);
}

int main(){
	solve();
	return 0;
}
