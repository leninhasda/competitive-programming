func intersection(nums1 []int, nums2 []int) []int {
  
  mp := make(map[int]int) 
  
  for _, i := range nums1 {
    mp[i]=1
  }
  
  var res []int
  for _, i := range nums2 {
    if v, ok := mp[i]; ok {
      if v == 1 {
        res = append(res, i)
      }
      mp[i]++  
    }
  }
 
  
  return res
}
