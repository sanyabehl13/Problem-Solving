class Solution(object):
    def isAnagram(self, s, t):
        li=list(s)
        li2=list(t)
        li.sort()
        li2.sort()
        if (li==li2):
            return True
        else:
            return False