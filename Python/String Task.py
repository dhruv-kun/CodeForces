# cook your dish here
s = input()

s = s.lower()
p = ""
for i in range(len(s)):
    if s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'y':
        continue
    else:
        p += s[i]
        
for i in range(len(p)):
    print(".",p[i],sep='',end='')
