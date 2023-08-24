bits = []

#Ask the user to enter the required PORT
port = input("1-A\n2-B\n3-C\n4-D\nEnter Required PORT: ")

#Check that choosed PORT is correct
if port == 'A' or port == 'B' or port == 'C' or port == 'D':

#Open the file to write the DIO Initialization
    file = open("/home/abdullah/Scripts/init.c",'w')
    i = 0
    
    #loop through the 8 Bits to define the mode of each one
    while i <= 7:
        mode = (input(f"Please Enter Bit {i} mode: "))
        
        #Check that selected mode is appropriate
        if mode== 'in':
            bits.append('0')
            i+=1
        elif mode == 'out':
            bits.append('1')
            i+=1
        else:
            print("Wrong mode!!")
            
    #Reverse the list.	
    bits = bits[::-1]
    
    #Write the inint function based on the predefined user inputs.
    file.write(f'void Init_PORT{port}_DIR(void)\n{{\nDDR{port} =0b{"".join(bits)}; \n}}')
else:
    print('wrong port!!')
