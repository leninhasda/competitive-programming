func dominantIndex(nums []int) int {
  if len(nums) == 0 {
    return -1 
  }
  l1, l2, li := -1, -1, 0 
  for i, n := range nums {
    if n > l1 {
      l2 = l1
      l1 = n 
      li = i 
    } else if n > l2 {
      l2 = n 
    }
  }
  
  if l1 < l2 * 2 {
    li = -1
  }
  return li 
}
