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
//  Noun: cat
//  action 1: The cat purrs
cat.purrs();
//  action 2: The CatNaps
cat.sleeps();
//  action 3: The cat meows
cat.meows();
//  2)
//  Noun: dog
//  action 1: the dog barks
dog.barks();
//  action 2: the dog plays
dog.plays();
//  action 3: the dog naps
dog.sleeps();
//  3)
//  Noun: car
//  action 1: the car drives
car.drives();
//  action 2: the car stops
car.brakes();
//  action 3: the car honks
car.honksHorn;
//  4)
//  Noun: lightBulb
//  action 1: the lightBulb lights up
lightBulb.turnsOn();
//  action 2: the lightBulb turns off
lightBulb.turnsOff();
//  action 3: the lightBulb burns out
lightBulb.burnsOut();
//  5)
//  Noun: hammer
//  action 1: the hammer smashes
hammer.pounds();
//  action 2: the hammer breaks
hammer.breaks();
//  action 3: the hammer builds
hammer.builds();
//  6)
//  Noun: bike
//  action 1: the bike pedals
bike.pedals();
//  action 2: the bike slows down
bike.slowsDown()
//  action 3: the bike stops
bike.stops();
//  7)
//  Noun: phone
//  action 1: the phone rings
phone.calls();
//  action 2: the phone vibrates
phone.vibrates();
//  action 3: the phone plays music
phone.playsMusic();
//  8)
//  Noun: clock
//  action 1: the clock ticks
clock.ticks();
//  action 2: the clock tocks
clock.tocks();
//  action 3: the clock sets an alarm
clock.setsAlarm();
//  9)
//  Noun: Plant
//  action 1: The plant grows
plant.grows();
//  action 2: the plant blooms
plant.blooms();
//  action 3: the plant dies
plant.dies();
//  10)
//  Noun: river
//  action 1:
river.flows();
//  action 2:
river.floods();
//  action 3:
river.driesUp();
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
