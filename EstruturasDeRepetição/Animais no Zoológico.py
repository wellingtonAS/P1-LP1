cm = 0
ct = 0
cv = 0
st = 0
option = 'continuar'
while(option != 'parar'):
    name = str(input())
    name = name.lower()
    if name == 'macaco':
        cm = cm + 1
    weight = float(input())
    if name == 'tigre':
        ct = ct + 1
        st = st + weight
    coutry = str(input())
    coutry = coutry.lower()
    if name == 'cobra' and coutry == 'venezuela':
        cv = cv + 1
    option = str(input())
    option = option.lower()
if ct == 0:
    print(cm)
    print('{:.2f}'.format(st))
    print(cv)
else:
    print(cm)
    print('{:.2f}'.format(st/ct))
    print(cv)
