# Story Combat Game
#jacob zabel

import random
import time

#varibles
vHP = '50'
mkHP = '70'
cleHP = '80'


#viking and moveset
vk = str('Viking')
vkL= str('viking')
vkM1 = str('Double cut')
vkM2 = str('Beserk')
#Magic Knight Moveset
mk = str('Magic Knight')
mkM1= str('Blazing Lightning')
mkM2 = str('Glowing Lance')
#Cleric Moveset
cle= str('Cleric')
cleM1 = str('Health crash')
cleM2 = str('Heal')
pick = int()
#Character selection
print('Insert story here')
time.sleep(5)
print()
print('There are 3 classes Viking, Magic Knight, and Cleric.')

for pick in range (100):
    chara = str(input('Which class would you like to play as? '))
    print()
    if chara ==  vk  or chara == 'viking':
        confirm1 = str(input('Are you sure you want to play as a '+ vk + ' (Yes or No) : '))
        if confirm1 == 'yes' or confirm1 == 'Yes':
            print()
            print('Ah the mighty Viking, lots of blood will be shed!')
            name= str(input('What is your name? '))
            time.sleep(4)
            print()
            print('As a Viking you have 2 move to start, ' + vkM1 +' and '+ vkM2 + '.')
            print()
            print(vkM1 + ' Is your basic attack.')
            print()
            print(vkM2 + ' Doubles your damage, but lowers defense.')
            print()
            print('You have ' +vHP+ ' health.')
            time.sleep(4)
            break
    
        if confirm1 == 'no':
            print()
        
    elif  chara ==  mk or chara == 'magic knight':
        confirm1 = str(input('Are you sure you want to play as a '+ mk + ' (Yes or No) : '))
        if confirm1 == 'yes' or confirm1 == 'Yes':
            print()
            print('This will be easy for a royal Magic Knight such as I.')
            name= str(input('What is your name? '))
            time.sleep(4)
            print()
            print('As a Magic Knight you have 2 move to start, ' + mkM1 +' and '+ mkM2 + '.')
            print()
            print(mkM1 + ' is your basic attack that has a chance to burn the enemy!')
            print()
            print(mkM2 + ' is a Light Spear that goes through an enemies block!')
            print()
            print('You have ' +mkHP+ ' health.')
            time.sleep(4)
            break
    
        if confirm1 == 'no':
            print()

    
    elif chara ==  cle or  chara == 'cleric':
        confirm1 = str(input('Are you sure you want to play as a '+ cle + ' (Yes or No) : '))
        if confirm1 == 'yes' or confirm1 == 'Yes':
            print()
            print('Do not hurt me or I will just steal some of your life!')
            name = str(input('What is your name? '))
            time.sleep(4)
            print()
            print('As a Cleric you have 2 move to start, ' + cleM1 +' and '+ cleM2 + '.')
            print()
            print(cleM1 + 'is your basic attack which steals the enemy\'s health and returns it to you.')
            print()
            print(cleM2 + 'is a healing move.')
            print()
            print('You have ' +cleHP+ ' health.')
            time.sleep(4)
            break
    
        if confirm1 == 'no':
            print()
#choose first location and fight
def chooseLocation1():
    homeLocation = ''
    while homeLocation != 'tavern' and homeLocation != ' Tavern' and homeLocation !='Diner' and homeLocation != 'diner' and homeLocation != 'barn' and homeLocation !='Barn':
        homeLocation = input('Where would you like to investigate? ')
        
    return homeLocation

def checkLocation(chosenLocation):
    monster = random.randint(1, 20)
    if chosenLocation == 'diner' or chosenLocation == 'Diner' :
        print()
        if monster > 10:
            print('You slowly approach the diner, you peer into the windows...')
            enemy = 'goblin'
            print('you see a ' + enemy + '.')
        else:
            enemy = 'Knight'
            print('You slowly approach the diner, you peer into the windows to see a ' + enemy + '.')
    if chosenLocation == 'barn' or chosenLocation == 'Barn' :
        print()
        if monster > 9:
            enemy = 'Knight'
            print('You slowly approach the barn,...')
            print('you see a ' + enemy + ' attacking a farmer.')
        else:
            enemy = 'goblin'
            print('You slowly approach the barn, a' + enemy + ' attacking a farmer.')
    if chosenLocation == 'tavern' or chosenLocation == 'Tavern' :
        print()
        if monster > 9:
            print('You slowly approach the tavern, you bust open the door and...')
            enemy = 'goblin'
            print('you see a ' + enemy + 'robbing the place .')
        else:
            enemy = 'Knight'
            print('You slowly approach the tavern, you peer into the windows to see a ' + enemy + 'robbing the place.')
    return enemy
def mainattackV():
    attack =input ('What attack would you like to use?')
    mattackV = [vkM1, vkM2]
    print(mattackV+ ':')
    if attack == 'Double Cut':
      print('You use ' +mattackV[0])
    elif attack == 'Beserk':
      print('You use ' +mattackV[1])
    return attack
def mainattackMk():
    attack =input ('What attack would you like to use?')
    mattackMk = [mkM1, mkM2]
    print(mattackV+ ':')
    if attack == mkM1:
      print('You use ' +mattackMk[0])
    elif attack == mkM2:
      print('You use ' +mattackMk[1])
    return attack
def mainattackCle():
    attack =input ('What attack would you like to use?')
    mattackCle = [cleM1, cleM2]
    print(mattackV+ ':')
    if attack == cleM1:
      print('You use ' +mattackCle[0])
    elif attack == cleM2:
      print('You use ' +mattackCle[1])
    return attack
    

print()
print('You are currently in your hometown of Illegend, there are some of Yabuta Basho soliders here. Get rid of them to free you town!')
print()
time.sleep(3)
print('You here the yelling from the tavern, barn, and diner.')
chosenLocation = chooseLocation1()
checkLocation(chosenLocation)
checkLocation = enemy1


