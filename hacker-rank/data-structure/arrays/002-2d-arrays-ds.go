package main

func array2D(arr [][]int32) int32 {
	/*
	 * Write your code here.
	 */
	var i, j int
	var k, n int
	var sum, max int32
	max = -999999 // one of the gotca's
	for i = 0; i <= 3; i++ {
		for j = 0; j <= 3; j++ {
			sum = 0
			for k = i; k < i+3; k++ {
				for n = j; n < j+3; n++ {
					sum = sum + arr[k][n]
				}
			}
			sum = (sum - arr[i+1][j] - arr[i+1][j+2])
			if sum > max {
				max = sum
			}
		}
	}

	return max
}
