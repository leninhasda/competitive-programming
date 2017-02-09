N = int(input().strip())
weights = [ int(i) for i in input().strip().split() ]

weights.sort()

w1 = 0
cost = 0
for idx, w in enumerate(weights):
    if idx == 0 and True:
        w1 = w
        w4 = w+4
        cost += 1
    
    print("{} => {}".format(idx, w))
    
print(cost)