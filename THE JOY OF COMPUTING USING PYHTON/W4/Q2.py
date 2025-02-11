
def transpose_add_scalar(matrix, r, c, scalar):
    ans_matrix = [[matrix[j][i] + scalar for j in range(r)] for i in range(c)]
    return ans_matrix

trows = int(input())
tcols = int(input())
tmatrix = [list(map(int, input().split())) for _ in range(trows)]
scalar_value = int(input())

ans_matrix = transpose_add_scalar(tmatrix, trows, tcols, scalar_value)

for r in ans_matrix:
    print(" ".join(map(str, r)))


                  
                
