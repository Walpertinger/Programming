import requests

TOKEN = "DEIN_TELEGRAM_BOT_TOKEN"
CHAT_ID = "DEINE_CHAT_ID"
TEXT = "Hallo, das ist eine Testnachricht!"

url = f"https://api.telegram.org/bot{TOKEN}/sendMessage"
params = {"chat_id": CHAT_ID, "text": TEXT}

response = requests.get(url, params=params)
print(response.json())  # Zeigt die Antwort von Telegram
