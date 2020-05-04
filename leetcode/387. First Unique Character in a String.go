package leetcode

func firstUniqChar(s string) int {
	var freq [26]int

	for _, r := range s {
		freq[int(r-'a')]++
	}

	idx := -1
	for i, r := range s {
		if freq[int(r-'a')] == 1 {
			idx = i
			break
		}
	}

	return idx
}
