# Projekt hlasovacího systému v reálném čase pro akce nebo parlament
## Cíl projektu
Vytvořit systém, který umožní účastníkům hlasovat v reálném čase (přes ESP32 zařízení nebo webovou appku), a okamžitě zobrazovat výsledky. Všechna data se ukládají do databáze pro pozdější analýzu a zobrazování historických trendů.

## Funkčnost projektu
1. Moderátor vloží otázku přes admin web rozhraní (Například zrušení zákona).
2. Účastníci odpoví kliknutím tlačítek(Fyzicky) nebo ve webové aplikaci/mobilní aplikaci.
3. Kliknutí odpovědi se potom zašle na Firebase => aktualizuje se v reálném čase
4. Na veřejné obrazovce(i v mobilní aplikaci položka:Výsledky) se zobrazí:
   - Průběžné skóre jednotlivých odpovědí.
   - Procentuální podíly.
   - Vítěze hlasování
5.Data se archivují – je možné zpětně analyzovat stará hlasování.

## 🛠️ Použité technologie

| Komponenta             | Technologie                      |
|-------------------------|-----------------------------------|
| Mikrokontrolér          | ESP32 Dev Board                  |
| Komunikace              | Wi-Fi, HTTP (REST API), Firebase SDK |
| Backend                 | Firebase Realtime Database       |
| Frontend (Dashboard)    | HTML, CSS, JavaScript, Chart.js   |
| Vývojové prostředí      | Arduino IDE, Visual Studio Code  |



