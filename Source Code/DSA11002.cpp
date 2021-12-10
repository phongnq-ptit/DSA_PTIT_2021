#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

ll to_number(string s){
    int i, num = 0;
    if(s[0] == '-') i = 1;
    else i = 0;
    for(;i < s.length(); i++) num = num*10 + (s[i] - '0');

    if(s[0] == '-') return -num;
    else return num;
}

struct Node{
    string data;
    Node *left;
    Node *right;
    Node(string data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

Node* construct_tree(vector<string> s){
    queue<Node*> que;
    Node *tree, *temp, *tmp1, *tmp2;

    int index = 0;
    tree = new Node(s[index++]);
    que.push(tree);
    while(!que.empty()){
        temp = que.front(); que.pop();
        if(temp->data == "+" || temp->data == "-" || temp->data == "*" || temp->data == "/"){
            tmp1 = new Node(s[index++]);
            tmp2 = new Node(s[index++]);

            temp->left = tmp1;
            temp->right = tmp2;

            que.push(tmp1);
            que.push(tmp2);
        }
    }

    return tree;
}

ll value_expressions(Node* tree){
    if(tree == NULL) return 0;

    if(tree->left == NULL && tree->right == NULL)
        return to_number(tree->data);
    
    ll left_value = value_expressions(tree->left);
    ll right_value = value_expressions(tree->right);

    if(tree->data == "+") return left_value + right_value;
    if(tree->data == "-") return left_value - right_value;
    if(tree->data == "*") return left_value * right_value;
    return left_value / right_value;
}

void solve(){
    ll n; cin>>n; cin.ignore();
    string s, token; getline(cin, s);
    stringstream ss(s);
    vector<string> tmp;
    while(ss>>token) tmp.push_back(token);

    Node *tree = construct_tree(tmp);

    cout<<value_expressions(tree)<<endl;
}

int main(){
    ll a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}


