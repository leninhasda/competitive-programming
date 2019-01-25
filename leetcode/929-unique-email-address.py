class Solution:
    def numUniqueEmails(self, emails):
        """
        :type emails: List[str]
        :rtype: int
        """
        
        # remove .
        for i, e in enumerate(emails):
          es = e.split('@')
          es[0] = es[0].replace('.', '').split('+')[0]
          emails[i] = "@".join(es)
                  
        return len(set(emails))
