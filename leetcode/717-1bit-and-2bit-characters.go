func isOneBitCharacter(bits []int) bool {
  var char bool 
  for i:=0; i<len(bits); i++ {
    if bits[i] == 1 {
      i++
      char = false
    } else {
      char = true
    }
  }
  
  return char 
}
