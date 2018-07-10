package leetcode

// ListNode Definition for singly-linked list.
type ListNode struct {
	Val  int
	Next *ListNode
}

func reverseList(head *ListNode) *ListNode {
	var prev, tmp *ListNode
	for head != nil {
		tmp = head.Next
		head.Next = prev
		prev = head
		head = tmp
	}
	return prev
}
