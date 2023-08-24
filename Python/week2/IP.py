import requests

#Read json from this URL which contains info about the device IP, location, ISP,...
ip = requests.get("https://api.ipify.org/?format=json")

#Rerive the IP address
ip = ip.json()["ip"]

#Send the IP to get the location of the device
location = requests.get(f"https://ipinfo.io/{ip}/geo")


print(location.json())
