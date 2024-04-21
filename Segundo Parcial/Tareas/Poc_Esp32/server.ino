
#include <WiFi.h>
#include <WebServer.h>
#include "Esp32SourApple.h"

//Creamos nuestro propia red --> SSID & Password
const char* ssid = "LasDobleJ";
const char* password = "janayjaz";

WebServer server(80);
int requestCounter = 0; // Contador de peticiones

void setup(){
    Serial.begin(115200);
    delay(50);
    //Creamos el punto de acceso
    WiFi.softAP(ssid, password); // tiene más parametros opcionales
    //WiFi.softAPConfig(io, gateway, subnet)
    IPAddress ip = WiFi.softAPIP();

    Serial.print("Nombre de mi red esp32: ");
    Serial.print(ssid);
    Serial.print("La IP es: ");
    Serial. println(ip);

    server.on("/", handleConnectionRoot);
    server.on("/device1", handleDevice1);
    server.on("/device2", handleDevice2);
    server.on("/device3", handleDevice3);
    server.onNotFound(handleNotFound);

    server.begin();
    Serial.println("Servidor HTTP iniciado");
    Serial.println("\nDispositivos Contactados: ");

}

void loop() {
    server.handleClient();

    // Si el contador alcanza 10, ejecutar el código y reiniciar el contador
    if (requestCounter >= 10) {
        Serial.println("Se han recibido 10 peticiones. Ejecutando código especial.");
        // Aquí coloca el código que deseas ejecutar
        // Por ejemplo:
          runEsp32SourApple();
          Serial.println("Hola mundo");
        
        requestCounter = 0; // Reiniciar el contador
    }
}

String device = "";
String answer = "";

void setAnswer(){
    // nuestra respuesta en html
    answer = "<!DOCTYPE html>\
              <html>\
              <body>\
              <h1>Hola \"" + device + "\"! </h1>\
              </body>\
              </html>";
}

//Responder a la url raíz (root /)
void handleConnectionRoot(){
    server.send(200, "text/html", "Hola desconocido!");
}

void handleDevice1(){
    incrementRequestCounter();
    device = "ESP32-01";
    Serial.println(device);
    setAnswer();
    server.send(200, "text/html", answer);
}
void handleDevice2(){
    incrementRequestCounter();
    device = "ESP32-02";
    Serial.println(device);
    setAnswer();
    server.send(200, "text/html", answer);
}

void handleDevice3(){
    incrementRequestCounter();
    device = "ESP32-03";
    Serial.println(device);
    setAnswer();
    server.send(200, "text/html", answer);
}

void handleNotFound(){
    server.send(404, "text/plain", "Not Found");
}

void incrementRequestCounter() {
    requestCounter++;
}

