import "strings"
func uniqueMorseRepresentations(words []string) int {
  ms := []string{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."}
  
  mp := make(map[string]struct{})
  var st string
  for _, w := range words {
    w = strings.ToLower(w)
    st = ""
    for _, s := range w {
      st += ms[s-97]
    }
    mp[st] = struct{}{}
  }
  return len(mp)
}
