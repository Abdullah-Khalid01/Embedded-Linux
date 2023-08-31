from socket import *

#########################################################-- Without Threading --############################################################################ 

soc1= socket(AF_INET , SOCK_STREAM) #IPv4 , TCP

ip = gethostbyname(gethostname())

print('your ip is: ',ip)
print("===============================================")
soc1.bind((ip , 5000))
soc1.listen(5) #2 It specifies the number of unaccepted connections that the system will allow before refusing new connections
print("I will accept")

while 1:
    client,address = soc1.accept()
    print("I will receive")

    rodata = client.recv(1024) #1024 is the number of maximum bytes

    print(f"{address} is sending this message to you: {rodata.decode('UTF-8')}")
    print('===================================================')

    #msg = input("Please enter the message that you want to send: ")

    data=rodata.decode("UTF-8")
    if data == 'hi1':
        client.send("Received1".encode("UTF-8"))
    elif data == 'hi2':
         client.send("Received2".encode("UTF-8"))

    client.close()

###################################################################### -- Using Threading -- ######################################################################

# from socket import *
# import threading

# def handle_client(client_socket,address):
#     print(f"New connection from {address[0]}:{address[1]}")
#     while 1:
#         try:
#             data=client_socket.recv(1024)
#             if not data:
#                 break
#             print(f'data received ={data.decode("UTF-8")}')
#             data=data.decode("UTF-8")
#             if data == 'hi1':
#                 client_socket.send("Received1".encode("UTF-8"))
#             elif data == 'hi2':
#                  client_socket.send("Received2".encode("UTF-8"))
#         except ConnectionResetError:
#             break
    
#     client_socket.close()
#     print(f"Connection closed with {address[0]}:{address[1]}")
    


# soc = socket(AF_INET,SOCK_STREAM)

# soc.bind(('127.0.1.1' , 5000))

# soc.listen(5)
# print(f"Server listening on 127.0.1.1:5000")
# while 1:

#     client_socket , address = soc.accept()

#     client_thread = threading.Thread(target=handle_client, args=(client_socket , address))

#     client_thread.start()
