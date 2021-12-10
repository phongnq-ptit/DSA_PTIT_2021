#include<bits/stdc++.h>

using namespace std;

int step = 1;
void print_array(int arr[], int n){
    cout<<"Buoc "<<step++<<": ";
    for(int i = 0; i < n; i++) cout<<arr[i]<<" ";
    cout<<endl;
}

void doi_cho_truc_tiep(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        print_array(arr, n);
    }
}

void solve(){
    int n; cin>>n;
    int arr[n];
    for(int i = 0; i < n; i++) cin>>arr[i];
    doi_cho_truc_tiep(arr, n);
}

int main(){
    solve();
    return 0;
}