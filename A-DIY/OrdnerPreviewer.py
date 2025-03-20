import os
import shutil
from PIL import Image

# Der Hauptordner, der alle Unterordner enthält
main_folder = r"C:\Pfad\Zu\Deinem\Hauptordner"  # Ändere den Pfad zu deinem Ordner

# Zielordner für die Vorschau-Bilder
preview_folder = os.path.join(main_folder, "OrdnerPreview")

# Falls der Zielordner nicht existiert, wird er erstellt
if not os.path.exists(preview_folder):
    os.makedirs(preview_folder)

# Durchlaufe alle Ordner im Hauptordner
for folder_name in os.listdir(main_folder):
    folder_path = os.path.join(main_folder, folder_name)

    # Prüfe, ob es ein Ordner ist
    if os.path.isdir(folder_path):
        # Suche nach dem ersten Bild im Ordner (z. B. *.jpg, *.png)
        for file_name in os.listdir(folder_path):
            if file_name.lower().endswith(('.jpg', '.jpeg', '.png', '.gif', '.bmp')):
                image_path = os.path.join(folder_path, file_name)
                
                # Öffne das Bild und kopiere es in den Zielordner
                try:
                    image = Image.open(image_path)
                    # Optional: Das Bild auf eine kleinere Größe anpassen (z.B. 200x200 Pixel)
                    image.thumbnail((200, 200))
                    
                    # Zielpfad für das kopierte Bild (umbenannt auf den Ordnernamen)
                    new_image_path = os.path.join(preview_folder, folder_name + ".jpg")
                    
                    # Speichere das Bild
                    image.save(new_image_path)
                    print(f"Vorschau für '{folder_name}' wurde erstellt.")
                except Exception as e:
                    print(f"Fehler beim Verarbeiten von {folder_name}: {e}")
                break  # Nimm nur das erste Bild aus dem Ordner
