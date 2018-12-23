# cook your dish here
players = input()

i=0
while i<len(players):
    current_player = players[i]
    j = i+1
    count = 1
    while j<len(players):
        if players[j] == current_player:
            count+=1
            j+=1
        else:
            break
    if count >= 7:
        print("YES")
        exit()
    else:
        i = j
print("NO")        