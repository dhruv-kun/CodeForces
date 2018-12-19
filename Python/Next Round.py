# cook your dish here
n,k = map(int, input().split())
arr = list(map(int, input().split()))

if arr[k-1] == 0:
    i = k-1
    while arr[i] == 0 and i >= 0:
        i-=1;
    ans = i+1
    
else:
    ans = k
    i = k
    while i < n:
        if arr[i] == arr[k-1]:
            ans += 1
            i+=1
        else:
            break
print(ans)