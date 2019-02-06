func grayCode(n int) []int {
  ln := 1 << uint(n)
  ret := make([]int, ln)
  for i:=0; i<ln; i++ {
    ret[i]  = i^(i>>1)
  }
  return ret 
}
