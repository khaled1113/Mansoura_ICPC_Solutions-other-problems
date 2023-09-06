n=int(input())
k=input()

#if if the elment of k is digit or upper or lower case
for i in range(n):
    if k[i].isupper():
        print("is upper")
    elif k[i].islower():
        print("is lower")
    elif k[i].isdigit():
        print("is digit")
