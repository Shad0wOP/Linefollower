# Gebruiksaanwijzing

### opladen / vervangen batterijen
#### Opladen
Dit zijn li-ion batterijen van het type 18650. Deze batterijen laad je best op voor een sessie. Wanneer tijdens een sessie een verminderde prestatie wordt geleverd kan je dan ook best de batterijen opladen. Hiervoor heb je een speciale oplader nodig

#### Vervangen
Verwijder de batterij voorzichtig uit de houder en plaats een nieuwe.
Zorg dat de batterijen in de correcte oriëntatie in de batterijhouder gestoken worden. 

### draadloze communicatie
Maak gebruik van een ESP32 module, deze heeft standaard bluetooth en Wifi.
#### verbinding maken
Zet de bluetooth van je gsm aan en verbind met de auto. Open de bluetooth serial terminal app en verbind nu via deze app met de auto. Je kan nu via het tekstvak commando's versturen naar de auto.

#### commando's
- debug / geeft een lijst van ingestelde parameters
- run aan / zorgt ervoor dat de auto begint te rijden
- run uit / zorgt ervoor dat de auto stopt met rijden
- set cycle [µs] / bepaald de cyclustijd. deze moet altijd 1.5 tot 2x groter zijn dan de calculation time
- set power [0..255] / bepaalt de snelheid van de auto
- set diff [0..1] / bepaald of de auto versneld (> 0.5) of vertraagd (< 0.5) in de bochten.
- set kp [0..] / bepaald de kp waarde van de pid regelaar
- set ki [0..] / bepaald de ki waarde van de pid regelaar
- set kd [0..] / bepaald de kd waarde van de pid regelaar
- calibrate black / de sensoren worden gekalibreerd op de zwartwaarden
- calibrate white / de sensoren worden gekalibreerd op de witwaarden

### kalibratie
uitleg kalibratie
Er moet worden gekalibreerd omdat er een verschil is tussen de verschillende sensoren, door een tolerantie op de onderdelen, wat eigen is aan productie.

Commando: calibrate black Wanneer je dit commando stuurt over Bluetooth wordt de reflectie van het opppervlakte waarover de sensor module op dat moment hangt opgeslagen per sensor opgeslagen als een zwart waarde. Commando: calibrate white Wanneer je dit commando stuurt over bluetooth wordt de reflectie van het opppervlakte waarover de sensor module op dat moment hangt opgeslagen per sensor opgeslagen als een wit waarde.

Deze waardes worden dan gebruikt om te vergelijken met de huidig gedetecteerd oppervlakte ofdat het een wit of zwart oppervlakte is. Het is belangrijk dat je deze commandos opnieuw uitvoerd wanneer je van omgeving verandert zodat er correct kan gedetecteerd kan worden.

### settings
De robot rijdt stabiel met volgende parameters
- Cycletime: 600
- Power: 200
- Diff: 0,4
- Kp: 30
- Ki: 0
- Kd: 0,3
