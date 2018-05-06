package main

func findSuffix(collections []string, queryString string) int32 {
	/*
	 * Write your code here.
	 */

	var cnt int32
	for i := 0; i < len(collections); i++ {
		if queryString == collections[i] {
			cnt++
		}
	}

	return cnt
}
