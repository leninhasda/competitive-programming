var mem = make(map[int]int)
func fib(N int) int {
  if N == 0 || N == 1 {
    return N
  }
  if a, ok := mem[N]; ok {
    return a
  }
  mem[N] = fib(N-1) + fib(N-2)
  return mem[N] 
}

// func fib(N int) int {
//  if N == 0 || N == 1 {
//    return N
//  }
//  return fib(N-1) + fib(N-2)
// }
