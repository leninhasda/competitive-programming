package algorithms

func contacts(queries [][]string) []int32 {
	type trie struct {
		children    [26]*trie
		prefixCount int32
		isLeaf      bool
	}

	insert := func(root *trie, s string) {
		tmp := root
		for _, r := range s {
			idx := r - 'a'
			if tmp.children[idx] == nil {
				tmp.children[idx] = new(trie)
				// tmp.children[idx].prefixCount++
			}
			tmp.prefixCount++
			tmp = tmp.children[idx]
		}
		tmp.isLeaf = true
	}

	search := func(root *trie, s string) int32 {
		if root == nil {
			return 0
		}

		tmp := root
		for _, r := range s {
			idx := r - 'a'
			if tmp.children[idx] == nil {
				return 0
			}
			tmp = tmp.children[idx]
		}

		if tmp.isLeaf {
			return tmp.prefixCount + 1
		}
		return tmp.prefixCount
	}

	// print := func(root *trie) {
	// 	tmp := root
	// 	for tmp != nil {
	// 		for c := 'a'; c <= 'z'; c++ {
	// 			if tmp.children[c] != nil {

	// 			}
	// 		}
	// 	}
	// }

	root := new(trie)
	var ans []int32

	for _, q := range queries {
		if q[0] == "add" {
			insert(root, q[1])
			//   spew.Dump(root)
		} else if q[0] == "find" {
			ans = append(ans, search(root, q[1]))
		}
	}

	return ans
}
