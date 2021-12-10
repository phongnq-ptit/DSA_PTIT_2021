#include<bits/stdc++.h>

using namespace std;

/*
	in ma gray theo xau nhi phan
	arr[0] giu nguyen
	xet cac vi tri tu i den n (i = 1,2,3,...)
	arr[i - 1] != arr[i] => in ra 1
	arr[i - 1] == arr[i] => in ra 0
*/

// in ra cau hinh cua ma gray
void output(int arr[], int n){
	cout<<arr[0];
	for(int i = 1; i < n; i++) {
		if(arr[i - 1] == arr[i]) cout<<"0";
		else cout<<"1";
	}
	cout<<" ";
}

// sinh xau nhi phan bang quay lui
void next_binary(int arr[], int n, int len){
	for(int i = 0; i <= 1; i++){
		arr[len] = i;
		if(len == n - 1) output(arr, n); 
		else next_binary(arr, n, len + 1);
	}
}

void solve(){
	int n; cin>>n;
	int arr[n] = {};
	
	next_binary(arr, n, 0);
	cout<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}
