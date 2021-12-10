#include<bits/stdc++.h>

using namespace std;

void solve(){
    vector<int> st;
    string s; int value; 
    while(cin>>s){
        bool check = false;
        if(s == "push"){
            cin>>value;
            st.push_back(value);
        } 
        else if(s == "pop") st.pop_back();
        else if(s == "show"){
            if(st.empty()) {
                cout<<"empty"<<endl;
                check = true;
            }else{
                for(auto i: st) cout<<i<<" ";
                cout<<endl;
            }
        }

        if(check) break;
    }
}

int main(){
    solve();
    return 0;
}
