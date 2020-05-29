package leetcode

import "container/list"

/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func isCousins(root *TreeNode, x int, y int) bool {
	Q := list.New()
	tmp := root

	Q.PushBack(tmp)

	for Q.Len() > 0 {
		f := Q.Front()
		println(f.Value.(*TreeNode).Val)
		Q.PushBack(f.Value.(*TreeNode).Left)
		Q.PushBack(f.Value.(*TreeNode).Right)
		Q.Remove(f)
	}

	return true
}
