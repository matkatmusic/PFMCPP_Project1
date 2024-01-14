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
//  Noun: monster
//  action 1: the monster attacks
monster.attack();
//  action 2: the monster eats
monster.eat();
//  action 3: the monster dances
monster.attack();
    
//  2)
//  Noun: television
//  action 1: the television plays a movie
television.playMovie();
//  action 2: the television consumes power
television.consumePower();
//  action 3: the television syncs with a bluetooth device
television.syncWithBluetoothDevice();
    
//  3)
//  Noun: saw
//  action 1: the saw cuts wood
saw.cutWood();
//  action 2: the saw makes noise
saw.makeNoise();
//  action 3: the saw inspires fear
saw.inspireFear();
    
//  4)
//  Noun: human
//  action 1: the human puts on gloves
human.putOnGloves();
//  action 2: the human cook a ham
human.cookHam();
//  action 3: the human buys a papaya
human.buyPapaya();

//  5)
//  Noun: engine
//  action 1: the engine rotates
engine.rotate();
//  action 2: the engine burns fuel
engine.burnFuel();
//  action 3: the engine makes noise
engine.makeNoise();

//  6)
//  Noun: baby
//  action 1: the baby cries
baby.cry();
//  action 2: the baby crawls
baby.crawl();
//  action 3: the baby spits up
baby.spitUp();

//  7)
//  Noun: boss
//  action 1: The boss hires
boss.hire();
//  action 2: the boss fires
boss.fire();
//  action 3: the boss sleeps
boss.sleep();

//  8)
//  Noun: baker
//  action 1: the baker kneads
baker.knead();
//  action 2: the baker bakes
baker.bake();
//  action 3: the baker eats
baker.eat();

//  9)
//  Noun: crocodile
//  action 1: the crocodile swims
crocodile.swim();
//  action 2: the crocodile walks
crocodile.walk();
//  action 3: the crocodile watches the news
crocodile.watchNews();

//  10)
//  Noun: machine
//  action 1: the machine whirls
machine.whirl();
//  action 2: the machine glows
machine.glow();
//  action 3: the machine rumbles
machine.rumble();


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
