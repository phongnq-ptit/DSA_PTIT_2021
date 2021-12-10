#include<bits/stdc++.h>

using namespace std;

int n, cnt;
bool is_ok = false; 
int arr[20] = {};

void init(){
    cnt = 1;
    arr[cnt] = n;
}

void print_result(){
    cout<<"(";
    for(int i = 1; i < cnt; i++) cout<<arr[i]<<" ";
    cout<<arr[cnt]<<") ";
}

// sinh phân hoạch
void next(){
    int i = cnt;
    while(i >= 1 && arr[i] == 1) i--; // tìm số đầu tiên khác 1
    
    if(i < 1) {
        is_ok = true;
        return;
    }

    int tmp = cnt - i + 1; // số lượng số 1 đã bỏ qua
    arr[i] -= 1; // giảm số "đầu tiên khác 1" xuống 1 đơn vị
    cnt = i; // gán lại biến đếm cho vị trí i
    int a = tmp / arr[i]; 
    int b = tmp % arr[i];

    if(a != 0)
        for(int j = 1; j <= a; j++) 
            arr[++cnt] = arr[i];

    if(b != 0)
        arr[++cnt] = b;
}

void solve(){
    is_ok = false;
    cin>>n;
    init(); //khởi tạo cấu hình đầu tiên

    while(!is_ok){
        print_result();
        next();
    }
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}