
lst = ['Orange', 'Yellow', 'Green', 'Brown', 'White']

file = open("/home/abdullah/Scripts/output.txt",'x')

file.write("\n".join(lst))

file.close()

