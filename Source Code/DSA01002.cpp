#include<bits/stdc++.h>

using namespace std;

void bai_lam(){
	int n, k; cin>>n>>k;
	int arr[k]; 
	for(int i = 0; i < k; i++) cin>>arr[i];
	
	// pos se la vi tri co gia tri khac n - k + pos + 1 dau tien tinh tu phai qua trai
	int pos = k - 1;
	while(pos >= 0 && arr[pos] == n - k + pos + 1) pos--;
	
	if(pos < 0){
		for(int i = 0; i < k; i++) arr[i] = i + 1; 
	} else {
		arr[pos] += 1;
		int value = arr[pos];
		for(int i = pos + 1; i < k; i++) arr[i] = ++value; 
	}
	
	for(int i = 0; i < k; i++) cout<<arr[i]<<" ";
	cout<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		bai_lam();
	}
	return 0;
}
