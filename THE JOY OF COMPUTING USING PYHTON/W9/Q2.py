def threesquares(m):
  if(m<0):
    return(False)
  l=[]
  for i in range(0, int(m**0.5)+1):
    l+=[i*i]
  for i in l:
    for j in l:
      for k in l:
        if(i+j+k==m):
          return (True)
  return(False)
