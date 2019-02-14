func calPoints(ops []string) int {
  stack := make([]int, len(ops)+2)
  si, sum := 0, 0
  
 for _, s := range ops {
   if s == "C" {
     sum -= stack[si] 
     si--
   } else if s == "D" {
     stack[si+1] = stack[si] * 2
     si++
     sum += stack[si]
   } else if s == "+" {
     stack[si+1] = stack[si] + stack[si-1]
     si++
     sum += stack[si]
   } else {
     si++
     sm, _ := strconv.Atoi(s)
     stack[si] = sm
     sum += stack[si]
   }
  }
  
  return sum
}
