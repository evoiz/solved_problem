import sys
lo=1
hi=int(1e9)
i=0
while lo<=hi and i<50:
    mid=lo+hi
    mid>>=1
    print("Q "+str(mid))
    sys.stdout.flush()
    ans=str(input())
    if(ans=="<"): hi=mid-1
    elif ans==">" : lo=mid+1
    else : break
    i+=1
#print(i)