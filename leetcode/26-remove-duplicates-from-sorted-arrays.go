package leetcode 

func removeDuplicates(nums []int) int {
  if len(nums) == 0 {
    return 0
  }

  rid:=0
  for i:=1; i<len(nums); i++ {
    if nums[rid] != nums[i] {
      rid++
      nums[rid] = nums[i] 
    }   
  }

  return rid + 1
}

