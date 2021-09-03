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
//  Noun: Filter
//  action 1: Boosts frequencies
filter.boost();
//  action 2: Cuts frequencies
filter.cut();
//  action 3: Resonates
 filter.resonance();
//  2) 
//  Noun: Musician
//  action 1: Performs
musician.perform();
//  action 2:Practice
musician.practise();
//  action 3:Drinks
 musician.drink();
//  3) 
//  Noun:Amp
//  action 1: Amplifies 
amp.amplify();
//  action 2: Makes noise
amp.noise();
//  action 3:Causing a feedback loop
 amp.feedback();
//  4)
//  Noun:String
//  action 1: Vibrates
string.vibrate();
//  action 2:Expands
string.expand();
//  action 3:Breaks
string.break();
//  5)
//  Noun:Disc jockey
//  action 1:Pushing button
dj.pushButton();
//  action 2:Cues a track
dj.cue();
//  action 3:Dances
 dj.dance();
//  6)
//  Noun:Conductor
//  action 1:holds the tempo
conductor.tempo();
//  action 2:starts the music
conductor.start();
//  action 3:stops the music
 conductor.stop();
//  7)
//  Noun:Audience
//  action 1:Listens
audience.listen();
//  action 2:Shouts
audience.shout();
//  action 3:Applauding
 audience.applaud();
//  8)
//  Noun:Manager
//  action 1:plans events
manager.planEvent();
//  action 2:Promotes artists
manager.promote();
//  action 3:Finding new artists
 manager.findArtist();
//  9)
//  Noun:Music producer
//  action 1:Composes music
mp.compose();
//  action 2:Records music
mp.record();
//  action 3:Uploads music to the world
 mp.upload();
//  10)
//  Noun:Synth
//  action 1:Generates sound
synth.generate();
//  action 2:Simulate instruments
synth.simulate();
//  action 3:Consumes energy
synth.consumeEnergy();

 


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
