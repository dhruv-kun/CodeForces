#code
n = input()

count_lucky_digits = 0
for i in range(len(n)):
    if(n[i]=='4' or n[i]=='7'):
        count_lucky_digits += 1
if(count_lucky_digits==4 or count_lucky_digits==7):
    print("YES")
else:
    print("NO")