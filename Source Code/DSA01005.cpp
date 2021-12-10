#include<bits/stdc++.h>

using namespace std;

void in(int arr[], int n){
	for(int i = 1; i <= n; i++) cout<<arr[i];
	cout<<" ";
}

// cach 1
//bool ok = true; // kiem tra xem da sinh den cau hinh tiep theo chua
//void sinh_hoan_vi(int arr[], int n){
//	int pos = n - 2;
//	while(pos >= 0 && arr[pos] > arr[pos + 1]) pos--;
//	
//	if(pos < 0){
//		ok = false;
//		return;
//	}
//	
//	int index = n - 1;
//	while(arr[pos] > arr[index]) index--;
//	
//	swap(arr[index], arr[pos]);
//	sort(arr + pos + 1, arr + n);
//}

// cach 2
/*
	bool danh_dau[] : danh dau xem so i dau xuat hien hay chua
	len : la vi tri dang xet
	n : la so phan tu 1,2,...,n
*/
void back_track(int arr[], bool danh_dau[], int len, int n){
	for(int i = 1; i <= n; i++){
		if(danh_dau[i]) continue;
		arr[len] = i;
		danh_dau[i] = true;
		if(len == n){
			in(arr, n);
		} else back_track(arr, danh_dau, len + 1, n);
		danh_dau[i] = false;
	}
}

void bai_lam(){
	int n; cin>>n;
	int arr[n + 1] = {};
	bool danh_dau[n + 1] = {};
	//for(int i = 0; i < n; i++) arr[i] = i + 1; // khoi tao cau hinh dau tien
	
	// lap tim cho den khi thay cau hinh cuoi cung
//	while(ok){
//		in(arr, n); // in ra cac cau hinh
//		sinh_hoan_vi(arr, n); // tim cac cau hinh tiep theo
//	}

	back_track(arr, danh_dau, 1, n);
	
	cout<<endl;
}

int main(){
	int a; cin>>a; cin.ignore();
	while(a--){
		bai_lam();
		//ok = true;
	}
	return 0;
}
