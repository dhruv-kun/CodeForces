# cook your dish here
n = int(input())

count = 0
i = 0
while i<n:
    l = list(map(int, input().split()))
    a = 0
    for j in range(len(l)):
        if l[j] == 1:
            a+=1
    if a >= 2:
        count+=1
        
    i+=1    

print(count)        