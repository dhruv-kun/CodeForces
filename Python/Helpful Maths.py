# cook your dish here
s = input()

l = []
i = 0
while i<len(s):
    l.append(s[i])
    i+=2

l.sort()
for i in range(len(l)-1):
    print(l[i],'+',sep='',end='')
print(l[len(l)-1])    