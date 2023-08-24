#Sheabang
#!/usr/bin/python3

import requests

#Use requests module to read the json file that contains info. about the bitcoin
url = requests.get("https://api.coindesk.com/v1/bpi/currentprice.json")

#Print the rate of the bitcoin in USD
print(url.json()['bpi']["USD"])
