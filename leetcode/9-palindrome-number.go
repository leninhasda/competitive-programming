package leetcode 

func isPalindrome(x int) bool {
  
  if x < 0 {
    return false
  }
  
  var i int
  var xs []int
  for {
    i, x = x % 10, x / 10 
    xs = append(xs, i)
    if x == 0 {
      break
    }
  }
  
  ln := len(xs)
  for i=0; i < ln/2; i++ {
    if xs[i] != xs[ln-i-1] {
      return false
    }
  }
  
  return true
}
