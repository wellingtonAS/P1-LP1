nota = float(input())
nota_aux = int(nota)
moeda = float(nota - nota_aux)
print('NOTAS:')
print('{} nota(s) de R$ 100.00'.format(int(nota_aux/100)))
print('{} nota(s) de R$ 50.00'.format(int((nota_aux%100)/50)))
print('{} nota(s) de R$ 20.00'.format(int(((nota_aux%100)%50)/20)))
print('{} nota(s) de R$ 10.00'.format(int((((nota_aux%100)%50)%20)/10)))
print('{} nota(s) de R$ 5.00'.format(int(((((nota_aux%100)%50)%20)%10)/5)))
print('{} nota(s) de R$ 2.00'.format(int((((((nota_aux%100)%50)%20)%10)%5)/2)))
moeda_aux=float((nota-nota_aux) + int((((((nota_aux%100)%50)%20)%10)%5)%2)) * 100
moeda=int(moeda_aux)
moeda_aux2=float(moeda)
if (moeda_aux-moeda_aux2)>0.5:
    moeda=moeda+1
print('MOEDAS:')
print('{} moeda(s) de R$ 1.00'.format(int(moeda/100)))
print('{} moeda(s) de R$ 0.50'.format(int((moeda%100)/50)))
print('{} moeda(s) de R$ 0.25'.format(int(((moeda%100)%50)/25)))
print('{} moeda(s) de R$ 0.10'.format(int((((moeda%100)%50)%25)/10)))
print('{} moeda(s) de R$ 0.05'.format(int(((((moeda%100)%50)%25)%10)/5)))
print('{} moeda(s) de R$ 0.01'.format(int((((((moeda%100)%50)%25)%10)%5)/1)))