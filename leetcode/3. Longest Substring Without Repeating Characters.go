package leetcode

// more optimize can be done on map
// instead of map if we know the charset
// we can even use int array as well


// optimized 2
func lengthOfLongestSubstring(s string) int {
	var ans, i, k int
	mp := make(map[uint8]int)

	max := func(a,b int) int {
		if a > b {
			return a
		}
		return b
	}

	for k =0; k < len(s) ; k++ {
		if v, ok := mp[s[k]]; ok {
			i = max(i, v)
		}

		mp[s[k]] = k+1
		ans = max(ans, k-i+1)
	}

	return  ans
}


// optimized
func o_lengthOfLongestSubstring(s string) int {
	var ans, i, k int
	mp := make(map[uint8]struct{})

	for i < len(s) && k < len(s) {
		if _, ok := mp[s[k]]; !ok {
			mp[s[k]]= struct{}{}
			k++

			// update ans
			if len(mp) > ans {
				ans = len(mp)
			}

			continue
		}

		delete(mp, s[i])
		i++
	}

	return  ans
}

// Naive approach (aka bangla)
func n_lengthOfLongestSubstring(s string) int {
	var n int
	for i:=0; i < len(s); i++ {
		mp := make(map[uint8]struct{})
		mp[s[i]] = struct{}{}
		for k:=i+1; k < len(s); k++ {
			if _, ok := mp[s[k]]; ok {
				break
			}
			mp[s[k]]= struct{}{}
		}
		if len(mp) > n {
			n = len(mp)
		}
	}

	return n
}