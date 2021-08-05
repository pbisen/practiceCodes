import requests
import json
import datetime

def getContests():
  response = requests.get("https://codeforces.com/api/contest.list?gym=false")
  json_data = json.loads(response.text)
  contestData = json_data['result']
  finalData = []
  for contests in contestData:
      if contests['phase'] == "BEFORE":
          finalData.append("Name: " +contests['name'] + "\t" + "Time Left: " +str(datetime.timedelta(seconds = (int(contests['relativeTimeSeconds']) * -1))))
    
  return finalData
   


contestData = getContests()

for i in range(len(contestData)):
    print(contestData[i])