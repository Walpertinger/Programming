# Eingaben in Ganzzahlen umwandeln
x = int(input("Wähle x: "))
y = int(input("Wähle y: "))

def prodZ(x, y):
    [i, z] = [0, 0]  # Initialisierung von i und z
    if x < 0:  # Wenn x negativ ist
        x = -x  # Negativzeichen von x entfernen
        y = -y  # Negativzeichen an y anhängen
    # Wiederholte Addition von y, x-mal
    for i in range(0, x):
        z += y  # y wird zu z hinzugefügt
    return z

# Funktion aufrufen und Ergebnis anzeigen
ergebnis = prodZ(x, y)
print(f"Das Produkt von {x} und {y} ist: {ergebnis}") #f = string formatierung für bessere leserlichkeit
