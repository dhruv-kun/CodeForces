#code
n1 = input()
n2 = input()

ans = ''
for i in range(len(n1)):
    if(n1[i]==n2[i]):
        ans+='0'
    else:
        ans+='1'
print(ans)        