package leetcode 

func numJewelsInStones(J string, S string) int {
  mp := make(map[rune]struct{}) 
  for _, e := range J {
    mp[e] = struct{}{}
  }
  var cnt int
  for _, e := range S {
    if _, ok := mp[e]; ok {
      cnt++
    }
  }
  return cnt
}
