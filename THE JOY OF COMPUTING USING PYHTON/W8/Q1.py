input_list = eval(input())
result = []
for tup in input_list:
  new_tuple = tuple(item for item in tup if not isinstance(item, str))
  result.append(new_tuple)
print(result, end='')
