#
def grantha_sudharaka(manuscripts):
    n = len(manuscripts)
    for i in range(n - 1):
        swapped = False
        for j in range(n - 1 - i):  # Use j instead of i
            if manuscripts[j] > manuscripts[j + 1]:
                manuscripts[j], manuscripts[j + 1] = manuscripts[j + 1], manuscripts[j]
                swapped = True
        print(*manuscripts)  # Print the order after each pass
        if not swapped:
            break  # Stop early if no swaps are made

# Taking input
manuscripts = list(map(int, input().split()))
grantha_sudharaka(manuscripts)
#
