#include<bits/stdc++.h>

using namespace std;

// với x^y > y^x --> y > x
// function cnt() xử lí thêm các trường hợp đặc biệt
int cnt(int x, int y[], int m, int tick[6]){
    // với x = 0 thì với mọi y đều x^y <= y^x
    if(x == 0) return 0;
    // với x = 1, y = 0 thì thỏa mãn x^y > y^x
    if(x == 1) return tick[0];
    // tìm ra vị trí số nhỏ nhất trong mảng y nhưng lớn hơn x
    int temp = upper_bound(y, y + m, x) - y;
    int res = m - temp; // có bao nhiêu số trong mảng y mà > x thì đều thỏa mãn
    // đến trường hợp này thì đã đi qua trường hợp x = 1 hoặc x = 0
    // -> x > 2 mà với mọi x > 2, y = 0 hoặc y = 1 thì đều thỏa mã điều kiện x^y > y^x
    res += (tick[0] + tick[1]); 
    // trường hợp x = 2, y = 2 hoặc y = 3 thì x^y <= y^x
    if(x == 2) res -= (tick[3] + tick[4]);
    // x = 3, y = 2 thỏa mãn điều kiện x^y > y^x
    if(x == 3) res += tick[2];
    return res;
}

void solve(){
    int n, m; cin>>n>>m;
    int x[n], y[m], tick[6] = {0};

    for(int &val: x) cin>>val;
    for(int &val: y){
        cin>>val;
        if(val < 5) tick[val]++;
    }

    sort(y, y + m); // sắp xếp mảng y để sử dụng hàm upper_bound() tối ưu nhất
    int res = 0;
    for(int i: x) res += cnt(i, y, m, tick);
    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}