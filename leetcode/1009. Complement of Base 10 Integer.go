package leetcode

func bitwiseComplement(N int) int {
	return findComplement(N)
}
func findComplement(num int) int {
	// 5 =      0101
	// 1<<3     1000
	// 1<<3-1   0111
	// ^
	var cnt uint
	tmp := num
	for tmp > 0 {
		tmp = tmp >> 1
		cnt++
	}

	return num ^ ((1 << cnt) - 1)
}
