#code
n = int(input())
arr = list(map(int, input().split()))

dic = {}
for i in range(n):
    dic[arr[i]] = i+1
for i in range(n):
    print(dic[i+1],end=' ')