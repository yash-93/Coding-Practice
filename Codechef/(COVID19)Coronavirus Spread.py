T = int(input())
for i in range(T):
    N = int(input())
    X = input().split()
    for i in range(N):
        X[i] = int(X[i])

    diff = []
    
    for i in range(N-1):
        diff.append(X[i+1] - X[i])
    
    infected = []
    count = 1
    for i in range(len(diff)):
        if diff[i]<=2:
            count += 1
            if i==len(diff)-1:
                infected.append(count)
        else:
            infected.append(count)
            count = 1
            if i==len(diff)-1:
                infected.append(count)
    
    print(f"{min(infected)} {max(infected)}")