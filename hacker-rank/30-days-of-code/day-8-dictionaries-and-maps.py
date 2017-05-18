n = int(input())
z = {}
for i in range(n):
  name, phone = map(str, input().split())
  z[name] = phone


while True:
  name=str(input())
  if name in z:
    print(name + "=" + z[name])
  else:
    print("Not found")