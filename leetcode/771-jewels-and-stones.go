package leetcode

func numJewelsInStones(J string, S string) int {
	// mp := make(map[rune]struct{})
	// for _, e := range J {
	//   mp[e] = struct{}{}
	// }
	var mask int64

	for _, e := range J {
		idx := uint(e - 'A')
		mask = (1 << idx) ^ mask // set
	}

	var cnt int
	for _, e := range S {
		// if _, ok := mp[e]; ok {
		idx := uint(e - 'A')
		if ((1 << idx) & mask) > 0 {
			cnt++
		}
	}

	return cnt
}
