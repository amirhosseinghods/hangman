﻿# hangman
Implementing Hangman game in c ++ language.
#Beginning:
The game starts with taking the player's name and a sentence is randomly selected from the available words.
And instead of each word of the word is placed the phrase "-".

# Enter the correct character in the field:

If the player enters a character that exists in the string, all the "-" corresponding to that character must be replaced and the player must be informed of the correct choice,
The player's current score is also displayed.

# Invalid and missing characters in the string:

If a player enters a character that is not in the field, a point must be deducted and a message must be displayed stating that the character does not exist.
The player score must also be displayed

# End of game:
After each entry of the character, it is checked whether the game is over or not! The game ends in two modes,
 1) That the score reaches zero due to wrong guesses
In which case we face a loss,

2) That before the score is zero, we can guess the whole sentence that the game will end in a win.

 # Victory:

If the player guesses all the characters and can replace all the "-" characters with a character, the game ends and he gets a message with the final score and the person's name.
Is displayed


# Failure:
If the player's score reaches zero after entering the character a few times, the game will end and a failure message will be displayed.

# Final score:
The final score is obtained according to the following function in which t is the time elapsed from the beginning of the game to the end and the score is the player's remaining score.

## ``` 𝑓𝑖𝑛𝑎𝑙𝑠𝑐𝑜𝑟𝑒 = 𝑠𝑐𝑜𝑟𝑒 ∗ 1000 / Log t ```

At the end of each game, a list of people's names with their points should be displayed
