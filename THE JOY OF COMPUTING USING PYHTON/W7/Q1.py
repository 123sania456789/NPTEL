def is_magic_square(matrix, n):
    magic_constant = n * (n**2 + 1) // 2
    for row in matrix:
        if sum(row) != magic_constant:
            return "Not a Magic Matrix"
    for j in range(n):
        col_sum = 0
        for i in range(n):
            col_sum += matrix[i][j]
        if col_sum != magic_constant:
            return "Not a Magic Matrix"
    diag1_sum = 0
    for i in range(n):
        diag1_sum += matrix[i][i]
    if diag1_sum != magic_constant:
        return "Not a Magic Matrix"
    diag2_sum = 0
    for i in range(n):
        diag2_sum += matrix[i][n - 1 - i]
    if diag2_sum != magic_constant:
        return "Not a Magic Matrix"
    return "Magic Matrix"

n = int(input())
matrix = [list(map(int, input().split())) for _ in range(n)]

print(is_magic_square(matrix, n))
