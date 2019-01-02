#code
n,t = map(int, input().split())
s = input()

s = list(s)
for i in range(t):
    j = 0
    while(j<n-1):
        if(s[j]=='B' and s[j+1]=='G'):
            s[j],s[j+1] = s[j+1],s[j]
            j = j+1
        j = j+1    
    
for i in range(n):
    print(s[i],end='')