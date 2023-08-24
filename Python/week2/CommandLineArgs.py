import sys

#Read the number of arguments passed
n = len(sys.argv)

print(f"Number of Arguments Passed = {n}")

#The argument number 0 is the file name, so I used this to print the name of the file
print(f"Name of the file is: {sys.argv[0]}")

#Print all the passed arguments (without the file name)
print("Arguments Passed are: ", end = ' ')

for i in range(1,n):
    print(sys.argv[i],end = ' ')

# Calculate summation of all args passed excluding the last argument because it's suppose to be thu user name.

sum =0
for i in range(1,n-1):
    sum = sum + int(sys.argv[i])

print(f"\n\nSum = {sum}")

#Print finalizing message that thanks the user for using this app (last argument is the name of the user).
print(f"Thank You Mr.{sys.argv[n-1]}")
