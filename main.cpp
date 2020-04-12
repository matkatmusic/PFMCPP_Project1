#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
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
//  Noun:       Door
//  action 1:   the door opens
door.opens();
//  action 2:   the door closes
door.closes();
//  action 3:   the door slams
 door.slam();
//  2)
//  Noun:       Drum
//  action 1:   The drum rings
drum.rings();
//  action 2:   the drum vibrates
drum.vibrates();
//  action 3:   the drum breaks
 drum.breaks():
//  3)
//  Noun:       Dog
//  action 1:   the dog barks
dog.barks();
//  action 2:   the dog sleeps
dog.sleeps();
//  action 3:   the dog plays
 dog.plays();
//  4)
//  Noun:       Tree
//  action 1:   the tree grows
tree.grows();
//  action 2:   the tree sways
tree.sways();
//  action 3:   the tree blossoms
 tree.blossoms();
//  5)
//  Noun:       cup
//  action 1:   the cup leaks
cup.leaks();
//  action 2:   the cup breaks
cup.breaks();
//  action 3:   the cup melts
 cup.melts();
//  6)
//  Noun:       LoopPedal
//  action 1:   the LoopPedal loops
LoopPedal.loops();
//  action 2:   the LoopPedal records
LoopPedal.records();
//  action 3:   the LoopPedal erases
 LoopPedal.erase();
//  7)
//  Noun:       Piano
//  action 1:   the piano sounds
piano.sounds();
//  action 2:   the piano closes
piano.close();
//  action 3:   the piano opens
 piano.open();
//  8)
//  Noun:       Arizona
//  action 1:   arizona votes
arizona.votes();
//  action 2:   arizona sweats
arizona.sweats();
//  action 3:   arizona dries
 arizona.dries();
//  9)
//  Noun:       Marimba
//  action 1:   the marimba rings
marimba.rings();
//  action 2:   the marimba is struck
marimba.struck();
//  action 3:   the marimba breaks
 marimba.break();
//  10)
//  Noun:       Shaker
//  action 1:   the shaker shakes
shaker.shake();
//  action 2:   the shaker is silenced
shaker.silence();
//  action 3:   the shaker is louder
 shaker.louder();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
