package leetcode 

func minDeletionSize(A []string) int {
	var d int
	for c, _ := range A[0] {
		for i := 1; i < len(A); i++ {
			if A[i][c] < A[i-1][c] {
				d++
				break
			}
		}
	}
	return d
}
