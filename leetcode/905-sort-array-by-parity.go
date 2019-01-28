func sortArrayByParity(A []int) []int {
  ans := make([]int, len(A))
  i, k := 0, len(A) - 1
  for _, el := range A {
    if el % 2 == 0 {
      ans[i] = el
      i++
    } else {
      ans[k] = el
      k--
    } 
  }
  
  return ans
}
