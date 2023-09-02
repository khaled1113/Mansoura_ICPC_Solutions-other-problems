# Read input
m, n = map(int, input().split())
 
# Calculate the maximum number of dominoes
max_dominoes = (m * n) // 2
 
# Output the result
print(max_dominoes)