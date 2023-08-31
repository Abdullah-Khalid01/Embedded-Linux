from socket import *

import time


while 1:

    client = socket(AF_INET , SOCK_STREAM)

    ip = gethostbyname(gethostname())

    print("your IP is: ",ip)
    print('=====================================')


    client.connect((ip,5000))


    msg = "hi2"

    msg_encode= msg.encode('UTF-8')
    client.send(msg_encode)

    rodata = client.recv(1024) #1024 is the number of maximum bytes
    print(f"{ip} is sending this message to you: {rodata.decode('UTF-8')}")
    client.close()
    time.sleep(1)
