package leetcode

import (
	"testing"
)

func Test_stringContain(t *testing.T){

	//ss := []string{"mass","as","hero","superhero"}
	//a := stringMatching(ss)
	//fmt.Printf("%d %v \n", len(a), a)
	//
	////str, str2 := "ello", "bellow"
	////fmt.Println(stringContain(str2, str))
}

func Test_lengthOfLongestSubstring(t *testing.T) {
	testdata := []struct {
		s string
		exp int
	}{
		{"abcabcbb",3 },
		{"bbbbbb",1 },
		{"pwwkew",3 },
		{" ",1 },
	}

	for _, td := range testdata {
		got := lengthOfLongestSubstring(td.s)
		if got != td.exp {
			t.Errorf("%s : %d = %d", td.s, got, td.exp)
		}
	}
	//fmt.Println(lengthOfLongestSubstring(s) == expected)
}