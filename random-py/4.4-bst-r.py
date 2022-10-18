def bst(arr, item, low, high):
  if low == high:
    if item == arr[low]:
      return low
    return None 
  
  mid = int((low+high) / 2)
  if item == arr[mid]:
    return mid
  elif item > arr[mid]:
    return bst(arr, item, mid+1, high)
  return bst(arr, item, low, mid-1)
  
def test_bst():
  test_cases = [
    {
      "in": [1,2,3,4,5,6,7],
      "item": 4,
      "out": 3 
    }, 
    {
      "in": [1,2,3,4,5,6,7],
      "item": 3,
      "out": 2 
    },
    {
      "in": [1,2,3,4,5,6,7],
      "item": 7,
      "out": 6 
    }
  ]
  for tc in test_cases:
    idx = bst(tc["in"], tc["item"], 0, len(tc["in"])-1)
    if tc["out"] != idx:
      print("{} != {}".format(tc["out"], idx))
      
      
test_bst()