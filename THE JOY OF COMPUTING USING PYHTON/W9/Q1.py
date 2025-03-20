def orangecap(d):
    total={}
    l=[]
    for p in d.values():
        for ply in p.keys():
            if ply not in l:
                l=l+[ply]
    for n in l:
        total[n]=0
        for match in d.keys():
            if n in d[match].keys():
                total[n]=total[n]+d[match][n]
    topscore=0
    for player in total.keys():
            if total[player] > topscore:
                playername=player
                topscore=total[player]
    return (playername,topscore)
