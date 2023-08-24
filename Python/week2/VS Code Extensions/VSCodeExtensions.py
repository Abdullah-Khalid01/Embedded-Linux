import pyautogui as py
import time


# Function used to fascilitate Configuring the process for any changes required.
def SearchForExtension(key, delay,x_pos,y_pos):

    #Go to Seach bar in extensions tab
    py.click(165,151)

    #Drag the cursor through the search bar to overwrite the previous text if exist.
    py.dragTo(357,151)

    #Write the new Keyword to search for
    py.write(key)

    #Wait for sometimes to finsih searching
    time.sleep(delay)

    #Click on the install icon
    py.click(x_pos,y_pos)

    #Wait for 1s to avoid overlapping
    time.sleep(1)

#Search for VS Code Icon
VS_coordinates = py.locateCenterOnScreen('/home/abdullah/Scripts/VS Code Extensions/VS.png')

#If the privuos Icon doesn't exis, then search for another one.
if(VS_coordinates == None):
    VS_coordinates = py.locateCenterOnScreen('/home/abdullah/Scripts/VS Code Extensions/VS_Opened.png')

#Click on the found Icon
py.click(VS_coordinates[0],VS_coordinates[1])

#Wait for VS Code to open
time.sleep(9)

# Use this shortcut to open extensions tab
py.hotkey('ctrl', 'shift', 'X')

# Use the pre-defined function to search for each extensions and install it.
SearchForExtension('Clangd'       , 4 , 393 , 246)

SearchForExtension('c++ testmate' , 4 , 393 , 246)

SearchForExtension('c++ helper'   , 4 , 393 , 246)

SearchForExtension('cmake'        , 4 , 393 , 246)

SearchForExtension('cmake tools'  , 4 , 393 , 246)

#print Succeded to inform that process has been done.
print('Succedded')

