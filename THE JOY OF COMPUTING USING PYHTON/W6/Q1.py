L = input().strip(' ').split(' ')
k = int(input())
L = [int(num) for num in L]
if k > len(L):
  print("The clue k should be smaller than or equal to the list size", end='')
else:
  sorted_arr = sorted(L)
  print(sorted_arr[k - 1], end='')
