#!/usr/bin/python3
import datetime

#This Script Creates Header file or Source file for a specific software module based on user choices.
#The use should enter the Type and the software module name, then script will do the rest.
#date time is used to include the date and time for which this header is created.

#Select the file type
FileType = input("Enter the type of the file (c or h): ")

#Check agianst user selection
if FileType == 'h':
    
    print("\"Pay attention for the file extension\"")
    
    #Enter file name including the extension
    filename = input("Please Enter File Name: ")
        
    header = open(f"{filename}",'x')

    header.write(f'''/***********************************************************************************
 *Author     :Abdullah Khalid Abdullah
 *Module Name:{filename[0:len(filename)-2:1]}
 *Version    :
 *Date       :{datetime.date.today()}\n ***********************************************************************************/
#ifndef _{(filename[0:len(filename)-2:1]).upper()}_H\n#define _{(filename[0:len(filename)-2:1]).upper()}_H\n\n\n\n\n\n\n\n\n#endif''')

    header.close()
    
    #If the choice is (c) which represents source file
elif (FileType == 'c'):

    print("\"Pay attention for the file extension\"")
    S
    filename = input("Please Enter File Name: ")

    header = open(f"{filename}",'x')

    header.write(f'''/***********************************************************************************
 *Author     :Abdullah Khalid Abdullah
 *Module Name:{filename[0:len(filename)-2:1]}
 *Version    :
 *Date       :{datetime.date.today()}\n ***********************************************************************************/
    \nint main()\n{{\n\n\n\n\n}}''')

    header.close()
else:
    print("Wrong Option!!")
