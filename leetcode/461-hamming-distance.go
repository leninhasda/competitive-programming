package leetcode 

import "strconv"
func hammingDistance(x int, y int) int {
	xs := strconv.FormatInt(int64(x), 2)
	ys := strconv.FormatInt(int64(y), 2)

	if len(xs) > len(ys) {
		xs, ys = ys, xs
	}

	ldif := len(ys) - len(xs)
	bt := make([]byte, ldif)
	for i := 0; i < ldif; i++ {
		bt[i] = '0'
	}
	xs = string(bt) + xs
	var cnt int
	println(xs, ys)
	for i := range xs {
		if xs[i] != ys[i] {
			cnt++
		}
	}
	return cnt
}
