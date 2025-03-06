def delete_elements(lst, item):
    if not lst:
        return []
    if lst[0] == item:
        return delete_elements(lst[1:], item)
    else:
        return [lst[0]] + delete_elements(lst[1:], item)
lst = list(map(int, input().split(' ')))
item = int(input())
new_lst = delete_elements(lst, item)
print(*new_lst, end='')
