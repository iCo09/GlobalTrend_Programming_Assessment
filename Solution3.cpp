class Solution {
private:
int solve(TreeNode* root, int &maxi){
    if(root == NULL){
        return 0;
    }
    int leftsum = max(0,solve(root -> left, maxi));
    int rightsum = max(0,solve(root -> right, maxi));
    maxi = max(maxi, (leftsum + rightsum + root->val));
    return (root->val)+max(leftsum,rightsum);
}
public:
    int maxPathSum(TreeNode* root) {
        int maxi = INT_MIN;
        solve(root, maxi);
        return maxi;
    }
};