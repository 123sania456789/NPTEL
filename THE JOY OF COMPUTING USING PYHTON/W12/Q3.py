def subsequence(l1, l2):
    ii = 0  
    ju = 0  
    while ii < len(l1) and ju < len(l2):
        if l1[ii] == l2[ju]:
            ii += 1  
        ju += 1  
    return ii == len(l1)
