#include<bits/stdc++.h>

using namespace std;

void solve(){
    deque<int> dq;
    int n; cin>>n;
    while(n--){
        string str; cin >> str;
        if(str == "PUSHFRONT"){
            int tmp;
            cin >> tmp;
            dq.push_front(tmp);
        }
        if (str == "PRINTFRONT"){
            if (!dq.empty())
                cout << dq.front() <<endl;
            else
                cout << "NONE" <<endl;
        }
        if (str == "POPFRONT"){
            if (!dq.empty())
                dq.pop_front();
        }
        if (str == "PUSHBACK"){
            int tmp;
            cin >> tmp;
            dq.push_back(tmp);
        }
        if (str == "PRINTBACK"){
            if (!dq.empty())
                cout << dq.back() <<endl;
            else
                cout << "NONE" <<endl;
        }
        if (str == "POPBACK"){
            if (!dq.empty())
                dq.pop_back();
        }
    }
}

int main(){
    solve();
    return 0;
}