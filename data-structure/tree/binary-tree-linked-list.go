package tree

import "fmt"

type node struct {
	data  int
	left  *node
	right *node
}

func inOrderPrint(root *node) {
	if root == nil {
		return
	}

	inOrderPrint(root.left)
	fmt.Printf("%d ", root.data)
	inOrderPrint(root.right)
}

func preOrderPrint(root *node) {
	if root == nil {
		return
	}

	fmt.Printf("%d ", root.data)
	preOrderPrint(root.left)
	preOrderPrint(root.right)
}
func postOrderPrint(root *node) {
	if root == nil {
		return
	}

	postOrderPrint(root.left)
	postOrderPrint(root.right)
	fmt.Printf("%d ", root.data)
}

func insertBST(root *node, data int) *node {
	if root == nil {
		root = new(node)
		root.data = data
		return root
	}

	if root.data > data {
		root.left = insertBST(root.left, data)
	} else {
		root.right = insertBST(root.right, data)
	}

	return root
}

func isBST(root *node) bool {
	if root == nil {
		return true
	}

	if root.left != nil && root.data <= root.left.data {
		return false
	}

	if root.right != nil && root.data >= root.right.data {
		return false
	}

	return isBST(root.left) && isBST(root.right)
}

func RunBSTExample() {
	var root *node
	root = insertBST(root, 20)
	insertBST(root, 10)
	insertBST(root, 50)
	insertBST(root, 70)
	insertBST(root, 80)

	fmt.Printf("in: ")
	inOrderPrint(root)
	println()

	fmt.Printf("pre: ")
	preOrderPrint(root)
	println()

	fmt.Printf("post: ")
	postOrderPrint(root)
	println()

	println(isBST(root))
}

// RunTreeExample ...
func RunTreeExample() {
	root := new(node)
	root.data = 20

	root.left = new(node)
	root.left.data = 40

	root.right = new(node)
	root.right.data = 50

	fmt.Printf("%#v\n", root)

	fmt.Printf("in: ")
	inOrderPrint(root)
	println()
	fmt.Printf("pre: ")
	preOrderPrint(root)
	println()
	fmt.Printf("post: ")
	postOrderPrint(root)
	println()
	println(isBST(root))
}
