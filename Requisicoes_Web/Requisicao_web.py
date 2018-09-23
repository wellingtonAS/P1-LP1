import requests
try:
    req = requests.get('https://www.youtube.com/c/WELLINGTONRACER')
    string = req.text.split()
    if string == 'WELLINGTON RACER':
        print('The name wanted was found!')
    else:
        print('The name could not be found!')
except:
    print('Page not found!')
