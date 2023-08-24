import pyperclip
import keyboard

txt_lst = []

def append():
    print(txt_lst)


keyboard.add_hotkey('ctrl + shift + d', append)

while 1:
        
    clip = pyperclip.waitForNewPaste()

    txt_lst.append(clip)

#keyboard.add_hotkey('ctrl + shift + s' , append)


keyboard.wait('esc')

    