#variable to store the number of words
sum = 0

#Open the file required to count the number of words inside it
file = open("/home/abdullah/Scripts/IP.py",'r')

#Read the file content.
content =file.read()

#Seperate the content into single words using (.split) and count the number of words using (len)
print(len(content.split()))

#Close the file
file.close()


#####################################################################################################################################################


#Another solution
file = open("/home/abdullah/Scripts/IP.py",'r')

#Read the file content as lines
lines = file.readlines()

#loop through each line
for line in lines:
#Chech that line is not empty
    if line.split():
    	#Count the words in that line if it's not empty
        sum+=len(line.split())
#Print the total counts of words
print(sum)        


file.close()
