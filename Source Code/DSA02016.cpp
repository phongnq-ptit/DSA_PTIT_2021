#include<bits/stdc++.h>

using namespace std;

int n, cnt;
int queen[200][200];
bool col[200]; // đánh dấu cột 
bool diagonal_left[200]; // đánh dấu đường chéo xuôi (i - j + n)
bool diagonal_right[200]; // đánh dấu đường chéo ngược (i + j - 1)

void reset(){
    cnt = 0;
    memset(queen, 0, false);
	memset(col, false, sizeof(col));
	memset(diagonal_left, false, sizeof(diagonal_left));
	memset(diagonal_right, false, sizeof(diagonal_right));
}

void back_track(int index){
    if(index == n + 1){
        cnt++;
        return;
    }
    for(int i = 1; i <= n; i++){
        if(!col[i] && !diagonal_left[index - i + n] && !diagonal_right[index + i - 1]){
            col[i] = true;
            diagonal_left[index - i + n] = true;
            diagonal_right[index + i - 1] = true;
            queen[index][i] = 1;

            back_track(index + 1);

            col[i] = false;
            diagonal_left[index - i + n] = false;
            diagonal_right[index + i - 1] = false;
            queen[index][i] = 0;
        }
    }
}

void solve(){
    reset();
    cin>>n;
    
    back_track(1);
    cout<<cnt<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}