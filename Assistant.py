# import pyttsx3 as ps
import datetime

# import speech_recognition as sr
import wikipedia as wk
import webbrowser as wb
import random
import os

engine = ps.init("sapi5")
voices = engine.getProperty("voices")

engine.setProperty("voice", voices[0].id)


def speak(audio):
    engine.say(audio)
    engine.runAndWait()


def wishme():
    hour = int(datetime.datetime.now().hour)
    if (hour >= 4) and (hour <= 11):
        speak("Good Morning sir!")

    elif (hour > 11) and (hour < 17):
        speak("Good Afternoon sir!")

    elif (hour >= 17) and (hour < 24):
        speak("Good Evening sir!")

    else:
        speak("Hello sir!")


def command():
    r = sr.Recognizer()
    with sr.Microphone() as source:
        print("Listening...")
        r.pause_threshold = 1
        audio = r.listen(source)

    try:
        print("Recognizing...")
        query = r.recognize_google(audio, language="en-in")
        print(query)

    except Exception as e:

        what = [
            "Sorry sir, I was not able to understand that.",
            "pardon please sir",
            "Sorry I cannot help you with that sir",
        ]
        speak(random.choices(what))

    return query


good_boi = [
    "How may I help you?",
    "How may I assist you?",
    "What can I do for you?",
    "I am here for anything you need",
    "in your service",
]

wishme()
speak(random.choices(good_boi))

try:
    cmd = command().lower()

except Exception as e:
    cmd = command().lower()

search = ["looking for it", "searching it", "finding results", "looking on web"]

asserts = ["here you go!", "in a second", "alright", "just a second", "ok"]

yt = [
    "open youtube",
    "youtube kholo",
    "youtube khol",
    "youtube",
    "open yt",
    "zara youtube kholo",
]

quit = [
    "wait",
    "quit",
    "exit",
    "now you can go",
    "band kar do",
    "jao ab",
    "ab tum ja sakte ho",
    "theek hai tum ja sakte ho",
]

if ("wiki" or "wikipedia") in cmd:
    speak(random.choices(search))
    if "wikipedia" in cmd:
        cmd = cmd.replace("wikipedia", "")
    elif "wiki" in cmd:
        cmd = cmd.replace("wiki", "")
    result = "according to wikipedia, " + wk.summary(cmd, sentences=2)
    speak(result)

elif cmd in yt:
    speak(random.choices(asserts))
    wb.open("https://www.youtube.com")

elif cmd in quit:
    pass
