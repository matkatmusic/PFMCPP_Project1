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
//  Noun: bike
//  action 1: the bike moves fast 
bike.moveFast();
//  action 2: the bike moves slowly
bike.moveSlow();
//  action 3: the bike is not moving
bike.moveNot()

    //  2)
//  Noun: bird
//  action 1: bird eat
bird.eat();
//  action 2: bird fly
bird.fly();
//  action 3: bird whistles
bird.whistles();

//  3)
//  Noun: synth
//  action 1: the synth makes soft sound
synth.soundSoft();
//  action 2: the synth makes sharp sound
synth.soundSharp();
//  action 3:the synth makes no sound
synth.soundNot();

//  3B)
//  Noun: synth
//  action 1: the synth makes soft sound, soft = 1;
synth.sound1();
//  action 2: the synth makes sharp sound, sharp = 2;
synth.sound2();
//  action 3:the synth makes no sound, no sound = 0;
synth.sound0();

//  4)
//  Noun: baby
//  action 1: the baby sleeps
baby.sleeps();
//  action 2: the baby eats
baby.eats();
//  action 3: the baby cries    
baby.cries();

//  5)
//  Noun: serve 
//  action 1: The serve was valid 
serve.valid();
//  action 2: The serve was invalid 
serve.invalid();
//  action 3: The serve was a serve-ess 
serve.serve-ess();

//  6)
//  Noun: medicine
//  action 1: the medicine had a positive effect
medicine.effectPoistive();
//  action 2: the medicine had a negative effect
medicine.effectNegative();
//  action 3: the medicine had no effect
medicine.effectNo_effect();

//  7)
//  Noun: table
//  action 1: the table was filled
table.filled();
//  action 2: the table was empty
table.empty();
//  action 3: the table was upside-down
table.upsideDown();

//  8)
//  Noun: steak
//  action 1: the steak was raw
steak.raw();
//  action 2: the steak was medium-rear
steak.mediumRear();
//  action 3: the steak was well-done
steak.wellDone();

//  9)
//  Noun: glass
//  action 1: the water glass was full
glass.full();
//  action 2: the water glass was empty
glass.empty();
//  action 3: the water glass was half full
glass.halfFull();

//  10) plane
//  Noun:
//  action 1: the plane was taking off
plane.takeOff();
//  action 2: the plane was landing
plane.landing();
//  action 3: the plane was taxiing
plane.taxi();



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
