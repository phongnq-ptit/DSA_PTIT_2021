#include<bits/stdc++.h>

using namespace std;

int n;
int num[20] = {};
vector< vector<int> > res;

void print_result(vector<int> temp){
    cout<<"(";
    for(int i = 0; i < temp.size() - 1; i++) cout<<temp[i]<<" ";
    cout<<temp[temp.size() - 1]<<") ";
}

void handle(int index){
    vector<int> tmp;
    for(int i = 1; i <= index; i++) tmp.push_back(num[i]);
    res.push_back(tmp);
}

void back_track(int index){
    for(int i = num[index - 1]; i >= 1; i--){
        num[index] = i;
        n -= i;
        if(n == 0) handle(index);
        else if(n > 0) back_track(index + 1);
        n += i;
    }
}

void solve(){
    res.clear();
    cin>>n;
    num[0] = n;

    back_track(1);

    cout<<res.size()<<endl;
    for(int i = 0; i < res.size(); i++) print_result(res[i]);
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}