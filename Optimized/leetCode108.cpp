/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

// 4 - 3 = 1/2 -> 0
class Solution {
public:
    TreeNode* traverse(vector<int>& nums, int start, int end){
        int size = end - start;
        if (size < 0){
            return NULL;
        }
        if (size == 0){
            TreeNode* root = new TreeNode(nums[start]);
            return root;
        }
        if(size % 2 == 1)
            size++;
        int middle = start + size/2;
        TreeNode* root = new TreeNode(nums[middle]);
        root->left = traverse(nums, start, middle - 1);
        root->right = traverse(nums, middle + 1, end);
        return root;
    }
    
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return traverse(nums, 0, nums.size() -1);
    }
};
