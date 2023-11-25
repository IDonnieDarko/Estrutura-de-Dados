// arvore_binaria.h
typedef struct TreeNode {
    int key;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;

TreeNode* newTreeNode(int item);
void inorder(TreeNode* root);
void preorder(TreeNode* root);
void postorder(TreeNode* root);
TreeNode* insert(TreeNode* node, int key);
TreeNode* minValueNode(TreeNode* node);
TreeNode* deleteNode(TreeNode* root, int key);
TreeNode* search(TreeNode* root, int key);
int minValue(TreeNode* node);
int maxValue(TreeNode* node);
