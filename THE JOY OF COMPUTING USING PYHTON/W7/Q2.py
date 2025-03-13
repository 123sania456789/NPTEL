def find_median(matrix, n, m):
    elements = []
    for row in matrix:
        elements.extend(row)
    elements.sort()
    total_elements = n * m
    median_index = total_elements // 2
    return elements[median_index]
n, m = map(int, input().split())
matrix = []
for _ in range(n):
  row = list(map(int, input().split()))
  matrix.append(row)
median = find_median(matrix, n, m)
print(median, end='')
