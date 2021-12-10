#include<bits/stdc++.h>

using namespace std;

struct Node{
    char data;
    Node *left;
    Node *right;
    Node(char data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void inorder_LNR(Node* tree){
    if(tree != NULL){
        inorder_LNR(tree->left);
        cout<<tree->data;
        inorder_LNR(tree->right);
    }
}

Node* construct_tree(string s){
    stack<Node*> st;
    Node *temp, *tmp1, *tmp2;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%'){
            temp = new Node(s[i]);
            
            tmp1 = st.top(); st.pop();
            tmp2 = st.top(); st.pop();

            temp->right = tmp1;
            temp->left = tmp2;

            st.push(temp);
        } else{
            temp = new Node(s[i]);
            st.push(temp);
        }
    }

    temp = st.top();
    return temp;
}

void solve(){
    string s; cin>>s;

    Node* tree = construct_tree(s);

    inorder_LNR(tree);
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}