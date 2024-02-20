import socket

# Definir el host y puerto objetivo
target_host = "127.0.0.1"
target_port = 9997

# Crear un objeto de socket para UDP
client = socket.socket(socket.AF_INET, socket.SOCK_DGRAM)

# Enviar algunos datos al servidor
client.sendto(b"AAABBBCCC", (target_host, target_port))

# Recibir algunos datos del servidor
data, addr = client.recvfrom(4096)

# Imprimir los datos recibidos después de decodificarlos
print(data.decode())

# Cerrar la conexión (en UDP, no hay una conexión real que cerrar, pero es una buena práctica cerrar el socket)
client.close()
