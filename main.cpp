#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates CamelCase


//  1)
//  Noun:    guitar
//  action 1:    strum the guitar
guitar.strum();
//  action 2:    tweak the guitar
guitar.tweak();
//  action 3:    tune the guitar
guitar.tune();
//  2)          
//  Noun:    tree
//  action 1:    trim the tree
tree.trim();
//  action 2:    climb the tree
tree.climb();
//  action 3:    pour water on tree
tree.pourWater();
//  3)
//  Noun:    car
//  action 1:    drive car
car.drive();
//  action 2:    repair car
car.repair();
//  action 3:    wreck the car
car.wreck();
//  4)
//  Noun:    keyboard
//  action 1:    press key on the keyboard
keyboard.pressKey();
//  action 2:    clean keyboard
keyboard.clean();
//  action 3:    smash keyboard
keyboard.smash();
//  5)
//  Noun:    glasses
//  action 1:    wear glasses
glasses.wear();
//  action 2:    prescribe glasses
glasses.prescribe();
//  action 3:    fold glasses
glasses.fold();
//  6)
//  Noun:    cat
//  action 1:    pet the cat
cat.pet();
//  action 2:    feed the cat
cat.feed();
//  action 3:    name the cat
cat.name();
//  7)    
//  Noun:     potato
//  action 1:    wash the potato
potato.wash();
//  action 2:    slice potato
potato.slice();
//  action 3:    cook potato
potato.cook();
//  8)
//  Noun:    Bass  
//  action 1:    play the bass
bass.play();
//  action 2:    tune the bass
bass.tune();
//  action 3:    drop the bass
bass.drop();
//  9)
//  Noun:    bird
//  action 1:    the bird bathes
bird.bathes();
//  action 2:    bird eats
bird.eats();
//  action 3:    the bird flys
bird.flys();
//  10)
//  Noun:    wheel
//  action 1:    the wheel rotates
wheel.rotates();
//  action 2:    turn the wheel
wheel.turn();
//  action 3:    inflated the wheel
wheel.inflate();


#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
