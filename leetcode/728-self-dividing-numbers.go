package leetcode 

var mp = make(map[int]struct{})
func selfDividingNumbers(left int, right int) []int {
  ret := []int{}
  for i:=left; i<=right; i++ {
    if _, ok := mp[i]; ok {
      ret = append(ret, i)
    } else if isSelfDiv(i){
      mp[i] = struct{}{}
      ret = append(ret, i)
    }
  } 
  return ret 
}

func isSelfDiv(i int) bool {
  var m int
  tmpI := i
  for true {
    m, i  = i % 10, i / 10 
    
    if m==0 || (tmpI % m) != 0 {
      return false 
    }
    if i == 0 {
      break
    }
  } 
  return true
}
