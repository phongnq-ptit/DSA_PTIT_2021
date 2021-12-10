#include<bits/stdc++.h>

using namespace std;

int step = 1;
void print_array(vector<int> arr, int n){
    cout<<"Buoc "<<step++<<": ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void bubble_sort(vector<int> arr, int n){
    for(int i = 0; i < n - 1; i++){
        bool is_ok = true;
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                is_ok = false;
            }
        }

        if(is_ok) break;
        print_array(arr, n);
    }
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin>>arr[i];

    bubble_sort(arr, n);
}

int main(){
    solve();
    return 0;
}