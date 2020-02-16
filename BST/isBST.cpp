#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class TreeNode {
    public :
        int data;
        struct TreeNode* left;
        struct TreeNode* right;
    
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
};
bool smallerOrNot(TreeNode* root, int rootVal) {
    if(root == NULL)    return true;

    return (rootVal >= root->data) && smallerOrNot(root->left, rootVal) && smallerOrNot(root->right, rootVal); 
}
bool greaterOrNot(TreeNode* root, int rootVal) {
    if(root == NULL)    return true;

    return (rootVal <= root->data) && greaterOrNot(root->left, rootVal) && greaterOrNot(root->right, rootVal);
}
void isBst(TreeNode* root) {
    if(root) {
        isBst(root->left);
        isBst(root->right);
        
        if(smallerOrNot(root->left, root->data)) {cout << "\nleft bst is valid of  : " << root->data;}
        else cout << "\nleft bst is in-valid of  : " << root->data;
        
        if(greaterOrNot(root->right, root->data)) {cout << "\nright bst is valid of : " << root->data;} 
        else cout << "\nright bst is in-valid of  : " << root->data;
    }
}
int main() {
    struct TreeNode* root = NULL;

    // Given example is not a BST...
    //Output : False
    root = new TreeNode(5);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(3);
    root->right->right = new TreeNode(6);
    root->right->right->right = new TreeNode(9);

    isBst(root);
    return 0;
}