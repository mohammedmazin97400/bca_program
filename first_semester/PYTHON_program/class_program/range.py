n = int(input("Enter value of n: "))

even_sum = 0
count = 0
largest_prime = 0
running_total = 0
last_multiple_crossed = 0

for i in range(1, n + 1):
    # Sum of even numbers
    if i % 2 == 0:
        even_sum += i+

    # Count numbers divisible by both 3 and 5
    if i % 3 == 0 and i % 5 == 0:
        count += 1

    # Find largest prime number
    prime = True
    if i < 2:
        prime = False
    for j in range(2, i):
        if i % j == 0:
            prime = False
            break
    if prime:
        largest_prime = i

    # Find perfect squares and calculate their digit sums
    root = int(i ** 0.5)
    if root * root == i:
        digit_sum = 0
        temp = i
        while temp > 0:
            digit_sum += temp % 10
            temp = temp // 10
        print(i, "is a perfect square. Sum of digits =", digit_sum)

    # Running total of ALL numbers, printed every time it crosses a multiple of 100
    running_total += i
    if running_total // 100 > last_multiple_crossed:
        last_multiple_crossed = running_total // 100
        print("Running total crossed", last_multiple_crossed * 100, "-> now", running_total)

print("Sum of all even numbers from 1 to", n, "is:", even_sum)
print("Count of numbers divisible by both 3 and 5 is:", count)
print("Largest prime number is:", largest_prime)