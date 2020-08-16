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
//  Noun:Phone
//  action 1: the phone rings
phone.ring()
//  action 2: the phone makes a call
phone.makeCall()
//  action 3: the phone answers the call
phone.answerCall()

//  2)
//  Noun: Dog
//  action 1: the dog barks
dog.barks()
//  action 2: the dog rolls on the floor
dog.rollOnTheFloor()
//  action 3: the dog plays fetch
 dog.playFetch()

//  3)
//  Noun: Musician
//  action 1: the musician plays a chord
musician.playChord()
//  action 2: the musician plays a note
musician.playNote()
//  action 3: the musician stops playing
musician.stopPlaying()

//  4)
//  Noun: Programmer
//  action 1: the programmer begins typing
programmer.beginTyping()
//  action 2: the programmer stops typing
programmer.stopTyping()
//  action 3: the programmer fixes an error
programmer.fixError() 

//  5)
//  Noun: Metronome
//  action 1: metronome starts playing
metronome.startPlaying()
//  action 2: metronome tempo increases
metronome.increaseTempo()
//  action 3: metronome tempo decreases

 
//  6)
//  Noun:
//  action 1:

//  action 2:

//  action 3:
 
//  7)
//  Noun:
//  action 1:

//  action 2:

//  action 3:
 
//  8)
//  Noun:
//  action 1:

//  action 2:

//  action 3:
 
//  9)
//  Noun:
//  action 1:

//  action 2:

//  action 3:
 
//  10)
//  Noun:
//  action 1:

//  action 2:

//  action 3:
 


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
