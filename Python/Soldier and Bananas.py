#code
k,n,w = map(int, input().split())

total_money = k*((w*(w+1))/2)
if(total_money<n):
    print(0)
else:
    print(int(total_money-n))