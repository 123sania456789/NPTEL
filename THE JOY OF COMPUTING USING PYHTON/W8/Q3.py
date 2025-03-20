def multiply_adjacent_elements(tuple_):
  result = []
  for i in range(len(tuple_) - 1):
    result.append(tuple_[i] * tuple_[i + 1])
  return tuple(result)
input_tuple = eval(input())
output_tuple = multiply_adjacent_elements(input_tuple)
print(output_tuple, end='')
