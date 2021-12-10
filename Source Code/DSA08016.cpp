#include<bits/stdc++.h>

using namespace std;
map<string, int> mp_start, mp_end;

string left_clockwise(string s){
    return string({s[3], s[0], s[2], s[7], s[4], s[1], s[6], s[8], s[5], s[9]});
}

string right_clockwise(string s){
    return string({s[0], s[4], s[1], s[3], s[8], s[5], s[2], s[7], s[9], s[6]});
}

string left_counter_clockwise(string s){
    return string({s[1], s[5], s[2], s[0], s[4], s[8], s[6], s[3], s[7], s[9]});
}

string right_counter_clockwise(string s){
    return string({s[0], s[2], s[6], s[3], s[1], s[5], s[9], s[7], s[4], s[8]});
}

void clockwise(string s){
    queue<string> que; que.push(s);
    while(!que.empty()){
        string str = que.front(); que.pop();
        string status_1 = left_clockwise(str);
        string status_2 = right_clockwise(str);

        if(mp_start[status_1] == 0){
            que.push(status_1); 
            mp_start[status_1] = mp_start[str] + 1;
        }

        if(mp_start[status_2] == 0){
            que.push(status_2); 
            mp_start[status_2] = mp_start[str] + 1;
        }

        if(mp_start[que.back()] >= 14) break;
    }
}

int counter_clockwise(string s){
    queue<string> que; que.push(s);
    while(!que.empty()){
        string str = que.front(); que.pop();

        if(mp_start[str] != 0) return mp_start[str] + mp_end[str];

        string status_1 = left_counter_clockwise(str);
        string status_2 = right_counter_clockwise(str);

        if(mp_end[status_1] == 0){
            que.push(status_1); 
            mp_end[status_1] = mp_end[str] + 1;
        }

        if(mp_end[status_2] == 0){
            que.push(status_2); 
            mp_end[status_2] = mp_end[str] + 1;
        }
    }
    return -1;
}

void solve(){
    mp_start.clear(); mp_end.clear();
    string finish = "1238004765"; 
    string tmp;
    int n = 10;
    while(n--){
        char c; cin>>c;
        tmp.push_back(c);
    }

    clockwise(tmp);
    cout<<counter_clockwise(finish)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}