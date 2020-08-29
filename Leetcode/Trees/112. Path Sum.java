/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    private boolean traverse(TreeNode root, int sum){
        if(root.left == null && root.right == null && sum-root.val == 0)
            return true;
        
        if(root.left != null)
            if(traverse(root.left, sum-root.val))
                return true;
        
        if(root.right != null)
            if(traverse(root.right, sum-root.val))
                return true;
        
        return false;
    }
    
    public boolean hasPathSum(TreeNode root, int sum) {
        if(root == null)
            return false;
        if(traverse(root,sum))
            return true;
        else
            return false;
    }
}