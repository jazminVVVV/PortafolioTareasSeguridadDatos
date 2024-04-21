#include <WiFi.h>
#include <HTTPClient.h> // Aquí deberías corregir el nombre de la librería

// Credenciales de la red a la cual nos conectaremos
const char* ssid = "LasDobleJ";
const char* password = "janayjaz";

// URL para hacer las peticiones
const char* esp32Server = "http://192.168.4.1/device1";

// Variables de programa
// Pin
const byte btn = 13;
// LED
const byte led = 25;
// Encendido o no
bool isLedOn = false;
// Respuesta
String answer;

// Prototipo de la función getRequest
String getRequest(const char* serverName);

void setup() {
    Serial.begin(115200);

    // Configuración del pin
    pinMode(btn, INPUT_PULLDOWN);
    pinMode(led, OUTPUT);

    // Nos conectamos a la red
    WiFi.begin(ssid, password);
    Serial.print("Conectando");
    while (WiFi.status() != WL_CONNECTED) {
        delay(500);
        Serial.print(".");
    }
    Serial.println("");
    Serial.print("Conectado a la red con la IP: ");
    Serial.println(WiFi.localIP());
    Serial.println();
}

void loop() {
    if (digitalRead(btn) == HIGH && !isLedOn) {
        digitalWrite(led, HIGH);
        isLedOn = true;
        Serial.println("\nLed encendido");
        answer = getRequest(esp32Server);
        Serial.print("Respuesta del ESP32 servidor: ");
        Serial.println(answer);
        delay(250);
    } else if (digitalRead(btn) == LOW && isLedOn) {
        digitalWrite(led, LOW);
        isLedOn = false;
        Serial.println("\nLed apagado");
        delay(25);
    }
}

String getRequest(const char* serverName) {
    HTTPClient http;
    http.begin(serverName);

    // Enviamos petición HTTP
    int httpResponseCode = http.GET();
    String payload = "";

    if (httpResponseCode > 0) {
        Serial.print("HTTP response code: ");
        Serial.println(httpResponseCode);
        payload = http.getString();
    } else {
        Serial.print("Error code: ");
        Serial.println(httpResponseCode);
    }

    http.end();

    return payload;
}

