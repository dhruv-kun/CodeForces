# cook your dish here
import math
m,n = map(int, input().split())

area = m*n
dominoes = math.floor(area/2)
print(dominoes)