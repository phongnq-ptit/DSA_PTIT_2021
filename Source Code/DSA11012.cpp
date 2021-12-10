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

void connect_node(Node* &tree, int child, char position){
    if(position == 'L') tree->left = new Node(child);
    if(position == 'R') tree->right = new Node(child);
}

void create_node(Node* &tree, int dad, int child, char position){
    if(tree == NULL) return;
    if(tree->data == dad) connect_node(tree, child, position);
    create_node(tree->left, dad, child, position);
    create_node(tree->right, dad, child, position);
}

vector<int> tmp_1, tmp_2;
void preorder_NLR(Node* tree, vector<int> &tmp){
    if(tree != NULL){
        tmp.push_back(tree->data);
        preorder_NLR(tree->left, tmp);
        preorder_NLR(tree->right, tmp);
    }
}

void solve(){
    tmp_1.clear(); tmp_2.clear();
    int n, m; cin>>n;

    Node *tree_1 = NULL;
    Node *tree_2 = NULL;

    while(n--){
        int dad, child; char position;
        cin>>dad>>child>>position;
        if(tree_1 == NULL){
            tree_1 = new Node(dad);
            connect_node(tree_1, child, position);
        } else create_node(tree_1, dad, child, position);
    }

    cin>>m;
    while(m--){
        int dad, child; char position;
        cin>>dad>>child>>position;
        if(tree_2 == NULL){
            tree_2 = new Node(dad);
            connect_node(tree_2, child, position);
        } else create_node(tree_2, dad, child, position);
    }

    preorder_NLR(tree_1, tmp_1);
    preorder_NLR(tree_2, tmp_2);

    if(equal(tmp_1.begin(), tmp_1.end(), tmp_2.begin())) cout<<1<<endl;
    else cout<<0<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}