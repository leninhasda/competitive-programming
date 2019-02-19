func plusOne(digits []int) []int {
  car, ad := 0, 1
  for i:=len(digits)-1; i >= 0; i-- {
    digits[i] += ad + car
    ad, car = 0, 0
    if digits[i] >= 10 {
      digits[i], car = digits[i] %10, digits[i] / 10
    }
  }
  if car > 0 {
    digits = append([]int{car}, digits...)
  }
  return digits
}
