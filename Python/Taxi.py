#code
n = int(input())
arr = list(map(int, input().split()))

fours = arr.count(4)
threes = arr.count(3)
twos = arr.count(2)
ones = arr.count(1)
number_of_cars = fours + threes + twos//2
twos = twos%2
if(ones>threes):
    ones = ones-threes
else:
    ones = 0
if(twos):
    number_of_cars += 1
    if(ones>2):
        ones -= 2
    else:
        ones = 0
if(ones):
    number_of_cars += ones//4
    if(ones%4!=0):
        number_of_cars += 1
print(number_of_cars)        