#include<bits/stdc++.h>

using namespace std;

int res;
int queen[200];
int chess[200][200];
bool col[200]; // đánh dấu cột 
bool diagonal_left[200]; // đánh dấu đường chéo xuôi (i - j + n)
bool diagonal_right[200]; // đánh dấu đường chéo ngược (i + j - 1)

void reset(){
    res = INT_MIN;
	memset(col, false, sizeof(col));
	memset(diagonal_left, false, sizeof(diagonal_left));
	memset(diagonal_right, false, sizeof(diagonal_right));
}

int sum(int arr[], int n){
    int ans = 0;
    for(int i = 1; i <= n; i++) ans += arr[i];
    return ans;
}

void back_track(int index){
    for(int i = 1; i <= 8; i++){
        if(!col[i] && !diagonal_left[index - i + 8] && !diagonal_right[index + i - 1]){
            queen[index] = chess[index][i];
            col[i] = true;
            diagonal_left[index - i + 8] = true;
            diagonal_right[index + i - 1] = true;
            
            if(index == 8){
                int tmp = sum(queen, 8);
                res = max(res, tmp);
            } else back_track(index + 1);

            col[i] = false;
            diagonal_left[index - i + 8] = false;
            diagonal_right[index + i - 1] = false;
        }
    }
}

void solve(){
    reset();
    for(int i = 1; i <= 8; i++)
        for(int j = 1; j <= 8; j++)
            cin>>chess[i][j];
    
    back_track(1);

    cout<<res<<endl;
}

int main(){
	int a; cin>>a;
	while(a--){
		solve();
	}
	return 0;
}

