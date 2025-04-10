def frequencySort(s):
    freqe = {}
    for char in s:
        if char in freqe:
            freqe[char] += 1
        else:
            freqe[char] = 1
    sorted_items = sorted(freqe.items(), key=lambda x: (-x[1], x[0]))
    result = [char for char, count in sorted_items]
    return(result)
