import random

#insira seu DRE aqui
dre = 117093196

random.seed(dre)

ez = ["ez rop","ez shellcode","ez buffoverflow","classic ret2libc"]
medium=["midnightSunctf 2020 quals - pwn2","defcon2019 speedrun 1","defcon2019 speedrun 2","defcon2019 speedrun 3","defcon2019 speedrun 4","defcon2019 speedrun 5"]


tag1 = random.randint(0,3)

print(f"tag Ezs = {ez[tag1]}")

tag2 = random.randint(0,3)
while tag2==tag1:
    tag2 = random.randint(0,3)


print(f"tag Ezs = {ez[tag2]}")

tag3 = random.randint(0,5)
print(f"tag medium = {medium[tag3]}")
