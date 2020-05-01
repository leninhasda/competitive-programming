package leetcode 

func pivotIndex(nums []int) int {
  total := 0
  sums := make([]int, len(nums))
  
  for i, n := range nums {
    total += n
    sums[i] = total
  }
  
  for i, n := range nums {
    prev := 0 
    if i-1 >=0 {
      prev = sums[i-1]
    }
    if (total-n) == (prev*2) {
      return i
    }
  }
  
  return -1
}
