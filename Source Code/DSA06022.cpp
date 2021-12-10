#include<bits/stdc++.h>

using namespace std;

void solve(){
    int n;
    cin>>n; int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];
    sort(a, a + n);
    bool check = true;
    for(int i = 1; i < n; i++){
        if(a[i] != a[0]){
            cout<<a[0]<<" "<<a[i]<<endl;
            check = false;
            break;
        }
    }

    if(check) cout<<-1<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
    return 0;
}