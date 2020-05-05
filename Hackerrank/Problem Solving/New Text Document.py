def appendAndDelete(s, t, k):
    length = -1
    for i in range(min(len(s), len(t))):
        if s[i]==t[i]:
            length += 1
        else:
            break
    
    if length!=0:
        rem_s = len(s)-length-1
        rem_t = len(t)-length-1
    else:
        rem_s = len(s)-length
        rem_t = len(t)-length

    min_opr = rem_s + rem_t
    if min_opr<=k:
        if len(s)<len(t) and k%rem_t!=0:
            return "No"
        else:
            return "Yes"
    else:
        return "No"

s = input()

t = input()

k = int(input())
appendAndDelete(s, t, k)