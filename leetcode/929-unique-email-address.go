package leetcode 

import "strings"

func numUniqueEmails(emails []string) int {
  mp := make(map[string]struct{})
  for _, e := range emails {
    es := strings.Split(e, "@")
    es[0] = strings.Split(strings.Replace(es[0],".", "", -1), "+")[0]
    mp[strings.Join(es, "@")] = struct{}{}
  }

  return len(mp)
}
