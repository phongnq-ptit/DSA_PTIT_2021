#include<bits/stdc++.h>

using namespace std;

void bai_lam(){
	int n; cin>>n;
	int arr[n], copy[n]; 
	for(int i = 0; i < n; i++) {
		cin>>arr[i];
		copy[i] = arr[i];
	}
	
	// tìm ra vị trí arr[pos] <= arr[pos + 1] đầu tiên
	int pos = n - 2;
	while(pos >= 0 && arr[pos] > arr[pos + 1]) pos--;
	
	if(pos < 0){
		for(int i = n - 1; i >= 0; i--) cout<<copy[i]<<" ";
	} else{
		// tìm vị trí nhỏ nhất phía bên phải tính trừ vị trí pos nhưng giá trị lớn
		// hơn arr[pos]
		int index = n - 1;
		while(arr[index] < arr[pos]) index--;
		
		swap(arr[pos], arr[index]);
		sort(arr + pos + 1, arr + n);
		
		for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
	}
	
	cout<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		bai_lam();
	}
	return 0;
}
