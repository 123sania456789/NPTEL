def remove_even_duplicates(nums):
    seen = set()
    result = []
    
    for num in nums:
        if num % 2 == 0 and num in seen:
            continue 
        seen.add(num)
        result.append(num)
    
    return result


input_list =[int(i) for i in input().split()]


output_list = remove_even_duplicates(input_list)


print(" ".join(map(str, output_list)),end="") 
