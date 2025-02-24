class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        stack=[]
        for i in range(len(s)):
            if s[i]=='(' or  s[i]=='[' or s[i]=='{':
                stack.append(s[i])
            else:
                if len(stack)>0:
                    top=stack[-1]
                    if top=='(' and s[i]==')':stack.pop()
                    elif top=='[' and s[i]==']':stack.pop()
                    elif top=='{' and s[i]=='}':stack.pop()
                    else:
                        return False

                else:
                    return False

        return len(stack)==0