# Gebruiksaanwijzing

### opladen / vervangen batterijen
Opladen:
Dit zijn li-ion batterijen van het type 18650. Deze batterijen laad je best op voor een sessie. Wanneer tijdens een sessie een verminderde prestatie wordt geleverd kan je dan ook best de batterijen opladen. Hiervoor heb je een speciale oplader nodig
Vervangen:
Verwijder de batterij voorzichtig uit de houder en plaats een nieuwe.
Zorg dat de batterijen in de correcte oriëntatie in de batterijhouder gestoken worden. 

### draadloze communicatie
Maak gebruik van een ESP32 module, deze heeft standaard bluetooth en Wifi.
#### verbinding maken
Verbinding maken met Bluetooth:
Zet de robot aan en zorg ervoor dat de ESP32 module is ingeschakeld.
Zoek op je smartphone naar Bluetooth-apparaten.
Selecteer "Naam linefollower" uit de lijst van beschikbare apparaten.

Controleer de verbinding:
Gebruik een terminal-app zoals Serial Bluetooth Terminal op Android om gegevens te verzenden/ontvangen.
Test de communicatie door een eenvoudige opdracht naar de robot te sturen en controleer of deze correct reageert.


#### commando's
debug Stuurt alle ingestelde parameters en berekende calculation time terug.

run Start of stopt de robot.

set cycle [µs] Stelt de cycle time in van de robot.

set power [0..255] Stelt de maximum power van de robot in.

set diff [0..1] Stelt de verschil in power tussen de motoren in bochten.

set kp [0..] Stelt de propertionele correctie van de fout in.

set ki [0..] Stelt de integrale correctie van de fout in.

set kd [0..] Stelt de differentiële correctie van de fout in.

calibrate black Stelt de waardes gelezen door de sensor in als zwart.

calibrate white Stelt de waardes gelezen door de sensor in als wit.

### kalibratie
uitleg kalibratie
Er moet worden gekalibreerd omdat er een verschil is tussen de verschillende sensoren, door een tolerantie op de onderdelen, wat eigen is aan productie.

Commando: calibrate black Wanneer je dit commando stuurt over Bluetooth wordt de reflectie van het opppervlakte waarover de sensor module op dat moment hangt opgeslagen per sensor opgeslagen als een zwart waarde. Commando: calibrate white Wanneer je dit commando stuurt over bluetooth wordt de reflectie van het opppervlakte waarover de sensor module op dat moment hangt opgeslagen per sensor opgeslagen als een wit waarde.

Deze waardes worden dan gebruikt om te vergelijken met de huidig gedetecteerd oppervlakte ofdat het een wit of zwart oppervlakte is. Het is belangrijk dat je deze commandos opnieuw uitvoerd wanneer je van omgeving verandert zodat er correct kan gedetecteerd kan worden.

### settings
De robot rijdt stabiel met volgende parameters
Cycletime: 600
Power: 200
Diff: 0,4
Kp: 30
Ki: 0
Kd: 0,3
