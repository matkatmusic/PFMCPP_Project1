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
//  Noun: Animal
//  action 1: the animal drinks
a.drink()

//  action 2: the animal eats
a.eat()
//  action 3: the animal replicates
a.replicate()
//  2)
//  Noun: Automobile
//  action 1: the car speeds up
car.accelerate()

//  action 2: the car slows down
car.decelerate()

//  action 3: the car drifts 
car.drift()

//  3)
//  Noun: Musician
//  action 1: 
m.sing()

//  action 2: 
m.perform()

//  action 3: 
m.vibe()

//  4)
//  Noun: Instrument
//  action 1: instrument resonates
i.resonate()

//  action 2: instrument makes noise
i.makeNoise()

//  action 3: instrument ages with beauty
i.ageWithBeauty()

//  5)
//  Noun: Student
//  action 1: student parties
s.party()

//  action 2: student parties hard
s.partyHard()

//  action 3: student parties super hard
s.partySuperHard()

//  6)
//  Noun: Business
//  action 1: business exploits natural resources
b.exploitNaturalResources()

//  action 2: business helps local community
b.helpCommunity()

//  action 3: busyiness generates a net loss for tax purposes
b.generateNetLossForTaxPurposes()

//  7)
//  Noun: University
//  action 1: university covers up a scandal
u.coverUpScandal()

//  action 2: university accepts bribe from big pharma
u.acceptBribeFromBigPharma()

//  action 3: university honors the corporate elite under guise of philanthropy
u.honorCorporateEliteUnderGuiseOfPhilanthropy()

//  8)
//  Noun: Food
//  action 1: the food looks hot. nice and hot.
carrot.lookHot()

//  action 2: the food looks steamy
carrot.lookSteamy()

//  action 3: the food rots
carrot.rot()

//  9)
//  Noun: Computer
//  action 1: the computer computes
apple.compute()

//  action 2: the computer updates
apple.update()

//  action 3: the computer uninstalls a program
apple.uninstallProgram()

//  10)
//  Noun: SmartHome
//  action 1: the smart home adjusts the lighting 
nest.adjustLighting()

//  action 2: the smart home adjusts the temperature
nest.setTemperature()

//  action 3: the smart home emails your security footage to jeff bezos
nest.emailSecurityFootage()



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
