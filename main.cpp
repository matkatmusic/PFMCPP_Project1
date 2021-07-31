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
//  Noun: mic
//  action 1: the mic transduce waves
mic.transduce();
//  action 2: the mic receive power
mic.receivePh();
//  action 3: the mic generate signal
mic.generateSig();
//  2)
//  Noun: preamp
//  action 1: the preamp sends 48V
preamp.sendPh();
//  action 2: the preamp amplify signal
preamp.gain();
//  action 3:
preamp.hpf(); 
//  3)
//  Noun: adc
//  action 1: the adc filter audio
adc.filter();
//  action 2: the adc samples audio
adc.sample();
//  action 3: the adc quantize samples
adc.quantize();
//  4)
//  Noun: daw
//  action 1: the daw get audio channels
daw.recChannels();
//  action 2: the daw host plugins
daw.loadPlugins();
//  action 3: the daw mix channels
daw.mixeChannels();
 
//  5)
//  Noun: keyboard
//  action 1: the keyboard send MIDI
keyboard.sendMidi();
//  action 2: the keyboard receive MIDI
keyboard.receiveMidi();
//  action 3: the keyboard thru MIDI
keyboard.thruMidi();
//  6)
//  Noun: eqProcessor
//  action 1: the eq lpf audio
eqProcessor.lpf();
//  action 2: the eq bpf audio
eqProcessor.bpf();
//  action 3: the eq hpf audio
eqProcessor.hpf(); 
//  7)
//  Noun: compressorProcessor
//  action 1: the compressor analize level
compressorProcessor.analRms;
//  action 2: the compressor compare level
compressorProcessor.compareThd;
//  action 3: the compressor reduce gain
compressorProcessor.reduceGain;
//  8)
//  Noun: reverbProcessor
//  action 1: the reverb delays audio
reverbProcessor.predelay();
//  action 2: the reverb diffuse audio
reverbProcessor.diffuse();
//  action 3: the reverb filter audio
reverbProcessor.damping();
//  9)
//  Noun: amplifier
//  action 1: the amp receive line level
amplifier.lineIn();
//  action 2: the amp amplify line level
amplifier.gain();
//  action 3: the amp moves speakers 
amplifier.feedSpeakers();
//  10)
//  Noun: speaker
//  action 1: the speaker moves forward
speaker.movesForward();
//  action 2: the speaker moves backward
speaker.movesBackward();
//  action 3: the speaker distort
speaker.distort();


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
