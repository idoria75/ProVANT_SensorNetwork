import serial
import socket
import os, sys
from datetime import datetime
from subprocess import *
import time

ser = None
if(len(sys.argv) > 1):
	print(str(sys.argv[1]))
	ser = serial.Serial(str(sys.argv[1]), 9600, timeout=1)

sensor_number = str(sys.argv[2])

# if(len(sys.argv) > 1):
# 	print(str(sys.argv[2]))
# 	sensor_number = str(sys.argv[2])
print(sensor_number)

# else:
# 	print('No arguments passed')

latitude = ''
longitude  = ''
timestamp = ''
log = open('log.txt','r')
#log = open('log'+sensor_number+'.txt','r')
parsed_log = open('parsed_log.txt', 'r+')
#parsed_log = open('parsed_log'+sensor_number+'.txt', 'r+')

def get_pid(name):
	return check_output(["pidof", name])

def listen():
	#print 'Listen'
	return('java net.tinyos.tools.Listen -comm serial@'+str(sys.argv[1])+':micaz')

def parse(log_file, parsed_file):
	#log_text = log_file.readline()
	#print(log_text)
	for line in log_file:
		print('Input:')
		print(line)
		parsed_line = ''
		
		print('Radio command:')
		radiocmd = line[0:29]
		print(radiocmd)

		print('Latitude:')
		latitude = line[30:32]+line[33:35]+line[36:38]+line[39:41]
		latitude_s = (float(int(latitude,16))/10000000)
		print(latitude)
		
		print('Longitude:')
		longitude = line[42:44]+line[45:47]+line[48:50]+line[51:53]
		print(longitude)
		longitude_s = (float(int(longitude,16))/10000000)

		timestamp = line[54:68]
		print('Timestamp:')
		print(timestamp)
		timestamp_s = line[54:56]+':'+line[57:59]+'.'+line[60:62]+line[63:65]+line[66:68]
		
		print('Output:')
		output_s = str(latitude_s)+','+str(longitude_s)+','+timestamp_s+'\n'
		print(output_s)
		parsed_file.write(output_s)

	
	return


if(ser):
	#call(["java", "net.tinyos.tools.Listen", "-comm", "serial@"+str(sys.argv[1])+":micaz"])
	#call(["python", 'gps_parse.py'])
	Popen('java net.tinyos.tools.Listen -comm serial@'+str(sys.argv[1])+':micaz')
	#os.system(listen())
	print(get_pid("java"))

else:
	print('Please, inform serial port to Listen from (2nd port of micaz). (Ex: python gps_listen.py /dev/ttyUSB2)')
#parse(log,parsed_log)