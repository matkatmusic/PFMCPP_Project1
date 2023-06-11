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
//  Noun: athlete
//  action 1: an athlete trains in the gym.
athlete.trains();
//  action 2: an athlete competes in sporting events.
athlete.competes();
//  action 3: an  athlete maintains a healthy lifestyle such as good nutrition and rests.
athlete.eatsHealthy();

//  2)
//  Noun: farmer
//  action 1: a farmer harvests crops.
farmer.harvest();
//  action 2: a farmer raises livestock.
farmer.raises();
//  action 3: a farmer manages a farm operations.
farmer.manages();

//  3)
//  Noun: Musician
//  action 1: a musician plays an instrument
musician.playsInstrument();
//  action 2: a musician composes music
musician.composesMusic();
//  action 3: a musician perfroms in concerts.
musician.performsConcerts();

//  4)
//  Noun: Gardener
//  action 1: a gardener plants flowers
gardener.plantsFlowers();
//  action 2: a gardener maintains a garden
gardener.maintainsGarden();
//  action 3: a gardener controls pests to help plants grow
gardener.controlsPest();

//  5)
//  Noun: Surgeon 
//  action 1: a surgeon performs surgical procedures
surgeon.performsSurgeries();
//  action 2: a surgeon diagnoses medical conditions.
surgeon.diagnoses();
//  action 3: a surgeon provides patient care.
surgeon.providesCare();

//  6)
//  Noun: Driver
//  action 1: operates a vehicle
driver.operatesVehicle();
//  action 2: navigates routes
driver.navigatesRoutes();
//  action 3: transports goods
driver.transportsGoods();

//  7)
//  Noun: Engineer
//  action 1: designs structures
engineer.designsStructures();
//  action 2: solves problems
engineer.solvesproblems();
//  action 3: collaborates with a team
engineer.collaborates();

//  8)
//  Noun: Detective
//  action 1: investigates crimes
detective.investigates();
//  action 2: gathers evidence
detective.gathersEvidenc();
//  action 3: develops theories
detective.developsTheories();

//  9)
//  Noun: Writer
//  action 1: writes books
writer.writesBooks();
//  action 2: conducts research
writer.conductsResearch();
//  action 3: edits and revises their work
writer.edits();

//  10)
//  Noun: Actor
//  action 1: performs in movies and television shows
actor.performs();
//  action 2: rehearses scenes
actor.rehearses();
//  action 3: collaborates with other actors
actor.collaborates();



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
