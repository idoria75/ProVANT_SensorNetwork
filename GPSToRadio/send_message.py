import serial
import socket
import os
import time

#ser = serial.Serial('/dev/ttyUSB0', 115200, timeout=1)
#latitude = ''
#longitude = ''
#print "begin"

def readgps():
    """Read the GPG LINE using the NMEA standard"""
    strcmd = 'java net.tinyos.tools.Send '
    radiocmd = '00 FF FF 00 04 14 22 06 00 03 '
    #time.sleep(.5)
    print("Sent")
    return(strcmd+radiocmd)            

counter = 0
while (counter < 1260):
    print(counter)
    counter = counter+1
    #counter_hex = hex(counter)
    os.system(readgps())
 