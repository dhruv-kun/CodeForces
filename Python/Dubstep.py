#code
remix = input()
remix+="WUB"
i=0
l = []
while(i<len(remix)-2):
    if(remix[i]=="W" and remix[i+1]=="U" and remix[i+2]=="B"):
        i+=3
    else:
        j=i
        temp = ""
        while(remix[j]!="W" or remix[j+1]!="U" or remix[j+2]!="B"):
            temp += remix[j]
            j+=1
        l.append(temp)
        i = j
for i in range(len(l)):
    print(l[i],end=" ")