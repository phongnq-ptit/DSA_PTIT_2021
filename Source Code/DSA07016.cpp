#include<bits/stdc++.h>

using namespace std;

void solve(){
    string s; cin>>s;
    s += "I"; // mặc định kết thúc bằng chữ 'I'
    stack<int> st;
    int first = 2, last = 1;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'D') st.push(first++); // thêm first vào stack và tăng first lên 1
        else {
            while(!st.empty()){
                cout<<st.top(); st.pop();
            }
            cout<<last;
            last = first++; // gán last = first và tăng biến first lên 1
        }
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