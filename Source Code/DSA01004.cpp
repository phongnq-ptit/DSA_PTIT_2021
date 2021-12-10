#include<bits/stdc++.h>

using namespace std;

void in(int arr[], int n){
	for(int i = 1; i <= n; i++) cout<<arr[i];
	cout<<" ";
}

/*
	len : la vi tri xau dang xet
	n : la do dai can dat duoc
	N : so luong phan tu to hop 1,2,...,N
*/
void back_track(int arr[], int len, int n, int N){
	for(int i = arr[len - 1] + 1; i <= N; i++){
		arr[len] = i;
		if(len == n){
			in(arr, n);
		} else back_track(arr, len + 1, n, N);
	}
}

void bai_lam(){
	int n, k; cin>>n>>k;
	int arr[k + 1] = {};
	
	//for(int i = 0; i < k; i++) arr[i] = i + 1; // khoi tao cau hinh dau tien
	
	// lap tim cho den khi thay cau hinh cuoi cung
	//while(ok){
		//in(arr, k); // in ra cac cau hinh
		//sinh_to_hop(arr, n, k); // tim cac cau hinh tiep theo
	//}
	
	back_track(arr, 1, k, n);
	
	cout<<endl;
}

int main(){
	int a; cin>>a; 
	while(a--){
		bai_lam();
		//ok = true;
	}
	return 0;
}
