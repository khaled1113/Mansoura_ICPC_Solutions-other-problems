t = int(input())
 
for _ in range(t):
    a, b, c, d = map(int, input().split())
    
    participants_in_front = 0
    
    if b > a:
        participants_in_front += 1
    if c > a:
        participants_in_front += 1
    if d > a:
        participants_in_front += 1
        
    print(participants_in_front)