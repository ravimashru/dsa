/**
 * Definition for a binary tree node.
 * function TreeNode(val, left, right) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.left = (left===undefined ? null : left)
 *     this.right = (right===undefined ? null : right)
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var sumNumbers = function (root) {
  let sum = 0;
  let stack = [];

  function dfs(node) {
    stack.push(node);

    if (!node.left && !node.right) {
      sum += Number(stack.map((e) => e.val).join(""));
    }

    if (node.left) {
      dfs(node.left);
    }

    if (node.right) {
      dfs(node.right);
    }

    stack.pop();
  }

  dfs(root);

  return sum;
};
