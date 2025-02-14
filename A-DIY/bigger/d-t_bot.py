import discord
import requests

# Discord Bot Token
DISCORD_TOKEN = "DEIN_DISCORD_BOT_TOKEN"

# Telegram Bot Details
TELEGRAM_TOKEN = "DEIN_TELEGRAM_BOT_TOKEN"
CHAT_ID = "DEINE_CHAT_ID"

# Erstelle einen Discord Client
client = discord.Client()

# Wenn der Bot bereit ist, sende eine Nachricht in die Konsole
@client.event
async def on_ready():
    print(f"Bot logged in as {client.user}")

# Wenn ein Mitglied einem Voice-Channel beitritt
@client.event
async def on_voice_state_update(member, before, after):
    if after.channel is not None:  # Wenn der Benutzer einem Voice-Channel beitritt
        message = f"{member.name} ist dem Voice-Channel {after.channel.name} beigetreten."
        send_telegram_message(message)

# Funktion, um eine Nachricht an Telegram zu senden
def send_telegram_message(message):
    url = f"https://api.telegram.org/bot{TELEGRAM_TOKEN}/sendMessage"
    params = {"chat_id": CHAT_ID, "text": message}
    response = requests.get(url, params=params)
    print(response.json())  # Zeigt die Antwort von Telegram

# Bot starten
client.run(DISCORD_TOKEN)
