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
//  Noun:mixer
//  action 1: the mixer recieves audio input 
mixer.recievesAudioInput();

//  action 2: the mixer sends audio output 
mixer.sendsAudioOutput();

//  action 3:the mixer displays audio levels
mixer.displaysAudioLevels();


//  2)
//  Noun:car
//  action 1:the car stops
car.stop();

//  action 2:the car beeps
car.beep();
//  action 3:the car idles
car.idle();

//  3)
//  Noun:flower
//  action 1:the flower blooms
flower.bloom();

//  action 2:the flower grows
flower.grow();

//  action 3:the flower dies
flower.die();

//  4)
//  Noun:dog
//  action 1:the dog barks
dog.bark();

//  action 2:the dog jumps
dog.jump();

//  action 3:the dog runs
dog.run();

//  5)
//  Noun:bee
//  action 1:the bee flies
bee.fly();
//  action 2:the bee stings
bee.sting();
//  action 3:the bee lands
bee.land();

//  6)
//  Noun:virus
//  action 1:the virus attacks
virus.attack();

//  action 2:the virus reproduces
virus.reproduce();

//  action 3:the virus spreads
virus.spread();

//  7)
//  Noun:function
//  action 1:the function recieves data
function.recieve();

//  action 2:the function processes data
function.process();
//  action 3:the function sends data
function.send();

//  8)
//  Noun:earth
//  action 1:the earth orbits the sun
earth.orbit();
//  action 2:the earth spins
earth.spin();

//  action 3:the earth inhabits people
earth.inhabit();
//  9)
//  Noun:turntable
//  action 1:the turntable spins
turntable.spin();
//  action 2:the turntable outputs sound
turntable.output();

//  action 3:the turntable scratches the record
turntable.scratch();

//  10)
//  Noun:hard drive
//  action 1:the hard drive stores data
hardDrive.store();
//  action 2:the hard drive encrypts data
hardDrive.encrypt();
//  action 3:the hard drive spins
hardDrive.spins();



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
