#code
s = input()
t = input()

if(len(s)!=len(t)):
    print("NO")
else:
    for i in range(len(s)):
        if(s[i]!=t[len(s)-i-1]):
            print("NO")
            exit()
    print("YES")            