package leetcode 

func judgeCircle(moves string) bool {
  var is int
  for _, r := range moves {
    switch r {
    case 'U':
      is += 1
    case 'D':
      is -= 1
    case 'L':
      is += 2  
    case 'R':
      is -= 2
    }
  }
  return is == 0
}

