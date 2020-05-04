package leetcode

func canConstruct(ransomNote string, magazine string) bool {
	freqRan := make(map[rune]int)
	freqMag := make(map[rune]int)

	for _, r := range ransomNote {
		freqRan[r]++
	}
	for _, r := range magazine {
		if _, ok := freqRan[r]; ok {
			freqMag[r]++
		}
	}

	if len(freqMag) < len(freqRan) {
		return false
	}

	for _, r := range ransomNote {
		if freqMag[r] < freqRan[r] {
			return false
		}
	}

	return true
}
