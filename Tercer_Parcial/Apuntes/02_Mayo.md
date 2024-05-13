## 02 de Mayo

### Capas del Modelo OSI

1. **Física**
2. **Enlace de Datos:** Dirección MAC
3. **Red:** Dirección IP
4. **Transporte:** Puertos

### URLs

 `@`: Identificador del usuario en algunas redes sociales.
 `filesystem`: Protocolo para acceder al sistema de archivos de un servidor.
5. `Sesion`
6. `Presentación`
7. `Aplicación`

### Firewall

Un firewall es un dispositivo que protege mi red.

- **Permisivo:** Permite todo el tráfico, donde construyo mis reglas.
- **Restrictivo:** Es mejor, ya que:

  - **Acciones:**
    - **Permitir:** Allow → Accept
    - **Denegar:** Deny → Drop, Reject

  - **Reglas:**
    - **Entrada**
    - **Salida**

  - **Definir política:** Seleccionar el tráfico que permita hacia los puertos.

Cuando lanzo un escaneo con nmap, la política de configuración es `drop`, no `reject`:

- **Reject:** Responde a la petición.
- **Drop:** Bloquea el tráfico sin responder al atacante.

