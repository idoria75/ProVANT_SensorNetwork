import serial
import socket
import os
import time
from datetime import datetime

#ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=1)
#latitude = ''
#longitude = ''
#print "begin"

def readgps():
    """Read the GPG LINE using the NMEA standard"""
    strcmd = 'java net.tinyos.tools.Send '
    radiocmd = '00 FF FF 00 04 14 22 06 00 03 '
    timestamp = datetime.utcnow().strftime('%Y-%m-%d %H:%M:%S.%f')[:-3]
    timestamp_cmd = timestamp[11:13] + ' ' + timestamp[14:16] + ' ' + timestamp[17:19] + ' ' + timestamp[20:22] + ' ' + timestamp[22] + '0  '
    #time.sleep(.2)
    print("Sent")
    return(strcmd+radiocmd+' '+timestamp_cmd + '00 00')            

def blankMessage():
    strcmd = 'java net.tinyos.tools.Send '
    radiocmd = '00 FF FF 00 04 14 22 06 00 03 '
    print("Sent")
    return(strcmd+radiocmd+'FF FF FF FF FF FF FF')    

counter = 0
while(counter < 5):
    print(counter)
    counter = counter+1
    os.system(blankMessage())

counter = 0
while (counter < 30):
    print(counter)
    counter = counter+1
    #counter_hex = hex(counter)
    os.system(readgps())
