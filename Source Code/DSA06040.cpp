#include<bits/stdc++.h>

using namespace std;

int stop=0;
void solve(int a,int b,int c,int x[],int y[],int z[]){
	int i=1,j=1,k=1;
	while(i<= a && j<=b && k<=c){
		if(x[i]==y[j] && y[j]==z[k]){
			cout<<x[i]<<" ";
			i++;j++;k++;
			stop=1;
		}
		else if(x[i]<y[j]) i++;
		else if(y[j]<z[k]) j++;
		else k++;
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b,c;
		cin>>a>>b>>c;
		stop=0;
		int arr1[a],arr2[b],arr3[c];
		for(int i=1;i<=a;i++){
			cin>>arr1[i];
		}
		for(int i=1;i<=b;i++){
			cin>>arr2[i];
		}
		for(int i=1;i<=c;i++){
			cin>>arr3[i];
		}
		solve(a,b,c,arr1,arr2,arr3);
		if(stop==0){
			cout<<-1;
		}
		cout<<endl;
	}
}