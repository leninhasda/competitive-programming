def max(arr):
  if len(arr) == 1:
    return arr[0]
  else:
    m = max(arr[1:])
    if m > arr[0]:
      return m
    return arr[0]
  
def test_max():
  test_cases = [
    {
      "in": [1,2,3,4,5,6,7],
      "out": 7
    }, 
    {
      "in": [12, 2,3,4,5],
      "out": 12
    }, 
    {
      "in": [1,5,9,3,4,6],
      "out": 9
    }
  ]
  for tc in test_cases:
    m = max(tc["in"])
    if tc["out"] != m:
      print("{} != {}".format(tc["out"], m))
      
test_max()