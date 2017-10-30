import serial
import socket
import os

ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
latitude = ''
longitude = ''
print "begin"
def readgps():
    """Read the GPG LINE using the NMEA standard"""
    while True:
        line = ser.readline()
        if "GNGGA" in line:
            latitude = line[17:27] #Yes it is positional info for lattitude
            longitude = line[30:41] #do it again
            return("00 FF FF 00 04 04 22 06 00 02 00 01")
            #return(latitude+" "+longitude+"\n")
    print "Finished"



#print  readgps()
while 1:
    #ser1 = serial.Serial('/dev/ttyUSB2', 57600)  # open serial port
   # print(ser1.name)         # check which port was really used
    #print(readgps())
    os.system('java net.tinyos.toolSend 00 FF FF 00 00 04 22 06 00 02 00 01')
    #ser1.write(readgps())     # write a string
    #ser1.close()             # close port
