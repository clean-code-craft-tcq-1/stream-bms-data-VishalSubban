import unittest
import receiver_calculate
class ReceiverTest(unittest.TestCase):
     
    def testMinTemp(self):
        self.assertTrue(receiver_calculate.calculateMin({'temperature':[20,19,1,15,18,90,60,80,70,50]},'temperature') == 1)
        
    def testMaxTemp(self):
        self.assertTrue(receiver_calculate.calculateMax({'temperature':[20,19,10,15,18,96,60,80,70,50]},'temperature') == 96)  
        
    def testMinSOC(self):
        self.assertTrue(receiver_calculate.calculateMin({'soc':[70,40,25,9,90,98,88,77,66,55]},'soc') == 9)
        self.assertTrue(receiver_calculate.calculateMin({'temperature':[20,19,10,15,18,96,60,80,70,50],'soc':[70,40,25,9,90,98,88,77,66,55]},'temperature')==10)  
    
    def testMaxSOC(self):
        self.assertTrue(receiver_calculate.calculateMax({'soc':[70,40,20,99,90,98,88,77,66,55]},'soc') == 99)
        
    def testNone(self):
        self.assertTrue(receiver_calculate.averageLastFive([])=='Length of the list is Zero')
    
    def testAvgTempSOC(self):
        self.assertTrue(receiver_calculate.averageLastFive([93,90,94,57,63,69,70,51,85,96]) == 74.2)
        
if __name__ == 
