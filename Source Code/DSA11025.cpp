#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data; 
    Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

vector<int> arr;

Node *avl_tree(Node *tree, int st, int en){
    int mid = (st + en) / 2;
    tree = new Node(arr[mid]);
    if(st < mid) tree->left = avl_tree(tree->left, st, mid - 1);
    if(en > mid) tree->right = avl_tree(tree->right, mid + 1, en);
    return tree;
}

void pre_NLR(Node *tree){
    if(tree != NULL){
        cout<<tree->data<<" ";
        pre_NLR(tree->left);
        pre_NLR(tree->right);
    }
}

void solve(){
    arr.clear(); 
    int n; cin>>n;
    arr.resize(n);
    for(int &val: arr) cin>>val;
    sort(arr.begin(), arr.end());

    Node *tree = NULL;
    tree = avl_tree(tree, 0, n - 1);

    pre_NLR(tree);
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}