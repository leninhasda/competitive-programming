def sum(arr):
  if len(arr) == 1:
    return arr[0]
  return arr[0] + sum(arr[1:])
  
  
def test_sum():
  test_cases = [
    {
      "in": [2,4,6],
      "out": 12
    }
  ]
  
  for tc in test_cases:
    s = sum(tc["in"])
    if tc["out"] != s:
      print("{} != {}".format(tc["out"], s))

test_sum()