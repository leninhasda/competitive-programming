package leetcode

func stringMatching(words []string) []string {
	ans := []string{}
	for _, w := range words {
		for _, wc := range words {
			if w != wc && stringContain(wc, w) {
				ans = append(ans, w)
				break
			}
		}
	}

	return ans
}

func stringContain(s, sub string) bool {
	if len(s) < len(sub)  {
		return false
	}

	for i := 0; i <= len(s)-len(sub) ; i++ {
		if sub == s[i:i+len(sub)] {
			return true
		}
	}

	return false
}