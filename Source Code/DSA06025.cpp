#include<bits/stdc++.h>

using namespace std;

int step = 0;
void print_array(int arr[], int n){
    cout<<"Buoc "<<step++<<": ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void insertion_sort(int arr[], int n){
    int len = 1;
    print_array(arr, len++);

    for(int i = 1; i < n; i++){
        int index = i;
        int value = arr[i];

        // tìm ra vị trí cần chèn
        while(index > 0 && arr[index - 1] > value){
            arr[index] = arr[index - 1];
            index--;
        }

        arr[index] = value;
        print_array(arr, len++);
    }
}

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    insertion_sort(arr, n);
}

int main(){
    solve();
    return 0;
}