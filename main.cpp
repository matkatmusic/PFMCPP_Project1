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
//  Noun:    drummer
//  action 1: drummer creates fills
drummer.createFills();
//  action 2: drummer kick the bass drum
drummer.kickBassDrum();
//  action 3:drummer hit the snare drum
drummer.hitSnareDrum();
//  2)
//  Noun:    pianist
//  action 1: pianist plays notes
pianist.playNotes();
//  action 2: pianist plays chords
pianist.playChords();
//  action 3: pianist improvises
pianist.improvise();
//  3)
//  Noun:    guitarist
//  action 1: guitarist sweeps
guitarist.sweep();
//  action 2: guitarist tunes
guitarist.tune();
//  action 3: guitarist tweak pedals
guitarist.tweakPedals();
//  4)
//  Noun:    bassist
//  action 1: bassist plays root notes
bassist.playRootNotes();
//  action 2: bassist grooves
bassist.groove();
//  action 3: bassist slaps
bassist.slap();
//  5)
//  Noun:    singer
//  action 1: singer harmonizes
singer.harmonize();
//  action 2: singer swings
singer.swing();
//  action 3: singer transposes
singer.transpose();
//  6)
//  Noun:    plant
//  action 1: plant absorbs water
plant.absorbWater();
//  action 2: plant absorbs sunlight
plant.absorbSunlight();
//  action 3: plant releases oxygen
plant.releaseOxygen();
//  7)
//  Noun: dog
//  action 1: dog barks
dog.bark();
//  action 2: dog wags tail
dog.wagTail();
//  action 3: dog licks
dog.lick();
//  8)
//  Noun:    cat
//  action 1: cat jumps
cat.jump();
//  action 2: cat purrs
cat.purr();
//  action 3: cat scratches
cat.scratch();
//  9)
//  Noun:    longboardDancer
//  action 1: longboardDancer pushes and carves
longboardDancer.pushAndCarve();
//  action 2: longboardDancer crosses steps
longboardDancer.crossSteps();
//  action 3: longboardDancer practices pirouettes
longboardDancer.practicePirouettes();    
//  10)
//  Noun:    fish
//  action 1: fish swims
fish.swim();
//  action 2: fish dives
fish.dive();
//  action 3: fish flops
fish.flop();
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
