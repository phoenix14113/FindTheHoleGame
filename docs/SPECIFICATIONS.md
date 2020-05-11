# CPTR 142: Project III Specifications

The specifications outlines the project design specifications and project management.
This is done BEFORE CODING!

Here are the things to include in this codument.


 | Player | PlayGame | Menu | Board |
 | ------ | -------- | -----| ----- |
 | -name: string | +difficulty: int | +menu(): char | +printBoard(): void
 | -playerScore: int | +player: Player | +instructions(): void | +tempScore: int
 | +setScore(): void| +PlayGame: void   | +chooseDifficulty(): char | +boardLayout: vector<char>           
 | +getName(): string| +field: Board | +Menu():| +CheckPostition(): Bool
 | +setName(): void  |  +fetch(): char | |+getPlayerMove(): char
 +getScore(): int  |  +addToScore(): void    | |
  |      | | 
 | |          ||
                   

* Procedural Flow Diagram ____The logical flow of your program____

        menu

            instruction, difficulty, Playgame, quit

                if instruction is chosen --

                    prints the instructions to the game 

                    returns to the menu 

                if difficulty is chosen --

                    print the options for difficulties 

                    ask player for what difficulty they want 

                    return to the menu 

                if Playgame is chosen --

                    run game 

                    player completes level 

                    level speeds up 

                    play makes a mistake 

                    prints score 

                    returns to menu 

                if quit is chosen --

                    exits program 

* ___Anticipated challenges___ 
* Generating the level - randomizing functions
* Branching and comminting changes - please help us professor
* Printing the board correctly - we are looking up time commands
* Speeding up the board - again we are looking up time commands
* ___Project Management Plan___
  * Name __individual group member tasks/responsibilities__.
    Split up the tasks and implementation into portions per group member.

        Adam Taylor - Printing the board and making sure that the player's postion changes.
                      Also going to program the player class

        Kaden Fairchild - Timing and user movement input and clearing consol
    
        Jared Anderson - Designing menu's
    
        Joel Hartman - Level design



* __Timeline__ of individual and group delivery dates.
  
      Jared  - menu's first

      Adam - person class
  
      Joel - level design
  
      Kaden - user input
  
      Adam - printing board
    
      Kaden - timing
    
