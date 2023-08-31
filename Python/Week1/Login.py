User= { "Ahmed" : 1394,
        "Ali"   : 6078,
        "Amr"   : 9345
      }

Username = input("Please Enter your Name: ")

if (Username in User.keys()):
    Pass = int(input("Please enter your password: "))
    if(Pass == User[Username]):
        print(f"Succedded! Welcome Mr.{Username}")
    else:
        print("Failed")
else:
        print("Failed")
