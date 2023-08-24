# This code to ignore empty lines
count = 0

file = open("/home/abdullah/Scripts/IP.py",'r')

lines = file.readlines()

for line in lines:
    if(line != '\n'):
        count+=1

print(count)

file.close()

#Another Solution using .strip() method
x=0
file = open("/home/abdullah/Scripts/IP.py",'r')

for line in file:
    #if the line is empty (.strip) will return false and the line will be ignored.
    if line.strip():
        x+=1
print(x)

file.close()

#Simple solution but empty lines are included
file = open("/home/abdullah/Scripts/IP.py",'r')

print(len(file.readlines()))

file.close()
