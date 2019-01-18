#code
n,m = map(int, input().split())
puzzles = list(map(int,input().split()))
    
puzzles.sort()
min_diff = puzzles[n-1]-puzzles[0]
for i in range(m-n+1):
    diff = puzzles[n-1+i]-puzzles[i]
    if(diff<min_diff):
        min_diff = diff
        
print(min_diff)        