# Gebruiksaanwijzing

### opladen / vervangen batterijen
Opladen:
Als je een oplaadbare LiPo-batterij gebruikt, koppel de batterij los van de robot.
Sluit de batterij aan op een compatibele LiPo-oplader.
Zorg ervoor dat je de batterij oplaadt op een vuurvaste ondergrond en laat deze niet onbeheerd.

Vervangen:
Als de batterij leeg is, schakel de robot uit.
Verwijder de batterij voorzichtig uit de houder en plaats een nieuwe.
Zorg ervoor dat de polariteit correct is bij het aansluiten van de nieuwe batterij.

### draadloze communicatie
Maak gebruik van een ESP32 module, deze heeft standaard bluetooth en Wifi.
#### verbinding maken
Verbinding maken met Bluetooth:
Zet de robot aan en zorg ervoor dat de ESP32 module is ingeschakeld.
Zoek op je smartphone of laptop naar Bluetooth-apparaten.
Selecteer "LineFollower" uit de lijst van beschikbare apparaten.
Voer een eventuele pincode in.

Controleer de verbinding:
Gebruik een terminal-app (bijv. Serial Bluetooth Terminal op Android of CoolTerm op de computer) om gegevens te verzenden/ontvangen.
Test de communicatie door een eenvoudige opdracht naar de robot te sturen en controleer of deze correct reageert.


#### commando's
debug [on/off]  
start  
stop  
set cycle [µs]  
set power [0..255]  
set diff [0..1]  
set kp [0..]  
set ki [0..]  
set kd [0..]  
calibrate black  
calibrate white  

### kalibratie
uitleg kalibratie  

### settings
De robot rijdt stabiel met volgende parameters:  

### start/stop button
uitleg locatie + werking start/stop button
