class Solution {
    //@yush_shah
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p == NULL && q == NULL) // if the two nodes are empty nodes, return true
            return true;
        else if((p == NULL && q != NULL) || (p != NULL && q == NULL)) // if only one of the nodes from p and q is emtpy, 2 trees are not equal
            return false;
        else 
            return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
						// First we compare the values in each node from p and q. Then, use a recursive method, call isSameTree function with left nodes of p and q as parameters. Do the same for the right nodes.
    }
};
