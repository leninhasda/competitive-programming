package main

import "fmt"

func main() {
	//Enter your code here. Read input from STDIN. Print output to STDOUT
	var T int
	fmt.Scanf("%d", &T)
	A := []int32{}
	var a int32
	for i := 0; i < T; i++ {
		fmt.Scanf("%d", &a)
		A = append(A, a)
	}
	for i := len(A) - 1; i >= 0; i-- {
		fmt.Printf("%d ", A[i])
	}
	fmt.Println("")
}
