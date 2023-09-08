def fizzBuzz(n):
    result = []
    for i in range(1, n + 1):
        if i % 3 == 0 and i % 5 == 0:
            result.append("FizzBuzz")
        elif i % 3 == 0:
            result.append("Fizz")
        elif i % 5 == 0:
            result.append("Buzz")
        else:
            result.append(str(i))
    return result

# Get user input for n
n = int(input("input a number to fizzbuzz!: "))
output = fizzBuzz(n)

# Print the FizzBuzz results
for buzzout in output:
    print(buzzout)


