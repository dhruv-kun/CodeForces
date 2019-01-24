#code

def gcd(a,b):
    if(b==0):
        return a
    return gcd(b,a%b)    

def lcm2(a,b):
    return (a*b)//gcd(a,b)
    
def lcm3(a,b,c):
    return lcm2(a, (lcm2(b,c)))
    
def lcm4(a,b,c,d):
    return lcm2(a, lcm2(b, lcm2(c,d)))

k = int(input())
l = int(input())
m = int(input())
n = int(input())
d = int(input())

ans = d//k + d//l + d//m + d//n - d//(lcm2(k,l)) - d//lcm2(k,m) - d//lcm2(k,n) - d//lcm2(l,m) - d//lcm2(l,n) - d//lcm2(m,n) + d//lcm3(k,l,m) + d//lcm3(k,l,n) + d//lcm3(k,m,n) + d//lcm3(l,m,n) - d//lcm4(k,l,m,n)
print(ans)