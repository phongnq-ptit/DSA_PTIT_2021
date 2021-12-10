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

int height(Node* tree){
    if(tree == NULL) return 0;
    else{
        int left_height = height(tree->left);
        int right_height = height(tree->right);
        
        if(left_height > right_height)
            return (left_height + 1);
        else return 
            (right_height + 1);
    }
}

void solve(){
    int n; cin>>n;
    Node *tree = NULL;
    while(n--){
        int value; cin>>value;
        insert_node(tree, value);
    }

    cout<<height(tree) - 1<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}