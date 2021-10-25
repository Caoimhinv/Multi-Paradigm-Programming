
# had to change to make work - out of date code?
n = int(input("enter a number: "))

sum = 0

for i in range(1,n+1):
    sum = sum + i

print("The sum of 1 to %d, was %d" % (n, sum))
