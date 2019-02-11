import "strings"
func findWords(words []string) []string {

  mp := make(map[rune]int)
  for _, b := range "qwertyuiop" {
    mp[b] = 1
  }
  for _, b := range "asdfghjkl" {
    mp[b] = 2
  }
  for _, b := range "zxcvbnm" {
    mp[b] = 3
  }
  
  var row, i int
  var ss string
  
  line := []string{}
  for _, s := range words {
    ss = s
    s = strings.ToLower(s)
    row = mp[rune(s[0])]
    for i =1; i<len(s); i++ {
      if row != mp[rune(s[i])] {
        break
      }
    } 
    if i >= len(s) {
      line = append(line, ss)
    }
  }
 
  return line
}
