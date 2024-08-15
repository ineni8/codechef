# cook your dish here
a=int(input())
for i in range(a):
    b=int(input())
    s=1
    for j in range(1,b+1,1):
        s*=j
    print(s)