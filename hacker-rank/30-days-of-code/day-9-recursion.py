def factorial(N):
    if N == 0:
        return 1
    if N == 1 or N == 2:
        return N
    return N * factorial(N-1)

N = int(input().strip())
facN = factorial(N)
print(facN);