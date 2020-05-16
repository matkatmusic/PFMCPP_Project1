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
//  Noun: oscilloscope
//  action 1: display frequency
oscope.freq();
//  action 2: display maximum amplitude
oscope.maxAmp();
//  action 3: display fall time
oscope.fallTime();
 
//  2)
//  Noun: computer user
//  action 1: enter user id
user.login();
//  action 2: enter password
user.pwd();
//  action 3: logout
user.logout();

//  3)
//  Noun: dog
//  action 1: dog runs
dog.run();
//  action 2: dog heels
dog.heel();
//  action 3: dog sits
dog.sit();

//  4)
//  Noun: Sam
//  action 1: hamburger needs salt
sam.salt();
//  action 2: hamurger needs pepper
sam.pepper();
//  action 3: hamburger need reheating
sam.reheat();

//  5)
//  Noun: rancher
//  action 1: purchase livestock
rancher.purchase();
//  action 2: feed and grow cows
rancher.feed();
//  action 3: ship to processing plant
rancher.ship();

//  6)
//  Noun: drummer
//  action 1: kick downbeat
drummer.kick(); // or 
drummer.downBeat(); // which is better??
//  action 2: snare for backbeat
drummer.snare(); // or 
drummer.backBeat(); pro/con
//  action 3: high hat 1/16 notes
drummer.highHat(); // or
drummer.sixteenths(); ?

//  7)
//  Noun: Sample Rate Converter (src)
//  action 1: get next sample
src.git();
//  action 2: perform decimation on filter buffer
src.decimate();
//  action 3: low pass filter the output
src.lowPass();

//  8)
//  Noun: Parametric EQ
//  action 1: decrease center frequency
EQ.f0_down();
//  action 2: increase Q
EQ.q_up();
//  action 3: gain -3 dB down
EQ.gain-3(); // or would it be EQ.gain(-3); ??

//  9)
//  Noun: Roadie named Big Henrietta
//  action 1: hook up speakers
Hen.connect();
//  action 2: test speakers
Hen.test();
//  action 3: tear down speakers
Hen.tearDown();

//  10)
//  Noun: Keith
//  action 1: play downstroke
keith.down();
//  action 2: re-tune a string
keith.retune();
//  action 3: look at Mick, then Charlie. Play nothing.
keith.look();
 


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
