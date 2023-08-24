import webbrowser

#Creates dict and store all required websites into it.
Websites_dict = {
    "Facebook" : "facebook.com",
    "Youtube"  : "youtube.com" ,
    "Poe"      : "poe.com"
}

#Function to open the rquired website based on the passed argument (URL).

def Take_URL(url):

    moz = webbrowser.get('firefox')
    moz.open_new(url)
