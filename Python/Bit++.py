# cook your dish here
n = int(input())

x = 0
i = 0
while i<n:
    statement = input()
    if(statement[1]=='-'):
        x-=1
    else:
        x+=1
    i+=1

print(x)    