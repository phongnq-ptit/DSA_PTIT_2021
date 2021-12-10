#include<bits/stdc++.h>

using namespace std;

struct work{
    int start, finish;
};

bool cmp(work a, work b){
    if(a.finish < b.finish) return true;
    return false;
}

void solve(){
    int n; cin>>n;
    work task[n];
    for(int i = 0; i < n; i++) cin>>task[i].start;
    for(int i = 0; i < n; i++) cin>>task[i].finish;

    sort(task, task + n, cmp);
    /*
        Sắp xếp theo thời gian kết thúc
        Đếm thời gian bắt đầu của hành động sau lớn hơn hoặc bằng hành dộng trước
    */
    int res = 1, pos = 0;
    for(int i = 1; i < n; i++){
        if(task[pos].finish <= task[i].start){
            res++;
            pos = i;
        }
    }

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}