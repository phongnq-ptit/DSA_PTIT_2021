#include<bits/stdc++.h>

using namespace std;

int result[1005][1005]; // kết quả của giá trị lớn nhất khi lấy i đồ vật có thể tích là j
/*
    n : là số đồ vật có thể lấy
    v : thể tích của cái túi
    wei[i] : thể tích của đồ vật thứ i
    val[i]: giá trị của đồ vật thứ i
*/
void solve(){
    int n, v; cin>>n>>v;
    vector<int> wei(n + 5), val(n + 5);
    for(int i = 1; i <= n; i++) cin>>wei[i];
    for(int i = 1; i <= n; i++) cin>>val[i];

    /*
        hàng là đồ vật thứ i được chọn
        cột là thể tích của cái túi khi có đồ vật thứ i được thêm vào
    */

    // khởi tạo giá trị khi không lấy đồ vật gì
    // hoặc thể tích cái túi bằng 0
    memset(result, 0, sizeof(result));

    // công thức truy hồi là:
    // giá trị lớn nhất giữa việc lấy đồ vật đó hoặc không lấy đồ vật đó
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= v; j++){
            result[i][j] = result[i - 1][j];
            if(j >= wei[i])
                result[i][j] = max(result[i - 1][j - wei[i]] + val[i], result[i - 1][j]);
        }
    }

    cout<<result[n][v]<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}