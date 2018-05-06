package main

func dynamicArray(n int32, queries [][]int32) []int32 {
	/*
	 * Write your code here.
	 */
	var seq [][]int32
	var ans []int32
	var lastAns int32
	var idx, idx2 int32

	for i := int32(0); i < n; i++ {
		seq = append(seq, []int32{})
	}

	for _, q := range queries {
		idx = (q[1] ^ lastAns) % n
		//fmt.Println(idx)
		if q[0] == 1 {
			seq[idx] = append(seq[idx], q[2])
		} else if q[0] == 2 {
			idx2 = q[2] % int32(len(seq[idx]))
			lastAns = seq[idx][idx2]
			ans = append(ans, lastAns)
		}
	}

	return ans
}
