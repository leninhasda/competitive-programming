T=int(input())
for a in range(T):
    n=int(input())
    if n == 1:
        print("Not prime")
    else:
        i,f=2,True
        while i*i <= n:
            if n%i == 0:
                f=False
                break
            i+=1
        if f:
            print("Prime")
        else:
            print("Not prime")
