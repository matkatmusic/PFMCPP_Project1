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
//  Noun:        pickup
//  action 1:    the pickup hums
pickup.hum();
//  action 2:    the pickup vibrates
pickup.vibrate();
//  action 3:    the pickup generates a signal
pickup.generateSignal();
//  2)
//  Noun:        signal
//  action 1:    the signal travels
signal.travel();
//  action 2:    the signal oscillates
signal.oscillate();
//  action 3:    the signal encodes
signal.encode();
//  3)
//  Noun:        amplifier
//  action 1:    the amplifier amplifies
amplifier.amplify();
//  action 2:    the amplifier distorts
amplifier.distort();
//  action 3:    the amplifier saturates
amplifier.saturate();
//  4)
//  Noun:        clock
//  action 1:    the clock ticks
clock.tick();
//  action 2:    the clock counts    
clock.count();
//  action 3:    the clock resets
clock.reset();
//  5)
//  Noun:        dsp
//  action 1:    the dsp processes
dsp.process();
//  action 2:    the dsp filters
dsp.filter();
//  action 3:    the dsp delays
dsp.delay();
//  6)
//  Noun:        display
//  action 1:    the display renders
display.render();
//  action 2:    the display refreshes
display.refresh();
//  action 3:    the display flickers
display.flicker();
//  7)
//  Noun:        pixel
//  action 1:    the pixel lights up
pixel.lightUp();
//  action 2:    the pixel dims
pixel.dim();
//  action 3:    the pixel changes color
pixel.changeColor();
//  8)
//  Noun:        resistor
//  action 1:    the resistor resists
resistor.resist();
//  action 2:    the resistor heats up
resistor.heatUp();
//  action 3:    the resistor burns out
resistor.burnOut();
//  9)
//  Noun:        capacitor
//  action 1:    the capacitor stores energy
capacitor.storeEnergy();
//  action 2:    the capacitor discharges
capacitor.discharge();
//  action 3:    the capacitor leaks
capacitor.leak();
//  10)
//  Noun:        transformer
//  action 1:    the transformer transforms
transformer.transform();
//  action 2:    the transformer hums
transformer.hum();
//  action 3:    the transformer gets hot
transformer.getHot();
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
