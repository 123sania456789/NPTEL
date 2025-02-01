L = input().split(' ')
L = [int(num) for num in L]
sum = 0
for x in L:
  sum+=x
print(sum//len(L), end='')
