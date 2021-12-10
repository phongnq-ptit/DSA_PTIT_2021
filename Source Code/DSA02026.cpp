#include<bits/stdc++.h>

using namespace std;

string res, str;
bool check;

void back_track(string &str){
    if(check) return;

    int pos = -1;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '?'){
            pos = i;
            break;
        }
    }

    if(pos != -1){
        if(pos == 3){
            str[pos] = '+'; back_track(str);
            str[pos] = '-'; back_track(str);
            str[pos] = '?';
        } else {
            for(char i = '0'; i <= '9'; i++){
                if(i == '0' && (pos == 0 || pos == 5 || pos == 10)) continue;
                str[pos] = i;
                back_track(str);
                str[pos] = '?';
            }
        }
    } else {
        int operand_1 = stoi(str.substr(0, 2));
        int operand_2 = stoi(str.substr(5, 2));
        int ans = stoi(str.substr(10, 2));

        if(str[3] == '+' && (operand_1 + operand_2 == ans)) {
            res = str;
            check = true;
        }
        if(str[3] == '-' && (operand_1 - operand_2 == ans)) {
            res = str;
            check = true;
        }
    }
        
}

void solve(){
    check = false;
    res = "WRONG PROBLEM!";
    getline(cin, str);

    if(str[3] == '*' || str[3] == '/'){
        cout<<res<<endl;
        return;
    }

    back_track(str);

    cout<<res<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a; cin.ignore();
    while(a--){
        solve();
    }
    return 0;
}