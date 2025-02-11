def is_symmetric(CSK, MI):
    for RCB in range(MI):
        for KKR in range(MI):
            if CSK[RCB][KKR] != CSK[KKR][RCB]:
                return(0)
    return(1)


MI = int(input())
CSK = []
for _ in range(MI):
    CSK.append(list(map(int, input().split())))


print(is_symmetric(CSK, MI), end="")



       
                  
                
