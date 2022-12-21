# Sokoban_in_terminal

### A little game in your terminal !

You might have heard about the Sokoban game before, here is my version of it !

<ins> How to play :

  First, compile using Makefile (it'll compile with the * ncurses * library)
  Then put the binary and a map (I put an example of a map in the folder "map")
  
<ins> For example :
  > $> ./my_sokoban map/map_test.txt
  
  You'll get the map displayed in your terminal.
  
  #### Now, let's play
  
  You are the Player 'P' and you have to push Box 'X' in a specific place marked as 'O'.
  
  -> Use arrows to move, or "OKLM"

  -> if you wanna restart, press SPACE
  
  - if you put all 'X' on 'O', you win !
  - If you stuck all 'X', you lose...
  
  You can't push two 'X' if they are one next to the other, you'll have to separate them.
  
  ### Miscellaneous
    Maps have to be in .txt format, if not, it won't works.
   
