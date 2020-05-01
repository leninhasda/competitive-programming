package leetcode 
const  INT_MIN = -1<<31
const  INT_MAX =  1<<31-1

func reverse(x int) int {
  if  x < INT_MIN || x > INT_MAX {
    return 0
  }    

  signed := x < 0
  if signed {
    x = -x
  }
  
  var ans, m int
  for {
    m, x = x % 10, x / 10
    ans = ans * 10 + m
    if x == 0 {
      if signed {
        ans = -ans
      }
      break
    }
  }
  
  if  ans < INT_MIN || ans > INT_MAX {
    return 0
  }
  return ans 
}
