#code
n = int(input())
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

arr = []
for i in range(1,len(arr1)):
    arr.append(arr1[i])
for i in range(1,len(arr2)):
    arr.append(arr2[i])
for i in range(1,n+1):
    if i not in arr:
        print('Oh, my keyboard!')
        exit()
        
print('I become the guy.')        