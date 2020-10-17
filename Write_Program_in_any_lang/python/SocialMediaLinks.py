#! python3
import webbrowser, sys, pyperclip
import subprocess

if(len(sys.argv) > 1):
    address = ' '.join(sys.argv[1:])
    webbrowser.open(address)
else:
    chrome_path ="C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe"
    child       = subprocess.Popen(chrome_path, shell=True)
    #webbrowser.open('www.google.com')
    webbrowser.open('https://www.facebook.com/')
    webbrowser.open('https://www.instagram.com/')
    webbrowser.open('https://twitter.com/')
    
