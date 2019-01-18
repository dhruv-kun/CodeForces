#code
n = int(input())
a = list(map(int, input().split()))

i=0
j=1
length = 1
max_len = 1
while(j<n):
    if(a[j]>=a[j-1]):
        length = j-i+1
        if(length>max_len):
            max_len = length
        j+=1    
    else:
        i=j
        length=1
        j+=1
print(max_len)            