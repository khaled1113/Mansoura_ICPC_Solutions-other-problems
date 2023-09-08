n=int(input())
for i in range(2,n-1):
    if(n%i==0):
        print("no")
        break

if(i==n-1):
    print("YES")
else:
    print("NO")
    