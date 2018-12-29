#code
matrix = []
for i in range(5):
    matrix.append(list(map(int, input().split())))

for i in range(5):
    for j in range(5):
        if(matrix[i][j]==1):
            row = i
            coloumn = j
            break
        
print(abs(row-2)+abs(coloumn-2))