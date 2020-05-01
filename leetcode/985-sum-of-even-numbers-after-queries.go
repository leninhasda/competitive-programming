package leetcode 

func sumEvenAfterQueries(A []int, queries [][]int) []int {
  ret := make([]int, len(queries))   
  av := 0
  val, I := 0, 0
  for idx, q := range queries{
    av = 0
    val, I = q[0], q[1] 
    for i, v := range A {
      if i == I {
        v += val
        A[i] = v
      }
      if v % 2 == 0 {
        av += v
      }
    } 
    ret[idx] = av 
  }
  return ret
}


