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
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: athlete

//  action 1: the athlete runs
athlete.run();

//  action 2: the athlete jumps
athlete.jump();
    
//  action 3: the athlete rests
athlete.rest();

    
//  2)
//  Noun: eye
    
//  action 1: eyes blink
eye.blink();

//  action 2: eyes produce tears
    
eye.cry();

//  action 3: eyes stare into something

eye.stare();
    

//  3)
//  Noun: Calculator
    
//  action 1: Calculator adds numbers
calculator.add();
    
//  action 2: Calculator enters into radian mode
calculator.switchToRadian();

//  action 3: Calculator powers off
calculator.shutDown();

//  4) 
//  Noun: programmer 
    
//  action 1: the programmer writes code
programmer.writeCode();
    
//  action 2: the programmer debugs the code
programmer.debug();
    
//  action 3: the programmer reviews the code
programmer.review();

//  5)
//  Noun: ipod
//  action 1: ipod plays songs
ipod.playMusic();

//  action 2: ipod shuffles the playlist
ipod.shufflePlaylist();

//  action 3: ipod changes volume
ipod.adjustVolume();

//  6)
//  Noun: teeth
//  action 1: using teeth to bite
teeth.bite();

//  action 2: using teeth to smile
teeth.smile();

//  action 3: using teeth to chew things
teeth.chew();

//  7)
//  Noun: grandmother
//  action 1: grandmother cooks
grandmother.cook();

//  action 2: grandmother prays
grandmother.pray();

//  action 3: grandmother watches tv
grandmother.watchTv();

//  8)
//  Noun: lion
    
//  action 1: the lion hunts
lion.hunt();

//  action 2: the lion sleeps
lion.sleep();

//  action 3: the lion roars
lion.roar();

//  9) 
//  Noun: Rick Astley
//  action 1: Rick Astley gives you up
rickAstley.giveYouUp();

//  action 2: Rick Astley lets you down 
rickAstley.letYouDown();

//  action 3: Rick Astley runs around and deserts you
rickAstley.runAroundAndDesertYou();

//  10)
//  Noun: Cyberaktiv
//  action 1: Cyberaktiv learns c++
cyberaktiv.learnCpp();

//  action 2: Cyberaktiv reads documentation 
cyberaktiv.readDocu();

//  action 3: Cyberaktiv asks for help 
cyberaktiv.seekHelp();

#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left,
 entering a message, and click [Commit and push].

 If you didn't already:
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single
 message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main() {
  std::cout << "good to go" << std::endl;
  return 0;
}
