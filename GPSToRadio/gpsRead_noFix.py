import serial
import socket
import os
import datetime
import time

ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
latitude = ''
longitude = ''
print "begin"

def get_sec(time_str):
    h, m, s = time_str.split(':')
    return int(h) * 3600 + int(m) * 60 + int(s)

def readgps():
    """Read the GPG LINE using the NMEA standard"""
    while True:
        line = ser.readline()
        if "GNGGA" in line:
            #Pega valor latitude
            #latitude = line[17:26] #Yes it is positional info for lattitude
            #Pega valor completo da latitude
            #latitude_full = line[17:27]
            #Pega valor longitude
            #longitude = line[30:39] #do it again
            #Pega valor completo longitude            
            #longitude_full = line[30:41]
            #Valor latitude sem ponto
            #latitude_test = line[17:21] + line[22:27]
            #Longitude sem ponto
            #longitude_test = line[30:35] + line[36:41]

            strcmd = 'java net.tinyos.tools.Send '
            radiocmd = '00 FF FF 00 04 10 22 06 00 02 '
            #latitude_hex = hex(int(latitude_test))
            #longitude_hex = hex(int(longitude_test))
            #latitude_hex_s_2 = latitude_hex[2:4] + ' ' + latitude_hex[4:6] + ' ' + latitude_hex[6:8] + ' ' + latitude_hex[8:10]
            #longitude_hex_s_2 = longitude_hex[2:4] + ' ' + longitude_hex[4:6] + ' ' + longitude_hex[6:8] + ' ' + longitude_hex[8:10]
            timestamp = (datetime.datetime.now().time().isoformat()[0:8])
            timestamp_cmd = timestamp[0:2] + ' ' + timestamp[3:5] + ' ' + timestamp[6:8]

            #latitude_hex_s = " ".join("{:02x}".format(ord(c)) for c in latitude)

            #print(latitude_hex[2:4] + ' ' + latitude_hex[4:6] + ' ' + latitude_hex[6:8] + ' ' + latitude_hex[8:10] + ' | ' 
            #    + longitude_hex[2:4] + ' ' + longitude_hex[4:6] + ' ' + longitude_hex[6:8] + ' ' + longitude_hex[8:10] + ' | '
            #    + timestamp_cmd)
            
            #print(radiocmd+latitude_hex_s_2+' '+longitude_hex_s_2 + ' ' + timestamp_cmd) 
            latitude_hex_s_2 = '10 4E D3 82'
            longitude_hex_s_2 = '1C CB 96 B6'
            print strcmd+radiocmd+latitude_hex_s_2 +' '+longitude_hex_s_2
            return(strcmd+radiocmd +latitude_hex_s_2 +' '+longitude_hex_s_2 + ' ' + timestamp_cmd)            

    print "Finished"



#print  readgps()
counter = 0
while (counter < 5):
    counter = counter+1
    #counter_hex = hex(counter)
    print(counter)
    os.system(readgps())
 