import socket

# Definir el host y puerto objetivo
target_host = "www.google.com"
target_port = 80

# Crear un objeto de socket
client = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

# Conectar al servidor
client.connect((target_host, target_port))

# Enviar algunos datos (solicitud HTTP GET)
request = b"GET / HTTP/1.1\r\nHost: google.com\r\n\r\n"
client.send(request)

# Recibir algunos datos (respuesta del servidor)
response = client.recv(4096)

# Imprimir la respuesta decodificada
print(response.decode())

# Cerrar la conexión
client.close()