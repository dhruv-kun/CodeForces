import math

n,m,a = map(int, input().split())

number_of_flagstones = math.ceil(n/a)*math.ceil(m/a)
print(number_of_flagstones)