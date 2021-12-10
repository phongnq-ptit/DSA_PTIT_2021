#include<bits/stdc++.h>

using namespace std;

vector< vector<int> > res;

struct Node{
    int data;
    Node *left, *right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* constructor_tree(int n){
    int root = -1, dad, child; char pos;
    map<int, Node*> mp;

    while(n--){
        cin>>dad>>child>>pos;

        if(root == -1) root = dad;

        if(mp.find(dad) == mp.end()){
            Node *tmp = new Node(dad);
            mp[dad] = tmp;
        }

        Node *node_dad = mp[dad];
        Node *node_child = new Node(child);

        if(pos == 'L') node_dad->left = node_child;
        else node_dad->right = node_child;

        mp[child] = node_child;
    }

    return mp[root];
}

void level_order(Node* tree, int level){
    if(tree != NULL){
        res[level].push_back(tree->data);
        level_order(tree->left, level + 1);
        level_order(tree->right, level + 1);
    }
}

void solve(){
    res.clear();
    res.resize(10005);
    int n; cin>>n;

    int root = -1, dad, child; char pos;
    map<int, Node*> mp;

    Node *tree = constructor_tree(n);

    level_order(tree, 1);

    for(int i = 1; i < res.size(); i++){
        for(int val: res[i]) 
            cout<<val<<" ";
    }
        
    cout<<endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int a; cin>>a;
    while(a--) solve();
    return 0;
}