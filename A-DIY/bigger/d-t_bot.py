import discord
from discord.ext import commands

import requests

DISCORD_TOKEN = "MTMzOTY0MjQ5OTU3NjM2NTE2Ng.GB7_ja.32KfbH2_hZ4AQZcxZoV2osz6C3UtigwzWARm5w"

TELEGRAM_TOKEN = "7808353665:AAEzr2YJiHHuLci7eC7LnfOamF3Bx1l5xpM"
CHAT_ID = "1046776084"

# Intents aktivieren
intents = discord.Intents.default()
intents.voice_states = True  # Erlaubt das Tracken von Voice-Channel-Updates
intents.members = True  # Erlaubt das Abrufen von Mitgliedern (wichtig!)

# Erstelle einen Discord Client
client = discord.Client(intents=intents)

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
    url = f"https://api.telegram.org/bot{7808353665:AAEzr2YJiHHuLci7eC7LnfOamF3Bx1l5xpM}/sendMessage"
    params = {"chat_id": CHAT_ID, "text": message}
    response = requests.get(url, params=params)
    print(response.json())  # Zeigt die Antwort von Telegram

# Bot starten
client.run(DISCORD_TOKEN)
