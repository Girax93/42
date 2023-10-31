## Guide to completing the so_long project.

First of all I use this minilibx version: \
https://github.com/codam-coding-college/MLX42#download-and-build---mlx42 \
It's a lot easier to use than the 42 version, and we're allowed to use this. \
If you read the .md files in the docs directory in that github, you'll find great documentation that helps a lot.

I then started out by watching this video: \
https://www.youtube.com/watch?v=bYS93r6U0zg \
It gave me a much better understanding of how things work \
Be aware that some of the stuff he does, like for loops etc, is not allowed for 42 students, just use the video for understanding minilibx. \

Then I read through the documentation from this incredible source: \
https://harm-smits.github.io/42docs/libs/minilibx

I then took a great deal of inspiration from this awesome implementation of so_long. \
https://github.com/erigolon/so_long/tree/master \
It is lacking the bonus, but I am using the same concept in my code for the bonus version. \
It's well organized so after reading through it I understand a lot more, and proceeded to make my own version from this.

### How to read the code
One thing I suggest reading into first, is how the structs works, and how they are connected. \
The "t_game" struct contains almost all the data the program uses for the game. \
Pointing to structs inside of a struct allows us to categorise our data much better.



### Readability

In this code I have used the following concepts to make it more readable:

* Function pointers
	- These are declared similarly to ones like this: \
	functionReturnType (* nameOfFunction)(int parameter1, char *paramter2); \
	(The return type has to be similar to the one you're pointing to. Name and parameter names can be changed). \
	then assign the function you want to the new function pointer: \
	nameOfFunction = some_other_fancy_function_you_want_to_rename;
* Struct pointers
	- I use these to avoid making cases like these appear all over the code: \
	struct->pointerToAnotherStruct->pointerToYetAnotherStruct->Pointer->Variable;
	- Instead it can look like this: \
	pointer_chain->Variable;
	- These are declared like this: \
	sameVariableAsTheLastChainedVariable	*pointer_chain. \
	name = struct->pointerToAnotherStruct->pointerToYetAnotherStruct->Pointer->Variable;

<br>
<br>

### Bonus

For the bonus we are allowed to use other external functions and tools, as long as it serves \
a purpose that makes sense for the game.

For this reason, I decided to write my own soundtrack and implement it into the game.
To implement/load the audio I have chosen to use the SDL Library (SDL & SDL_Mixer).
You will therefore find the following headers included:

<time.h>
<SDL2/SDL.h>
<SDL2/SDL_mixer.h>

These functions have of course not been used in the non-bonus version of this code, and resides \
only in the files with the appriate *_bonus.c ending. For that reason you need to compile the \
game with " make bonus " as usual for it to work.

### Artwork & Media

All the images (graphical elements) are made by me, and you have all the permission to reuse them should you want to.
If you want to make your own, it is super easy. (not gonna pretend my artwork is amazing here, but I personally like the style :) )
For the graphics, go to pixilart.com . Their website feels a bit wonky to navigate, but once you get the hang of it, it's super fun to make stuff.

For the soundtracks, I made a simple track in Cubase - but you can also find some royalty free music online if you want to have your own soundtrack(s).
PS! The audio is not necesarry for the bonus - I just added it because we can.

### GAME RULES:

In ./extra/game_rules.md , you'll find rules for how to complete the games/maps that this game (bonus) is supposed to run. Check it out!