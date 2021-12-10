#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	Node *left, *right;
	Node(int data){
		this->data = data;
		this->left = this->right = NULL;
	}
};

Node* constructor_tree(int n){
    int dad, child; char pos;
    map<int, Node*> mp;

	Node *root = NULL;

    while(n--){
        cin>>dad>>child>>pos;

        if(mp.find(dad) == mp.end()) {
            Node *tmp = new Node(dad);
            mp[dad] = tmp;
			if(root == NULL) root = tmp;
        }

        Node *node_dad = mp[dad];
        Node *node_child = new Node(child);

        if(pos == 'L') node_dad->left = node_child;
        else node_dad->right = node_child;

        mp[child] = node_child;
    }

    return root;
}

int sum = 0;
void sum_right(Node *tree, char c){
	if(tree != NULL){
		if(tree->left == NULL && tree->right == NULL && c == 'R'){
			sum += tree->data;
			return;
		}
		sum_right(tree->left, 'L');
		sum_right(tree->right, 'R');
	}
}

void solve(){
	sum = 0;
	int n; cin>>n;

	Node *tree = constructor_tree(n);

	sum_right(tree, '\0');

	cout<<sum<<endl;
}

int main(){
	int a; cin>>a;
	while(a--) solve();
	return 0;
}