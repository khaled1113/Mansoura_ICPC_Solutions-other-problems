# Read the symbol S
S = input()

# Read the number N
N = int(input())

# Read N numbers
numbers = list(map(int, input().split()))

# Iterate through the numbers and print the symbol S repeated Xi times
for Xi in numbers:
    print(S * Xi)
