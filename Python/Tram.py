#code
n = int(input())

minimum_capacity = -1000000000 
passengers = 0
for i in range(n):
    a,b = map(int, input().split())
    passengers += b-a
    minimum_capacity = max(passengers,minimum_capacity)
print(minimum_capacity)    