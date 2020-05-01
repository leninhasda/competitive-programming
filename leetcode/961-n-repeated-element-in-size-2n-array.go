package leetcode 

func repeatedNTimes(A []int) int {
  mp := make(map[int]struct{}) 
  for _, i := range A {
    if _, ok := mp[i]; ok {
      return i
    }
    mp[i] = struct{}{}
  }
  
  return A[0]
}
