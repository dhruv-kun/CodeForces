#code
n = int(input())

magnet = input()
groups = 1
prev = magnet
for i in range(n-1):
    magnet = input()
    if(magnet != prev):
        groups+=1
        prev = magnet
print(groups)        
    