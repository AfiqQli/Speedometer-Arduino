import serial
import time
import os
s = serial.Serial("COM3",9600)
RunCprogram = "py.exe"
#os.system(RunCprogram)
from subprocess import Popen, PIPE, CalledProcessError

#stdout=PIPE, bufsize=1, 
with Popen(RunCprogram, stdout=PIPE, bufsize=1, universal_newlines=True) as p:

    for i in p.stdout:
                s.write(i.encode())
               # time.sleep(0.020)
                print(i.encode())
                
                
            
        
        

if s.isOpen():
    print("it is still open")
s.close()
if not s.isOpen():
    print("closed")
