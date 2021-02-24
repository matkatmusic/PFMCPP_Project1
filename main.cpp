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
//  Noun: sun
//  action 1: the sun heats earth
sun.heatEarth();

//  action 2: the sun shines bright
sun.shineBright();


//  action 3: the sun sets
sun.set();

//  2)
//  Noun: apple
//  action 1: apple ripens
apple.ripen(); 

//  action 2: apple falls
apple.fall();

//  action 3: apple rots
apple.rot();
 
//  3)
//  Noun: traffic
//  action 1: traffic disperses
traffic.disperse();

//  action 2: traffic flows steadily
traffic.flowSteadily();

//  action 3: traffic heats the road
traffic.heatRoad();
 
//  4)
//  Noun: kid
//  action 1:  kid wakes up parents
kid.wakeParents();

//  action 2: kid walks to school
kid.walkToSchool();

//  action 3: kid refuses to listen
kid.refuseToListen();
 
//  5)
//  Noun: lion
//  action 1: a lion roars
lion.roar();
//  action 2: a lion hunts
lion.hunt();
//  action 3: a lion eats
lion.eat();
 
//  6)
//  Noun: earth
//  action 1: earth rotates
earth.rotate();
//  action 2: contains atmosphere with gravity
earth.containAtmosphere();
//  action 3: earth waxes and wanes
earth.waxAndWane();
 
//  7)
//  Noun: snowflake
//  action 1: falls
snowflake.fall();
//  action 2: snowflake melts
snowflake.melt();
//  action 3: snowflake links with other snowflakes
snowflake.linkWithOtherSnowflakes();
 
//  8)
//  Noun: squirrel
//  action 1: gathers nuts
squirrel.gatherNuts();
//  action 2: squirel makes den
squirrel.makeDen();
//  action 3: squirrel hibernates
squirrel.hibernate();
 
//  9)
//  Noun: surgeon
//  action 1: surgeon assesses patient
surgeon.assessPatient();
//  action 2: surgeon plans operation
surgeon.planOperation();
//  action 3: surgeon performs operation
surgeon.perfomOperation();
 
//  10)
//  Noun: dog
//  action 1: dog pants
dog.pant();
//  action 2: dog runs
dog.run();
//  action 3: dog barks
dog.bark();
 


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
