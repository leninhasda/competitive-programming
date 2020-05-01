// https://leetcode.com/problems/house-robber/submissions/
package leetcode

func rob(nums []int) int {
  mem := make(map[int]int)
  return max(
    moneyFrom(nums, 0, mem),
    moneyFrom(nums, 1, mem),
  )
}

func moneyFrom(House []int, p int, mem map[int]int) int {
  if p >= len(House) {
    return 0
  }
  
  if v, ok := mem[p]; ok {
    return v
  }
  
  mx := max(
    House[p]+moneyFrom(House, p+2, mem), 
    House[p]+moneyFrom(House, p+3, mem),
  )
  
  mem[p] = mx
  return mx
}

func max(a, b int) int { 
  if a > b {
    return a
  }
  return b
}