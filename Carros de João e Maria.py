ver = 0
totalSpeed = 0
count =0
option = input()
if option != 'N' and option != 'n':
    year = int(input())
    speed = float(input())
    totalSpeed = totalSpeed + speed
    ver = 1
    count = count + 1
    SpeedBigger = speed
    yearBigger = year
    option = input()
while option != 'N' and option!= 'n':
    year = int(input())
    if year > yearBigger:
        yearBigger = year
    speed = float(input())
    if speed > SpeedBigger:
        SpeedBigger = speed;
    totalSpeed = totalSpeed + speed
    count = count +1
    option = input()
if ver == 0:
    print('zero')
else:
    print('{:.2f}'.format(SpeedBigger))
    print('{}'.format(yearBigger))
    print('{:.2f}'.format(totalSpeed/count))
