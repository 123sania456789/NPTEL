#
def merge_dicts(d1, d2):
	merged_dict=dict1.copy() # Create a copy of the first diction
	for key, value in dict2.items():
		if key in merged_dict:
			merged_dict[key] += value # Add values for common keys

		else:
			merged_dict[key] = value # Add new keys and values
	return merged_dict
def parse_input(input_string):
    input_string = input_string.strip('{}').strip()
    parsed_dict = {}
    if input_string:
        items = input_string.split(',')
        for item in items:
            key, value = item.split(':')
            key = key.strip().strip("'").strip('"') 
            value = int(value.strip())  
            parsed_dict[key] = value    
    return parsed_dict

if __name__ == "__main__":
    dict1_input = input()
    dict2_input = input()

    dict1 = parse_input(dict1_input)
    dict2 = parse_input(dict2_input)

    merged_dict = merge_dicts(dict1, dict2)
    print("Merged Dictionary:", merged_dict)
