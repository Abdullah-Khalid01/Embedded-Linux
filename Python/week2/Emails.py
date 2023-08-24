import pyautogui
import time
import webbrowser

#Open your inbox
webbrowser.open('https://mail.google.com/mail/u/0/?hl=ar#inbox')

#Wait 4s for the email to be opened 
time.sleep(4)

#Click on the position of (Select all) check box
pyautogui.click(1541,236)

#Wait 2s to load
time.sleep(2)

#Click on the position of (Mark as read) check box
pyautogui.click(1267,231)



