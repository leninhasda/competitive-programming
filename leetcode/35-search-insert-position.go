package leetcode 

func searchInsert(nums []int, target int) int {
  return bSearch(nums, target, 0, len(nums)-1)
}

func bSearch(ns []int, val, left, right int) int {
  if right < left {
    return left
  }
  mid := (left+right)/2
  if ns[mid] == val {
    return mid
  }
  if val < ns[mid] {
    return bSearch(ns, val, left, mid-1)
  } else {
    return bSearch(ns, val, mid+1, right)
  }
}
