import os
import shutil
from PIL import Image  # Pillow-Bibliothek für Bildbearbeitung

creator = "Rolyat"
titelcore = "Bikini Babyblue Hair Pink Beach"
titel = creator + titelcore
root_path = r"C:\Users\Julian\Dropbox\Ero\A-Rolyatistaylor\A-Casual\(Casual) Bikini Babyblue Hair Pink Beach"

# Neuer Ordner erstellen
ordnername = os.path.basename(root_path)
neuer_ordnername = f"() {ordnername}"
neuer_ordnerpfad = os.path.join(root_path, neuer_ordnername)
os.makedirs(neuer_ordnerpfad, exist_ok=True)
print(f"Neuen Ordner erstellt: {neuer_ordnerpfad}")

# Alle Bilder finden
bilder = [f for f in os.listdir(root_path) if f.endswith(('.jpg', '.png')) and os.path.isfile(os.path.join(root_path, f))]
print(f"Gefundene Bilder: {bilder}")

# Bilder kopieren + evtl. umwandeln
for idx, bild in enumerate(bilder, start=1):
    alter_pfad = os.path.join(root_path, bild)
    ext = os.path.splitext(bild)[1]
    
    # PNG → JPG umwandeln
    if ext.lower() == '.png':
        neuer_name = f"{titel}_{idx}.jpg"
        neuer_pfad = os.path.join(neuer_ordnerpfad, neuer_name)
        
        # Öffnen und als JPG speichern
        with Image.open(alter_pfad) as img:
            rgb_img = img.convert('RGB')  # PNG hat evtl. Transparenz → RGB umwandeln
            rgb_img.save(neuer_pfad, 'JPEG')
        print(f"PNG umgewandelt & kopiert: {alter_pfad} → {neuer_pfad}")
    
    # JPG einfach kopieren + umbenennen
    else:
        neuer_name = f"{titel}_{idx}.jpg"  # Hier auch .jpg erzwingen, wenn du willst
        neuer_pfad = os.path.join(neuer_ordnerpfad, neuer_name)
        shutil.copy2(alter_pfad, neuer_pfad)
        print(f"JPG kopiert: {alter_pfad} → {neuer_pfad}")

print("Fertig!")
