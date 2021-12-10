#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void insert_node(Node* &tree, int data){
    if(tree == NULL) tree = new Node(data);
    else{
        if(data < tree->data) insert_node(tree->left, data);
        else insert_node(tree->right, data);
    } 
}

void inorder_LNR(Node* tree, vector<int> &tmp){
    if(tree != NULL){
        inorder_LNR(tree->left, tmp);
        tmp.push_back(tree->data);
        inorder_LNR(tree->right, tmp);
    }
}

void solve(){
    int n; cin>>n;
    vector<int> arr(n);
    Node *tree = NULL;
    
    for(int &x: arr) {
        cin>>x;
        insert_node(tree, x);
    }

    vector<int> tmp;
    inorder_LNR(tree, tmp);

    if(equal(arr.begin(), arr.end(), tmp.begin())) cout<<1;
    else cout<<0;
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}