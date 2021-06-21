def calculateAvg(list_temp,list_soc):
    final_list = {}
    list_temp.sort()
    list_soc.sort()
    final_list['temperature'] = list_temp
    final_list['soc'] =list_soc
    print(final_list)
    Output_to_console(final_list)
    
def calculateMin(data,parameter):
    return min(data[parameter])
def calculateMax(data,parameter):
    return max(data[parameter])

def Output_to_console(input_list):
    print('Max Temperature:', calculateMax(input_list,'temperature'))
    print('Min Temperature:', calculateMin(input_list,'temperature'))
    print('Max SOC:', calculateMax(input_list,'soc'))
    print('Min SOC:', calculateMin(input_list,'soc'))
    print('Average of last five values of temperature', averageLastFive(input_list['temperature']))
    print('Average of last five values of soc', averageLastFive(input_list['soc']))
    
def averageLastFive(input_list):
    sum_of_Vals = 0
    length = len(input_list)
    if length !=0:
        for i in range(-1,-6,-1):
            sum_of_Vals += input_list[i]
        return sum_of_Vals/5
    else:
        return "Length of the list is Zero"
