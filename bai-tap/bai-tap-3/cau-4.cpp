#include <iostream>
using namespace std;

struct NODE {
    int data;
    NODE *left, *right;
};

void insert(NODE *&root, int v) {
    if (root == nullptr) {
        root = new NODE;
        root->data = v;
        root->left = nullptr;
        root->right = nullptr;
    } else {
        if (v <= root->data) {
            insert(root->left, v);
        } else {
            insert(root->right, v);
        }
    }
}

void inorder(NODE *root) {
    if (root != nullptr) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void preorder(NODE *root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(NODE *root) {
    if (root != nullptr) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

NODE* max(NODE *root) {
    if (root == nullptr) {
        return nullptr;
    } else if (root->right != nullptr) {
        return max(root->right);
    } else {
        return root;
    }
}

int main() {
    NODE *root = nullptr;
    // init(&bst);
    insert(root, 2);
    insert(root, 1);
    insert(root, 3);
    insert(root, 5);
    insert(root, 8);
    insert(root, 4);
    // cout << root->data;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);
    cout << endl;
    
    cout << "Max node: " << max(root)->data << endl;

    return 0;
}