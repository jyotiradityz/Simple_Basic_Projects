import random

print("Welcome to Number Guessing game")
print("Select your Number")
num=random.randint()%100+1;
guess=int(input())
cnt=0;
while(num!=guess):
    if(num>guess):
        print("Number is quite greater than you thought")
    else:
       print("Number is quite smaller than you thought")
    guess=int(input())
    cnt+=1  
print("You Guessed it ryt in "+cnt+" Attempts")         
