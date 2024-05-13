## 23 de Abril

Los servicios que se levantan se identifican con el puerto abierto.

- **Puerto 21:** El puerto 21 por norma general se usa para las conexiones a servidores FTP en su canal de control, siempre que no hayamos cambiado el puerto de escucha de nuestro servidor FTP o FTPES.

- **Puerto 22:** Por normal general este puerto se usa para conexiones seguras SSH y SFTP, siempre que no hayamos cambiado el puerto de escucha de nuestro servidor SSH.

- **Puerto 23:** Telnet, sirve para establecer conexión remotamente con otro equipo por la línea de comandos y controlarlo. Es un protocolo no seguro ya que la autenticación y todo el tráfico de datos se envía sin cifrar.

- **Puerto 25:** El puerto 25 es usado por el protocolo SMTP para él envío de correos electrónicos, también el mismo protocolo puede usar los puertos 26 y 2525.

- **Puerto 53:** Es usado por el servicio de DNS, Domain Name System.

- **Puerto 80:** Este puerto es el que se usa para la navegación web de forma no segura HTTP.

- **Puerto 101:** Este puerto es usado por el servicio Hostname y sirve para identificar el nombre de los equipos.

- **Puerto 110:** Este puerto lo usan los gestores de correo electrónico para establecer conexión con el protocolo POP3.

- **Puerto 123:** Es un puerto utilizado por el NTP o Protocolo de tiempo en red, es uno de los protocolos más importantes a nivel de redes, ya que se utiliza para mantener los dispositivos sincronizados en Internet.

- **Puertos 137, 138 y 139:** Estos puertos son utilizados por el Protocolo NetBIOS o NBT.

- **Puerto 143:** El puerto 143 lo usa el protocolo IMAP que es también usado por los gestores de correo electrónico.

- **Puerto 179:** Es el puerto utilizado por el Protocolo de puerta de enlace fronteriza o BGP por sus siglas en inglés, es otro protocolo muy importante a nivel de redes, ya que, en su mayoría, es utilizado por los proveedores de servicio para ayudar a mantener las enormes tablas de enrutamiento que existen hoy en día. También es utilizado para procesar las inmensas cantidades de tráfico en las redes, por lo que es uno de los protocolos más utilizados en las redes públicas.

- **Puerto 194:** Aunque herramientas como aplicaciones de mensajería para teléfonos inteligentes y servicios como Slack y Microsoft Teams han reducido el uso de Internet Relay Chat, IRC sigue siendo popular entre personas de todo el mundo. Por defecto, IRC usa el puerto 194.

- **Puerto 443:** Este puerto es también para la navegación web, pero en este caso usa el protocolo HTTPS que es seguro y utiliza el protocolo TLS por debajo.

- **Puerto 445:** Este puerto es compartido por varios servicios, entre el más importante es el Active Directory.

- **Puerto 587:** Este puerto lo usa el protocolo SMTP SSL y, al igual que el puerto anterior sirve para el envío de correos electrónicos, pero en este caso de forma segura.

- **Puerto 591:** Es usado por Filemaker en alternativa al puerto 80 HTTP.

- **Puerto 853:** Es utilizado por DNS over TLS.

- **Puerto 990:** Si utilizamos FTPS (FTP Implícito) utilizaremos el puerto por defecto 990, aunque se puede cambiar.

- **Puerto 993:** El puerto 993 lo usa el protocolo IMAP SSL que es también usado por los gestores de correo electrónico para establecer la conexión de forma segura.

- **Puerto 995:** Al igual que el anterior puerto, sirve para que los gestores de correo electrónico establezcan conexión segura con el protocolo POP3 SSL.

- **Puerto 1194:** Este puerto está tanto en TCP como en UDP, es utilizado por el popular protocolo OpenVPN para las redes privadas virtuales.

- **Puerto 1723:** Es usado por el protocolo de VPN PPTP.

- **Puerto 1813:** Se utiliza tanto con TCP como con UDP, y sirve para el accounting en un servidor RADIUS.

- **Puerto 2049:** Es utilizado por el protocolo NFS para el intercambio de ficheros en red local o en Internet.

- **Puertos 2082 y 2083:** Es utilizado por el popular CMS cPanel para la gestión de servidores y servicios, dependiendo de si se usa HTTP o HTTPS, se utiliza uno u otro.

- **Puerto 3074:** Lo usa el servicio online de videojuegos de Microsoft Xbox Live.

- **Puerto 3306:** Puerto usado por las bases de datos MySQL.

- **Puerto 3389:** Es el puerto que usa el escritorio remoto de Windows, muy recomendable cambiarlo.

- **Puerto 4662 TCP y 4672 UDP:** Estos puertos los usa el mítico programa eMule, que es un programa para descargar todo tipo de archivos.

- **Puerto 4899:** Este puerto lo usa Radmin, que es un programa para controlar remotamente equipos.

- **Puerto 5000:** Es el puerto de control del popular protocolo UPnP, y que por defecto, siempre deberíamos desactivarlo en el router para no tener ningún problema de seguridad.

- **Puertos 5400, 5500, 5600, 5700, 5800 y 5900:** Son usados por el programa VNC, que también sirve para controlar equipos remotamente.

- **Puerto 8080:** Es el puerto alternativo al puerto 80 TCP para servidores web, normalmente se utiliza este puerto en pruebas.

---

### Vulnerabilidad en vsftpd 2.3.4

- **Descripción:** Se levanta una puerta trasera.
- **Exploit:**
  1. Conectarse al servidor vulnerable usando `ncat`.
     ```
     ncat 192.168.32.116 6200
     ```
  2. Utilizar Shodan para detectar la vulnerabilidad.
  3. Crear un código que provoque la vulnerabilidad.
  4. Proponer una solución para la vulnerabilidad.

---

**Nota:** Un backdoor proporciona acceso no autorizado a un sistema, superando los mecanismos de autenticación normales de una organización.
