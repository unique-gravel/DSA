#include <iostream>
#include<queue>
using namespace std;

class node {
    public:
        int data;
        node* left;
        node* right;
    
    node(int d) {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildNode(node* root) {
    int data;
    cout << "Enter data: " << endl;
    cin >> data;
    root = new node(data);

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for the left of " << data << endl;
    root->left = buildNode(root->left);
    cout << "Enter data for the right of " << data << endl;
    root->right = buildNode(root->right);
    return root;
}

void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {   
        node* temp = q.front();
        q.pop();

        if (temp == NULL) 
        {
            cout << endl;
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            
            cout << temp->data << " ";
            

            if(temp->left) {
                q.push(temp->left);
            }
            if(temp->right) {
                q.push(temp->right);
            }
        }
        
    }
    
}

void inorder(node* root) { //LNR
    if(root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);

}

void preorder(node* root) { //NLR
    if(root == NULL) {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(node* root) { //LRN
    if(root == NULL) {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";

}

int main()
{
    node* root = NULL;
    root = buildNode(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

    cout << "Level order traversal: \n";
    levelOrderTraversal(root);

    cout << "Inorder Traversal: ";
    inorder(root);
    cout << "\n";

    cout << "Preorder Traversal: ";
    preorder(root);
    cout << "\n";

    cout << "Postorder Traversal: ";
    postorder(root);
    cout << "\n";
    
    return 0;
}