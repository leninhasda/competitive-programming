package main

import "fmt"
import "sort"

func main() {
	//Enter your code here. Read input from STDIN. Print output to STDOUT
	var n int
	fmt.Scanf("%d", &n)
	sl := []int64{}
	var s int64
	for i := 0; i < n; i++ {
		fmt.Scanf("%d", &s)
		sl = append(sl, s)
	}
	sort.Slice(sl, func(i, j int) bool {
		return sl[i] > sl[j]
	})
	nn := sl[0]
	ln := int64(len(sl))
	var cnt int64 = 1
	for i := int64(1); i < ln; i++ {
		if nn == sl[i] {
			cnt++
		} else {
			break
		}

	}
	fmt.Println(cnt)
}
