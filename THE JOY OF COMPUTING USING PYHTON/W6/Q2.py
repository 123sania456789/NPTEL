def decimal_to_binary(n):
  if n == 0:
    return "0"
  if n == 1:
    return "1"
  else:
    return decimal_to_binary(n // 2) + str(n % 2)
n = int(input())
print(decimal_to_binary(n), end='')
