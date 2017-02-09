def solve(s):
    for i in s[0::2]:
        print(i, end='')

    print(' ', end='')

    for i in s[1::2]:
        print(i, end='')

    print('')

N = int(input().strip())
for x in range(0, N):
    s = input().strip()
    solve(s)