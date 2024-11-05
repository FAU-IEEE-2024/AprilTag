import serial.tools.list_ports

# makes a list of all the com ports on the pc and prints them out
ports = serial.tools.list_ports.comports()
serial_inst = serial.Serial()
ports_list = [str(port) for port in ports]
for port in ports_list:
    print(port)

# use this to find out what port the arduino is hooked up to
# once you run this script and know the port, write the port on line 10 of the main program (objectDetection_with_arduinoLink)