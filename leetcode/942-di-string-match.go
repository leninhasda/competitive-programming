package leetcode 

func diStringMatch(S string) []int {
  i, k, d := 0, 0, len(S)
  
  ret := make([]int, len(S)+1) 
  for _, r := range S {
    if r == 'I' {
      ret[k] = i
      i++
    } else if r == 'D' {
      ret[k] = d
      d--
    }
    k++
  }
  ret[k] = i
  
  return ret 
}
