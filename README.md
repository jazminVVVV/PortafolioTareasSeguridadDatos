# PortafolioTareasSeguridadDatos

# BITACORA APUNTES DE SEGURIDAD DE DATOS
# Tarea #999 GitHub con correo institucional
Listo 
# Tarea #997 Registrarse en el programa de github for education
![Tarea #997 GitHUb for education](https://github.com/jazminVVVV/PortafolioTareasSeguridadDatos/assets/114268456/96840374-7141-4220-8402-0cb117032b06)

# Tarea #996 Llevar una bitacora de clase, donde registren sus apuntes usando markdown.
![Tarea #998 Portafolio de evidencias](https://github.com/jazminVVVV/PortafolioTareasSeguridadDatos/assets/114268456/9f975d19-2326-4912-90de-724375ae4fd0)

# Tarea #995
## CIA Triad

La **Tríada de la CIA** es un marco fundamental en seguridad de la información que ayuda a garantizar la confidencialidad, integridad y disponibilidad de datos y sistemas. Es esencial para diseñar e implementar sistemas de información seguros y proteger contra diversas amenazas y vulnerabilidades.

- **Confidencialidad:**
  - Protege la información confidencial contra acceso o divulgación no autorizados.
  - Solo aquellos con los permisos adecuados pueden acceder, evitando exposición no autorizada.

- **Integridad:**
  - Relacionada con la precisión y confiabilidad de datos y sistemas.
  - Garantiza que los datos permanezcan inalterados y confiables, evitando modificaciones no autorizadas.

- **Disponibilidad:**
  - Asegura que la información y los recursos sean accesibles y utilizables cuando sea necesario.
  - Protege contra interrupciones, tiempo de inactividad o denegación de servicio.

## Usability Triangle

- **Funcionalidad:**
  - El conjunto de características proporcionadas por el sistema.

- **Usabilidad:**
  - Componentes de la GUI diseñados para facilitar el uso del sistema.

- **Seguridad:**
  - Restricciones impuestas al acceso a los componentes del sistema.

## Riesgo

El **riesgo** es la posibilidad de que ocurra un evento no deseado que tenga un impacto negativo en los activos de una organización, como la pérdida de datos, la interrupción de servicios o daños a la reputación.

## MFA (Autenticación de Factor Múltiple)

**MFA** es un método de seguridad que requiere que un usuario proporcione dos o más formas de identificación antes de permitir el acceso a un sistema o cuenta, como contraseña, dispositivo de seguridad o biometría.

## Vulnerabilidad

Una **vulnerabilidad** es una debilidad o fallo en un sistema, proceso o diseño que podría ser explotado para comprometer la seguridad. Puede ser una falla en el software, una configuración incorrecta u otro aspecto aprovechable por una amenaza.

## Amenaza

Una **amenaza** es cualquier evento o acción, intencional o no, que puede causar daño a un sistema, datos o activos. Las amenazas pueden ser de origen humano, natural o tecnológico.

## Impacto

El **impacto** se refiere a la magnitud del daño o consecuencias que pueden surgir como resultado de un evento no deseado. Puede afectar la confidencialidad, integridad, disponibilidad u otros aspectos críticos de la información y sistemas.

# Tarea #994

## Instalación de Parrtotsec

![image](https://github.com/jazminVVVV/PortafolioTareasSeguridadDatos/assets/114268456/2dca9c10-cddd-4f31-aa26-7080546e9817)

# APUNTES 23 de Enero

**Hack Value** : Nivel de atracción que tiene un activo para los
cibercriminales o que valga la pena intentar obtener.

**Target of evaluation**: Objetivo tal cual como un sitio web o servicio que se prestan, servidor, base de datos.

**Exploit**: Pieza de software diseñada para aprovechar una
vulnerabilidad.

**Zero-Day Attack**: No hay cura para la vulnerabilidad.

**Daisy Chaining**:  Obtener acceso a una red y/o a un ordenador y, a continuación, utilizar la misma información
para obtener acceso a varias redes y ordenadores que contengan información deseable.

**Vulnerability**: Existencia de un error de diseño o implementación

Zero Day impactos investigar

**Non-Repudiation**: 

**SIEMP** Centralización y correlación de eventos. 

Predictores de ataques, ejemplos:

- Hactivismo: Grupos o individuos que buscan promover agendas políticas, sociales o ideológicas a través
  de actividades cibernéticas, como ataques DDoS, defacement de sitios web o filtración de datos confidenciales.

- Politicas de seguridad inadecuadas

- Crimen organizado: Grupos delictivos que realizan actividades cibernéticas para obtener beneficios
  financieros, como robo de datos personales o de tarjetas de crédito, fraude bancario en línea o ransomware.
  
  **Ataque = motivo + metodo + vulnerabilidad**

  Amenazas a la seguridad de la información
  - Naturales: huracanes, desastres naturales
  - Físicas: sabotjae, espionaje
  - Humanas: Ing social, no hay conciencia de los riegos en la tecnología
  
# APUNTES 6 de Febrero

Repaso de conceptos
**Agentes para mandar eventos:**
  - Firebeat
  - Winlogbeat
  - Metric beat
  - Padobeat
Tipos --> date, time, user, resoruce, action

**Information warfare**

Team rojo --> entidad que está llevando a cabo operaciones de guerra de la información en contra de otra entidad, como un gobierno, una organización o un país

Team azul  --> gobierno, una institución, una corporación o cualquier otra entidad que esté siendo atacada o afectada por las acciones de Team Rojo

**Escalamiento de privilegios**

Vulnerar recursos 
Ganar más acceso --> de administrador

Ramsomware

  * resplado
  * encriptar
    
Protegerme

  * respaldos
  * concientización --> usuarios
    
Seguridad por capas
  7 capas del modelos OSI

  ![image](https://github.com/jazminVVVV/PortafolioTareasSeguridadDatos/assets/114268456/982316e6-19fc-49df-b6ca-78a1ff2c27fa)

  ![image](https://github.com/jazminVVVV/PortafolioTareasSeguridadDatos/assets/114268456/18404981-e8b0-4fd2-9664-0e6adc2f670c)

Físico --> tarjetas, conectores
Red --> puerto
puertos--> transporte

Sesión --> mantener la sesión

ultimas tres capas --> protocolos

**Respaldos que se deben implementar -- BACKUP**

  * Full --> completo de la base de datos 
  * Diferencial --> cambios desde el ultimo respaldo completo
  * Incremental --> el tiempo en mas reducidos pero hace lo mismo que el diferencial
Sevicios para respaldo
BACULA, AWS

AWS S3 --> cuesta menos pero el tiempo de espera tarda aprox 12 hrs en devolve el respaldo
