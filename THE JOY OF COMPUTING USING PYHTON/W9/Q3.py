def hillvalley(l):
  if len(l)<4:
    return False
  if((l[1]-l[0])>0):
    v=1
  else:
    v=-1
  p=0
  for i in range(len(l)-1):
    if((l[i+1]-l[i])>0):
      d=1
    else:
      d=-1
    if (d!=v):
      p+=1
      v=d
  if(p==1):
    return (True)
  else:
    return(False)
