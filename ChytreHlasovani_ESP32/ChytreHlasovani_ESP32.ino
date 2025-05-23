#include <WiFi.h>
#include <HTTPClient.h>

// ----- Tvůj WiFi přístup -----
const char* ssid = "TVÁ_SÍŤ";
const char* password = "HESLO_SÍTĚ";

// ----- Firebase adresa -----
const char* firebaseHost = "https://ChytreHlasovani.firebaseio.com"; 
const char* firebasePath = "/votes";

// ----- GPIO piny tlačítek -----
const int buttonAno = 12;      
const int buttonNe = 13;
const int buttonZdrzit = 14;

void setup() {
  Serial.begin(115200);

  //---- Připojení na Wi-Fi----
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nWiFi connected!");

  // Nastavení tlačítek
  pinMode(buttonAno, INPUT_PULLUP);
  pinMode(buttonNe, INPUT_PULLUP);
  pinMode(buttonZdrzit, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(buttonAno) == LOW) {
    sendVote("ano");
    delay(500); // debounce
  }
  if (digitalRead(buttonNe) == LOW) {
    sendVote("ne");
    delay(500); // debounce
  }
  if (digitalRead(buttonZdrzit) == LOW) {
    sendVote("zdrzit");
    delay(500); // debounce
  }
}

// Funkce pro odeslání hlasu do Firebase
void sendVote(String voteType) {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    String url = String(firebaseHost) + firebasePath + "/" + voteType + ".json";
    
    http.begin(url);
    http.addHeader("Content-Type", "application/json");

    // Zvýšení počtu hlasů o 1
    String requestBody = "1";

    int httpResponseCode = http.PUT(requestBody);

    if (httpResponseCode > 0) {
      Serial.println("Vote sent: " + voteType);
    } else {
      Serial.print("Error sending vote. HTTP response code: ");
      Serial.println(httpResponseCode);
    }
    http.end();
  }
}