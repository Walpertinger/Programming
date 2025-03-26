import os
import shutil
from PIL import Image  # Pillow-Bibliothek für Bildbearbeitung

creator = "Yukki "  # Leerzeichen für bessere Formatierung
titelcore = "Devil Girl Edited"
root_path = r"C:\Users\Julian\Desktop\Everything\Wallpaper Cosplay\LQ\Yukki\Edited Done\Devil Girl Edited"

titel = creator + titelcore

# Neuer Ordner erstellen
ordnername = os.path.basename(root_path)
neuer_ordnername = f"{ordnername}_Processed"
neuer_ordnerpfad = os.path.join(root_path, neuer_ordnername)
os.makedirs(neuer_ordnerpfad, exist_ok=True)
print(f"Neuen Ordner erstellt: {neuer_ordnerpfad}")

# Alle Bilder finden
bilder = [f for f in os.listdir(root_path) if f.lower().endswith(('.jpg', '.png')) and os.path.isfile(os.path.join(root_path, f))]
print(f"Gefundene Bilder: {bilder}")

bearbeitete_bilder = []

# Bilder verarbeiten
for idx, bild in enumerate(bilder, start=1):
    alter_pfad = os.path.join(root_path, bild)
    neuer_name = f"{titel}_{idx}.jpg"  # Einheitliche Endung .jpg
    neuer_pfad = os.path.join(neuer_ordnerpfad, neuer_name)
    
    with Image.open(alter_pfad) as img:
        img = img.convert('RGB')  # Falls PNG mit Transparenz, umwandeln
        img.save(neuer_pfad, "JPEG")
    
    bearbeitete_bilder.append(neuer_name)
    print(f"Bild verarbeitet: {alter_pfad} → {neuer_pfad}")
    
    # Dateigröße prüfen
    if os.path.getsize(neuer_pfad) > 3 * 1024 * 1024:  # größer als 3MB
        resized_name = f"{titel}_{idx}_resized.jpg"
        resized_pfad = os.path.join(neuer_ordnerpfad, resized_name)
        
        with Image.open(neuer_pfad) as img:
            img.thumbnail((1920, 1080))  # Größe reduzieren (anpassbar)
            img.save(resized_pfad, "JPEG", quality=85)
        
        bearbeitete_bilder.append(resized_name)
        print(f"Bild über 3MB → Verkleinerte Version gespeichert: {resized_pfad}")

# Zusammenfassung ausgeben
print("\n--- Bearbeitete Bilder ---")
for bild in bearbeitete_bilder:
    print(bild)

print("\n--- Originalbilder im Ordner ---")
for bild in bilder:
    print(bild)

print("\nFertig!")
