import socket
import threading

IP = '0.0.0.0'
PORT = 9998

def main():
    # Crear un socket para el servidor
    server = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

    # Enlazar el socket al IP y puerto especificados
    server.bind((IP, PORT))

    # Escuchar conexiones entrantes, con una cola de hasta 5 conexiones
    server.listen(5)

    print(f'[*] Listening on {IP}:{PORT}')

    while True:
        # Aceptar una conexión entrante y obtener el socket del cliente y la dirección del cliente
        client, address = server.accept()

        print(f'[*] Accepted connection from {address[0]}:{address[1]}')

        # Iniciar un hilo para manejar al cliente
        client_handler = threading.Thread(target=handle_client, args=(client,))
        client_handler.start()

def handle_client(client_socket):
    # Manejar los datos recibidos del cliente
    with client_socket as sock:
        request = sock.recv(1024)
        print(f'[*] Received: {request.decode("utf-8")}')

        # Enviar una respuesta de vuelta al cliente
        sock.send(b'ACK')

if __name__ == '__main__':
    main()
