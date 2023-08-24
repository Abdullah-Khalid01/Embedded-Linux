import requests

#Read json from this URL which gives different activity for each visit
request=  requests.get("https://www.boredapi.com/api/activity")

#Print the activity
print(request.json()['activity'])

