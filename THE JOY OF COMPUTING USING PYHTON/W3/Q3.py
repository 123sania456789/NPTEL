def process_list(nums):
    reversed_nums = nums[::-1]  
    result = [nums[g] + reversed_nums[g] if g % 2 == 0 else nums[g] for g in range(len(nums))]
    return result


input_list = [int(z) for z in input().split()]


output_list = process_list(input_list)


print(" ".join(map(str, output_list)),end="")

