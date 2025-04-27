# Projekt hlasovacího systému v reálném čase pro akce nebo parlament
## Cíl projektu
Vytvořit systém, který umožní účastníkům hlasovat v reálném čase (přes ESP32 zařízení nebo webovou appku), a okamžitě zobrazovat výsledky. Všechna data se ukládají do databáze pro pozdější analýzu a zobrazování historických trendů. Chceme aby všichni mohli hlasovat na témata/otázky které je zajímají z pohodlí svého domu,nebo fyzicky. Podle toho co preferují. Hlasy fyzické i internetové se spojí a vyhodnotí se výsledek

## Jak moderátor vytvoří otázku?
Při vytvoření místnosti se vygeneruje náhodný číselný kód a QR kód odpovídající místnosti. Ti kteří se chtějí připojit do hlasování musí zadat na webu nebo aplikaci kód a nebo pomocí
qr kód čtečky(zabudovaná v aplikaci) naskenovat. Ti kteří hlasují fyzicky hlasují přes tlačítka na daném místě

## Funkčnost projektu
1. Moderátor vloží otázku přes admin web rozhraní (Například zrušení zákona).
2. Účastníci odpoví kliknutím tlačítek(Fyzicky) nebo ve webové aplikaci/mobilní aplikaci.
3. Kliknutí odpovědi se potom zašle na Firebase => aktualizuje se v reálném čase
4. Na veřejné obrazovce(i v mobilní aplikaci položka:Výsledky) se zobrazí:
   - Průběžné skóre jednotlivých odpovědí.
   - Procentuální podíly.
   - Vítěze hlasování

5.Data se archivují – je možné zpětně analyzovat stará hlasování.

##  Použité technologie

| Komponenty             | Technologie                      |
|-------------------------|-----------------------------------|
| Mikrokontrolér          | ESP32 Dev Board                  |
| Komunikace              | Wi-Fi, HTTP (REST API), Firebase SDK |
| Backend                 | Firebase Realtime Database       |
| Frontend (Dashboard)    | HTML, CSS, JavaScript, Chart.js   |
| Vývojové prostředí      | Arduino IDE, Visual Studio Code,Flutter  |

## Kód projektu

-[Pro ESP32(ArduinoIDE)](ChytreHlasovani_ESP32/ChytreHlasovani_ESP32.ino) 

-Pro Webovou Stránku

-[Pro Aplikaci]

## Zdroje
- ChatGPT
- Skripta - Vašíček David
- Dratek.CZ
- Youtube
- Firebase

## Vypracovali
Daniel Fiala , Karel Zelinger

