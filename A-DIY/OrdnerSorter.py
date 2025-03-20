import os
import shutil
from PIL import Image  # Pillow-Bibliothek für Bildbearbeitung

creator = "Rolyat "
titelcore = "Bra Black Beige Pants Black Hair Pink Stairs "
titel = creator + titelcore
root_path = r"C:\Users\Julian\Dropbox\Ero\A-Rolyatistaylor\A-Casual\(Casual) (HQ) Bra Black Beige Pants Black Hair Pink Stairs"

# Neuer Ordner eine Ebene höher erstellen
ordnername = os.path.basename(root_path)
parent_path = os.path.dirname(root_path)
neuer_ordnername = f"(Casual) (HQ) {titelcore}"
neuer_ordnerpfad = os.path.join(parent_path, neuer_ordnername)
os.makedirs(neuer_ordnerpfad, exist_ok=True)
print(f"Neuen Ordner erstellt: {neuer_ordnerpfad}")

# Alle Bilder im Ursprungsordner finden (nur .jpg, .png)
bilder = [f for f in os.listdir(root_path)
          if f.lower().endswith(('.jpg', '.png')) and os.path.isfile(os.path.join(root_path, f))]
print(f"Gefundene Bilder: {bilder}")

# Bilder kopieren + evtl. umwandeln
for idx, bild in enumerate(bilder, start=1):
    alter_pfad = os.path.join(root_path, bild)
    ext = os.path.splitext(bild)[1]

    neuer_name = f"{titel}_{idx}.jpg"
    neuer_pfad = os.path.join(neuer_ordnerpfad, neuer_name)

    # PNG → JPG umwandeln
    if ext.lower() == '.png':
        with Image.open(alter_pfad) as img:
            rgb_img = img.convert('RGB')  # Transparenz entfernen
            rgb_img.save(neuer_pfad, 'JPEG')
        print(f"PNG umgewandelt & kopiert: {alter_pfad} → {neuer_pfad}")

    # JPG kopieren + umbenennen
    else:
        shutil.copy2(alter_pfad, neuer_pfad)
        print(f"JPG kopiert: {alter_pfad} → {neuer_pfad}")

print("Fertig!")


