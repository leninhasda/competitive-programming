func reverseStr(s string, k int) string {

	bt := make([]byte, len(s))
	flag := true
	m, mk, c := 1, 0, k

	for i := 0; i < len(s); i++ {
		if flag {
			// reverse
			mk = k*m - 1
			if mk >= len(s) {
				mk = len(s) - 1
			}

			for c != 0 && i < len(s) {
				bt[i] = s[mk]
				i++
				mk--
				c--
			}
			i--
			m += 2
			flag = false

		} else {
			// normal
			bt[i] = s[i]
			c++
			if c == k {
				flag = true
			}
		}
	}

	return string(bt)
}
