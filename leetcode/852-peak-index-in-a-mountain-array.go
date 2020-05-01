package leetcode 

func peakIndexInMountainArray(A []int) int {
  var p, pi int
  for i, el := range A {
    if el > p {
      p=el
      pi=i
    } 
  }
  return pi
}
