## 02 de Mayo

### Capas del Modelo OSI

1. **Física**
2. **Enlace de Datos:** Dirección MAC
3. **Red:** Dirección IP
4. **Transporte:** Puertos
5. **Sesion**
6. **Presentación**
7. **Aplicación**
## URLs

 `@`: Identificador del usuario en algunas redes sociales.
 `filesystem`: Protocolo para acceder al sistema de archivos de un servidor.


### Firewall

Un firewall es un dispositivo que protege una red al filtrar el tráfico entrante y saliente según un conjunto de reglas definidas.

- **Permisivo:** Este modo permite todo el tráfico a menos que esté explícitamente prohibido por las reglas del firewall. Aquí se construyen reglas para permitir o denegar cierto tráfico.

- **Restrictivo:** Es preferible, ya que solo permite el tráfico que está explícitamente permitido por las reglas del firewall.

  - **Acciones:**
    - **Permitir:** Cuando se permite el tráfico, el firewall puede aceptar o rechazar el paquete, según la configuración.
    - **Denegar:** El firewall puede descartar o rechazar el paquete, según la configuración.

  - **Reglas:**
    - **Entrada:** Controla el tráfico que ingresa a la red desde el exterior.
    - **Salida:** Controla el tráfico que sale de la red hacia el exterior.

  - **Definir política:** Selecciona qué tráfico se permitirá y qué tráfico se bloqueará según las reglas establecidas.

Al lanzar un escaneo con nmap, la política de configuración es `drop`, no `reject`:

- **Reject:** Responde a la petición indicando que el puerto está cerrado.
- **Drop:** Bloquea el tráfico sin responder al atacante, lo que hace que el puerto parezca estar filtrado o inalcanzable.


