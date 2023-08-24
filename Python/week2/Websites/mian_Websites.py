import Websites

#Variable to get the user choice (open another website or terminate the script)
state = 'c'

#Get all keys stored in the dict created in my module (Keys represents websites names)
web=list(Websites.Websites_dict.keys())

#As long as the user didn't enter 'q' keep asking him to choose website to be opened
while state!='q':
    
    #Get the user choice (website required to be opened)
    x = int(input(f"1-{web[0]}\n2-{web[1]}\n3-{web[2]}\nChoose website to be opened: "))
    
    #Validate the selected website
    if x == 1 or x == 2 or x == 3:
    
        #use the predefined in the module created by me (websites.py) to open the required website
        Websites.Take_URL(Websites.Websites_dict[web[x-1]])
    else:
        print("Wrong Option!!")    
    state = input("Do you want to open another website? (q for exit or any other char for cont.)\nChoice: ")
