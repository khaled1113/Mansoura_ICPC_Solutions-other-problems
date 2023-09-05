def is_prime(x):
    if x <= 1:
        return False
    if x <= 3:
        return True
    if x % 2 == 0 or x % 3 == 0:
        return False
    i = 5
    while i * i <= x:
        if x % i == 0 or x % (i + 2) == 0:
            return False
        i += 6
    return True

n = int(input())
if n >= 13:
    if is_prime(13):
        print("YES")
    else:
        for i in range(14, n + 1):
            if i % 13 == 0 and is_prime(i):
                print("YES")
                break
        else:
            print("NO")
else:
    print("NO")
