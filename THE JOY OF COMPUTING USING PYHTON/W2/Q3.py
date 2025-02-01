numbers = input().split(' ')
numbers = [int(num) for num in numbers]
counts = {}
for number in numbers:
  counts[number] = counts.get(number, 0) + 1
max_count = 0
mode = None
for number, count in counts.items():
  if count > max_count:
    max_count = count
    mode = number
print(mode, end='')
