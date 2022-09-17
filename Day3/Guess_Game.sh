#!/usr/bin/env/ bash

#"cerner_2^5_2022"
#"cerner_2tothe5th_2022"

# Guessing Game
echo x-x-x-x-x-x-x----Welcome to the Game----x-x-x-x-x-x-x-x
echo 
COMPUTER=50       
PLAYING=0         
while [ $PLAYING -eq 0 ]   
do
         read -p "What is your guess = " INPUT
         if [ $INPUT -eq $COMPUTER ]
         then
                  echo "You are won the game, The Number was $COMPUTER"
                  exit 0
         elif [ $INPUT -lt $COMPUTER ]
         then
                  echo "You are too low"       
         else
                  echo "You are too high"
         fi
done
exit 0