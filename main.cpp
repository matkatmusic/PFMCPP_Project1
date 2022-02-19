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
//  Noun: recorder
//  action 1: set sample rate
recorder.setSampleRate();
//  action 2: set bit rate
recorder.setBitRate();
//  action 3: select channel
recorder.selectChannel();
//  2)
//  Noun: human
//  action 1: eat
human.eat();
//  action 2: sleep
human.sleep();
//  action 3: write
human.write();
//  3) 
//  Noun: reverb
//  action 1: choose ir data
reverb.chooseIR();
//  action 2: set wet amount
reverb.setWetAmount();
//  action 3: set distance
reverb.setDistance();
//  4)
//  Noun: audio channel 1
//  action 1: import file
channel1.importFile();
//  action 2: solo
channel1.Solo();
//  action 3: record sound
channel1.recSound();
//  5)
//  Noun: washing machine
//  action 1: set quick wash
washer.setQuickWash();
//  action 2: set cottons
washer.setCottons();
//  action 3: stop washing
washer.stopWashing();
//  6) 
//  Noun: browser
//  action 1: add new tab
browser.newTab();
//  action 2: refresh page
browser.refresh();
//  action 3: close window
browser.closeWindow();
//  7) 
//  Noun: bluetooth device
//  action 1: sand a file
bt.sendFile();
//  action 2: receive a file
bt.receiveFile();
//  action 3: pair device
bt.pairDevice();
//  8)
//  Noun: limiter
//  action 1: attack time
limiter.attackTime();
//  action 2: hold
limiter.hold();
//  action 3: limit
limiter.setLimit();
//  9)
//  Noun: midi keyboard
//  action 1: get note number
midi.getNoteNumber();
//  action 2: get pitch wheel value
midi.getPitchWheelValue();
//  action 3: control number
midi.getControllerNumber();
//  10)
//  Noun: gain
//  action 1: set gain decibels
gain.setGainDecibel();
//  action 2: set gain linear
gain.setGainLinear();
//  action 3: set ramp duration seconds 
gain.setRampDurationSeconds();


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
