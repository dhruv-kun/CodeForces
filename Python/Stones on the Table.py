#code
number_of_stones = int(input())
s = input()

key = s[0]
count = 0
i = 1
while(i<number_of_stones):
    if(s[i]==key):
        count+=1
    else:
        key = s[i]
    i+=1

print(count)    