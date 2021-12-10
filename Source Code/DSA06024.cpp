#include<bits/stdc++.h>

using namespace std;

int step = 1;
void print_array(int arr[], int n){
    cout<<"Buoc "<<step++<<": ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void selection_sort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        int min_idx = i;
        for(int j = i + 1; j < n; j++){
            if(arr[min_idx] > arr[j]) min_idx = j; 
        }

        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
        print_array(arr, n);
    }
}

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    selection_sort(arr, n);
}

int main(){
    solve();
    return 0;
}