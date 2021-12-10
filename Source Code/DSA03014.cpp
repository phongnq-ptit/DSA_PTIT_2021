#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

// tìm và lưu các số khối lập phương nhỏ hơn hoặc bằng n
vector<string> largest_cubes(ll n){
    vector<string> numberOfCube;
    for(ll i = 1; i * i * i <= n; i++){
        ll num = i * i * i;
        string num_cube = to_string(num);
        numberOfCube.push_back(num_cube);
    }

    reverse(numberOfCube.begin(), numberOfCube.end());
    return numberOfCube;
}

// xử lý kết quả
string resulst(ll n){
    vector<string> numberOfCube = largest_cubes(n);
    string numA = to_string(n);
    
    for(int i = 0; i < numberOfCube.size(); i++){
        string numB = numberOfCube[i];
        int index = 0;
        for(int j = 0; j < numA.length(); j++){
            if(numA[j] == numB[index] && index < numB.size())
                index++;
        }
        if(index == numB.length()) return numB;
    }
    return "-1";
}

void solve(){
    ll n; cin>>n;

    cout<<resulst(n)<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}