#code
y = input()

def allUnique(t):
    for i in range(4):
        for j in range(i+1,4):
            if(t[i]==t[j]):
                return 0
    return 1 

while(1):
    y = str(int(y)+1)
    if(allUnique(y)):
        print(y)
        break
    else:
        continue;
