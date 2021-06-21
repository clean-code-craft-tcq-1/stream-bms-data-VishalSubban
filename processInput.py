import receiver_calculation
import sys

def getSenderInput():
  temp = []
  soc = []
  for i in sys.stdin:
    list_temp,list_soc = formatInputStream(i)
    temp.extend(list_temp)
    soc.extend(list_soc)
    if len(temp) >= 5 and len(soc) >=5:
       receiver_calculation.calculateAvg(temp,soc)

def formatInputStream(input_data):
  input_vals = input_data.split(';')
  list_temp = input_vals[0]
  list_soc = input_vals[1]
  return list_temp,list_soc
    
getSenderInput()
