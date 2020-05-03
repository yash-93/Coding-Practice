T = int(input())
for i in range(T):
    NQ = input().split()
    N = int(NQ[0])
    Q = int(NQ[1])
    S = input()
    C = []
    for i in range(Q):
        C.append(int(input()))
    
    dic = {'a': 0, 'b':0,'c': 0, 'd':0,'e': 0, 'f':0,'g': 0, 'h':0,'i': 0, 'j':0,'k': 0, 'l':0,'m': 0, 'n':0,'o': 0, 'p':0,'q': 0, 'r':0,'s': 0, 't':0,'u': 0, 'v':0,'w': 0, 'x':0,'y': 0, 'z':0}
    
    for s in S:
        dic[s] += 1
    
    for c in C:
        count = []
        for val in dic.values():
            if val>c:
                count.append(val)
        
        print(sum(count)-(len(count)*c))