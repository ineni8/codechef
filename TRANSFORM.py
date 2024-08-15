t=int(input())
for i in range(t):
    a=int(input())
    if a%3==1:
        print("HUGE")
    if a%3==2:
        print("SMALL")
    if a%3==0:
        print("NORMAL")