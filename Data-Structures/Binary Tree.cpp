// Most of the credit goes to: https://gist.github.com/toboqus/def6a6915e4abd66e922
// and drawing binary tree method is from: https://stackoverflow.com/questions/36802354/print-binary-tree-in-a-pretty-way-using-c

#include <iostream>
#include <string>

using namespace std;

struct Node {
    string value;
    Node * left;
    Node * right;
};

class Binary_tree {
private:
    Node * root;
    unsigned int size;

    // adding new element to the binary tree
    void insert(string new_value, Node * leaf) {
        if(new_value < leaf->value) {
            if(leaf->left != NULL) {
                insert(new_value, leaf->left);
            } else {
                leaf->left = new Node;
                leaf->left->value = new_value;
                leaf->left->left = NULL;
                leaf->left->right = NULL;
            }
        } else if(new_value >= leaf->value) {
            if(leaf->right != NULL) {
                insert(new_value, leaf->right);
            } else {
                leaf->right = new Node;
                leaf->right->value = new_value;
                leaf->right->right = NULL;
                leaf->right->left = NULL;
            }
        }
    }

    // searching for leaf with given value
    Node * search(string searched_value, Node * leaf) {
        if(leaf != NULL) {
            if(searched_value == leaf->value) {
                return leaf;
            } else {
                if(searched_value < leaf->value) {
                    return search(searched_value, leaf->left);
                } else {
                    return search(searched_value, leaf->right);
                }
            }
        } else {
            return NULL;
        }
    }

    // getting size of the binary tree
    int get_size(Node * leaf) {
        if(leaf->left != NULL) {
            size++;
            get_size(leaf->left);
        } if(leaf->right != NULL) {
            size++;
            get_size(leaf->right);
        }
        return size;
    }

    // deleting binary tree using preorder search
    void delete_tree(Node * leaf) {
        if(leaf != NULL) {
            delete_tree(leaf->left);
            delete_tree(leaf->right);
            delete leaf;
        }
    }

    // printing the binary tree using preorder traversal
    void preorder_traversal(Node * leaf) {
        if(leaf != NULL) {
            cout << leaf->value << ", ";
            preorder_traversal(leaf->left);
            preorder_traversal(leaf->right);
        }
    }

    // printing the binary tree using inorder traversal
    void inorder_traversal(Node * leaf) {
        if(leaf != NULL) {
            inorder_traversal(leaf->left);
            cout << leaf->value << ", ";
            inorder_traversal(leaf->right);
        }
    }

    // printing the binary tree using postorder traversal
    void postorder_traversal(Node * leaf) {
        if(leaf != NULL) {
            postorder_traversal(leaf->right);
            postorder_traversal(leaf->left);
            cout << leaf->value << ", ";
        }
    }

    // drawing the binary tree
    void draw_tree(const string prefix, Node * leaf, bool is_left) {
        if(leaf != NULL) {
            cout << prefix;
            cout << (is_left ? "|--" : "L--" );
            cout << leaf->value << endl;
            draw_tree(prefix + (is_left ? "|   " : "    "), leaf->right, true);
            draw_tree(prefix + (is_left ? "|   " : "    "), leaf->left, false);
        }
    }
public:
    // constructor
    Binary_tree() {
        root = NULL;
        size = 0;
    }

    // destructor
    ~Binary_tree() {
        delete_tree();
    }

    // adding new element to the binary tree
    void insert(string new_value) {
        if(root != NULL) {
            insert(new_value, root);
        } else {
            root = new Node;
            root->value= new_value;
            root->left = NULL;
            root->right = NULL;
        }
    }

    // searching for leaf with given value
    Node * search(string searched_value) {
        return search(searched_value, root);
    }

    // getting size of the binary tree
    // it's + 1 because of the root
    int get_size() {
        unsigned int tree_size = get_size(root) + 1;
        size = 0;
        return tree_size;
    }

    // deleting binary tree using preorder search
    void delete_tree() {
        return delete_tree(root);
    }

    // printing the binary tree using preorder traversal
    void preorder_traversal() {
        preorder_traversal(root);
        cout << endl;
    }

    // printing the binary tree using inorder traversal
    void inorder_traversal() {
        inorder_traversal(root);
        cout << endl;
    }

    // printing the binary tree using postorder traversal
    void postorder_traversal() {
        postorder_traversal(root);
        cout << endl;
    }

    // drawing the tree
    void draw_tree() {
        draw_tree("", root, false);
    }
};

int main() {
    Binary_tree * tree = new Binary_tree();

    // adding elements to the tree
    tree->insert("3");
    tree->insert("5");
    tree->insert("1");
    tree->insert("6");
    tree->insert("2");
    tree->insert("9");
    tree->insert("8");
    tree->insert("7");
    tree->insert("4");

    cout << "Preorder Traversal: " << endl;
    tree->preorder_traversal();
    cout << "Inorder Traversal: " << endl;
    tree->inorder_traversal();
    cout << "Postorder Traversal: " << endl;
    tree->postorder_traversal();
    cout << "Tree size: " << endl;
    cout << tree->get_size() << endl;
    cout << "Drawing binary tree: " << endl;
    tree->draw_tree();
    
    tree->~Binary_tree();

    return 0;
}
