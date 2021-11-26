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
//  Noun: bicycle
//  action 1: the bicycle rides
bicycle.ride();
//  action 2: the bicycle flies
bicycle.fly();
//  action 3: the bicycle dings its bell
bicycle.bells();

//  2)
//  Noun: lavalamp
//  action 1: lavalamp is turned ON
lavalamp.on();
//  action 2: lavalamp rotates
lavalamp.rotate();

//  action 3: lavalamp plays music
lavalamp.music();

//  3)
//  Noun: Oven
//  action 1: Oven needs cleaning
oven.needsCleanin();

//  action 2: Oven makes buns
oven.makesBuns();

//  action 3: Oven light is broken
oven.lightBroken();

//  4)
//  Noun: Ganesha
//  action 1: Ganesha needs an offering
ganesha.needsOffering();

//  action 2: Ganesha grants you infinte awesome because you offered
ganesha.grantsAwesome();

//  action 3: Ganesha rubs belly
ganesha.rubsBelly();

//  5)
//  Noun: Plants
//  action 1: Plants needs watering
plants.needsWatering();

//  action 2: Plants photosynthesize
plants.photosynthesis();

//  action 3: Plants dances
plants.dances();

//  6)
//  Noun: Book on designing audio plugins
//  action 1: Book on designing audio plugins teaches me stuff
bookOnDesigningAudioPlugins.teaches();

//  action 2: Book on designing audio plugins is bookOnDesigningAudioPlugins.isOpen();

//  action 3: Book on designing audio plugins is lost
bookOnDesigningAudioPlugins.isLost();

//  7)
//  Noun: YouTube
//  action 1: YouTube plays music
youtube.playsMusic();

//  action 2: YouTube plays annoying add
youtube.playsAnnoyingAdd();

//  action 3: YouTube asks for Premium membership level
youtube.askForPremium();

//  8)
//  Noun: Synthesizer
//  action 1: Synthesizer makes hits
synthesizer.makesHits();

//  action 2: Synthesizer needs tuning
synthesizer.needsTuning();

//  action 3: Synthesizer arpeggio mode ON
syntheiszer.arpModeON();

//  9)
//  Noun: Appartment
//  action 1: Appartment houses a party
appartment.hostsParty();

//  action 2: Appartment needs cleaning
appartment.needsCleaning();

//  action 3: Appartment is for sale
appartment.forSale();

//  10)
//  Noun: Bed
//  action 1: Bed is calling for sleep
bed.callsForSleep();

//  action 2: Bed is made
bed.isMade();

//  action 3: Bed grants wonderful dreams and refreshing sleep
bed.gransSleepAndWonders();



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
