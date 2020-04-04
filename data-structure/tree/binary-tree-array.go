package tree

import "fmt"

var arr [100]int
var n int
var size int

func insert(v int) {
	if n == 0 && arr[n] == 0 {
		arr[n] = v
		// n++
		size++
	} else {
		left := 2*n + 1
		if arr[left] == 0 {
			arr[left] = v
			size++
		} else {
			arr[2*n+2] = v
			n++
			size++
		}
	}
	// overflow
}

func print() {
	var i int
	for i < size {
		fmt.Printf("%d ", arr[i])
		i++
	}
	println()
}

// RunExample ...
func RunExample() {
	insert(10)
	insert(20)
	insert(70)
	insert(40)
	insert(50)
	print()
	// fmt.Printf("%#v \n", arr)
}
