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

def readgps(counter):
    """Read the GPG LINE using the NMEA standard"""
    #counter = 0
    while True:
        line = ser.readline()
        if "GNGGA" in line:
            #Pega valor latitude
            latitude = line[17:26] #Yes it is positional info for lattitude
            #Pega valor completo da latitude
            latitude_full = line[17:27]
            #Pega valor longitude
            longitude = line[30:39] #do it again
            #Pega valor completo longitude            
            longitude_full = line[30:41]
            #Valor latitude sem ponto
            latitude_test = line[17:21] + line[22:27]
            #Longitude sem ponto
            longitude_test = line[30:35] + line[36:41]

            strcmd = 'java net.tinyos.tools.Send '
            radiocmd = '00 FF FF 00 04 18 22 06 00 02 '
            #print(latitude_full)
            #print(latitude_test)
            #print(longitude_full)
            #print(longitude_test)
            #print int(latitude_test)
            latitude_hex = hex(int(latitude_test))
            longitude_hex = hex(int(longitude_test))
            #print('Hex conversion of latitude', latitude_hex)
            latitude_hex_s_2 = latitude_hex[2:4] + ' ' + latitude_hex[4:6] + ' ' + latitude_hex[6:8] + ' ' + latitude_hex[8:10]
            #print('Hex conversion of longitude', longitude_hex)
            longitude_hex_s_2 = longitude_hex[2:4] + ' ' + longitude_hex[4:6] + ' ' + longitude_hex[6:8] + ' ' + longitude_hex[8:10]
            #print('Hex to int conversion of latitude_hex', int(latitude_hex,16))
            #print(latitude_test)
            #print(longitude_test)
            timestamp = (datetime.datetime.now().time().isoformat()[0:8])
            #print(timestamp)
            timestamp_cmd = timestamp[0:2] + ' ' + timestamp[3:5] + ' ' + timestamp[6:8]
            #print(timestamp[0:2] + ' ' + timestamp[3:5] + ' ' + timestamp[6:8])
            #timestamp_hex = hex(timestamp)
            #timestamp_hex_s = str(timestamp_hex[2:])
            #print(hex(get_sec(datetime.datetime.now().time().isoformat()[0:8])))
            #print('string: ',timestamp_hex_s)
            #print(len(timestamp_hex_s))
            #while(len(timestamp_hex_s))

            #TO-DO: FAZER SWITCH CASE P COMPLETAR COM 0 ATE HEX DO TIMESTAMP FICAR COM LEN = 6


            #print()

            #print(get_sec())

            # print(latitude_hex_s)
            # print(longitude_hex_s)
            #lat2 = bytearray(latitude)
            #long2 = bytearray(longitude)
            #print(type(lat2))
            #latitude_hex_s = " ".join("{:02x}".format(ord(c)) for c in latitude)
            #latitude_hex_s_2 = " ".join("{:02x}".format(ord(c)) for c in latitude_hex)
            #longitude_hex_s = " ".join("{:02x}".format(ord(c)) for c in longitude)

            #print(latitude_hex_s)
            #print(latitude_hex_s_2)
            #print(longitude_hex_s)
            #gps = (latitude_hex_s+' '+longitude_hex_s)
            #gps = (latitude_hex_s)
            #print(type(latitude))
            #print(strcmd+latitude+' '+longitude)
            #print(radiocmd + latitude_hex_s + ' ' + longitude_hex_s)
            
            #return(strcmd+radiocmd+gps)
            print(latitude_hex[2:4] + ' ' + latitude_hex[4:6] + ' ' + latitude_hex[6:8] + ' ' + latitude_hex[8:10] + ' | ' 
                + longitude_hex[2:4] + ' ' + longitude_hex[4:6] + ' ' + longitude_hex[6:8] + ' ' + longitude_hex[8:10] + ' | '
                + timestamp_cmd)
            
            print(radiocmd+latitude_hex_s_2+' '+longitude_hex_s_2 + ' ' + timestamp_cmd) 
            return(strcmd+radiocmd+latitude_hex_s_2+' '+longitude_hex_s_2 + ' ' + timestamp_cmd)            

            #return(strcmd+latitude+' '+longitude)
            #return(latitude+" "+longitude+"\n")
    print "Finished"



#print  readgps()
counter = 0
while (counter < 5):
    counter = counter+1
    counter_hex = hex(counter)
    #ser1 = serial.Serial('/dev/ttyUSB2', 57600)  # open serial port
   # print(ser1.name)         # check which port was really used
    #print(readgps())
    os.system(readgps(counter_hex))
    #ser1.write(readgps())     # write a string
    #ser1.close()             # close port
    

# import serial
# import socket
# import os

# ser = serial.Serial('/dev/ttyUSB0', 9600, timeout=1)
# latitude = ''
# longitude = ''
# print "begin"
# def readgps():
#     """Read the GPG LINE using the NMEA standard"""
#     while True:
#         line = ser.readline()
#         if "GNGGA" in line:
#             latitude = line[17:27] #Yes it is positional info for lattitude
#             longitude = line[30:41] #do it again
#             return("00 FF FF 00 04 04 22 06 00 02 00 01")
#             #return(latitude+" "+longitude+"\n")
#     print "Finished"



# #print  readgps()
# a = 0
# while (a < 5):
#     a = a+1
#     #ser1 = serial.Serial('/dev/ttyUSB2', 57600)  # open serial port
#    # print(ser1.name)         # check which port was really used
#     #print(readgps())
#     os.system('java net.tinyos.tools.Send 00 FF FF 00 00 04 22 06 00 02 00 01')
#     #ser1.write(readgps())     # write a string
#     #ser1.close()             # close port
#     
