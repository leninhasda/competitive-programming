def count(arr):
  if len(arr) == 1:
    return 1
  return 1 + count(arr[1:])
  
  
def test_count():
  test_cases = [
    {
      "in": [1,2,3,4,5,6,7],
      "out": 7
    }
  ]
  for tc in test_cases:
    c = count(tc["in"])
    if tc["out"] != c:
      print("{} != {}".format(tc["out"], c))
      
test_count()