#code
n = int(input())
number_of_rooms_available = 0

for i in range(n):
    p,q = map(int, input().split())
    if(q-p>=2):
        number_of_rooms_available += 1
print(number_of_rooms_available)        