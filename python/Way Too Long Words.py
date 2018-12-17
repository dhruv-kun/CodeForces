# cook your dish here
n = int(input())
for i in range(n):
    w = input()
    if(len(w) <= 10):
        print(w)
    else:
        print(w[0],len(w)-2,w[len(w)-1],sep="")