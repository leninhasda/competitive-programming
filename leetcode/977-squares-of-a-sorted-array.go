func sortedSquares(A []int) []int {
  ans := make([]int, len(A))
  for i, el := range A {
    ans[i] = el * el
  }
  sort.Ints(ans)
  return ans
}
