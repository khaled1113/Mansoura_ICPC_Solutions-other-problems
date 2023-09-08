n=int(input())
for i in range(n):
    num=input()
    #if the sum of the first 3 digits is equal to the sum of the last 3 digits, then it is lucky
    if int(num[0])+int(num[1])+int(num[2])==int(num[3])+int(num[4])+int(num[5]):
        print("YES")
    else:
        print("NO")