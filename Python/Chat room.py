#code
s = input()

if(len(s)<5):
    print("NO")
else:
    word = 'hello'
    j = 0
    i = 0
    while(i<len(s) and j<len(word)):
        if(s[i]==word[j]):
            i+=1
            j+=1
        else:
            i+=1
    if(j<5):
        print("NO")
    else:
        print("YES")