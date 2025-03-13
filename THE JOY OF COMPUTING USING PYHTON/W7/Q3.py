def rotate_matrix(matrix, m, n):
    rotated_matrix = [[0 for _ in range(m)] for _ in range(n)]
    for i in range(m):
        for j in range(n):
            rotated_matrix[j][m - 1 - i] = matrix[i][j]
    return rotated_matrix
m, n = map(int, input().split())
matrix = []
for _ in range(m):
  row = list(map(int, input().split()))
  matrix.append(row)
rotated_matrix = rotate_matrix(matrix, m, n)
for row in rotated_matrix:
  print(*row)
