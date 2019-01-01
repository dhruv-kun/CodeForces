#code
n = int(input())
arr = list(map(int, input().split()))

arr.sort(reverse = True)
sum1 = 0
for i in range(len(arr)):
    sum1 += arr[i]
sum2 = 0
minimum_coins = 1
for i in range(len(arr)):
    sum2 += arr[i]
    sum1 = sum1-arr[i]
    if(sum2>sum1):
        print(minimum_coins)
        exit()
    else:
        minimum_coins += 1