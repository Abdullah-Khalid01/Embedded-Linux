# Key Value to look for 
Key = 4
# List to search in
ls = [1,2,3,4,5,6,9,8,4,3,2,1,4]
# Variable to store the number of occurances for the key value
counts = 0
#loop to compare the key with each element
for i in ls:
    if ls[i]==Key:
        counts+=1
# print the result
print(f"The value {Key} exists {counts} times")        

# Another Solution usint .count()
# This line replaced the whole for loop block
counts = ls.count(Key)

print(f"The value {Key} exists {counts} times") 