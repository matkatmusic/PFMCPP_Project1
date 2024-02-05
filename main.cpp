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
//  Noun:        person
//  action 1:    the person walks forward
person.walkForward();
//  action 2:    the person runs
person.run();
//  action 3:    the person stops
person.stops();
//  2)
//  Noun:        lion
//  action 1:    the lion roars
lion.roar();
//  action 2:    the lion hunts
lion.hunt();
//  action 3:    the lion eats
lion.eat();
//  3)
//  Noun:        cat
//  action 1:    the cat meows
cat.meow();
//  action 2:    the cat plays
cat.play();
//  action 3:    the cat naps
cat.nap();
//  4)
//  Noun:        dog
//  action 1:    the dog barks
dog.bark();
//  action 2:    the dog wags its tail
dog.wagTail();
//  action 3:    the dog naps
dog.nap();
//  5)
//  Noun:        car
//  action 1:    the cars engines start
car.startEngine();
//  action 2:    the car consumes gas
car.consumeGas();
//  action 3:    the car stops
car.stop();
//  6)
//  Noun:        refrigerator
//  action 1:    the refrigerator keeps food cold
refrigerator.keepFoodCold();
//  action 2:    the refrigerator consumes electricity
refrigerator.consumeElectricity();
//  action 3:    the refrigerator stops
refrigerator.stop();
//  7)
//  Noun:        spider
//  action 1:    the spider spins web
spider.spinWeb()
//  action 2:    the spider eats
spider.eat();
//  action 3:    the spider rests
spider.rest();
//  8)
//  Noun:        bird
//  action 1:    the bird flies
bird.fly();
//  action 2:    the bird eats
bird.eat();
//  action 3:    the bird sleeps
bird.sleep();
//  9)
//  Noun:        bee
//  action 1:    the bee buzzes
bee.buzz();
//  action 2:    the bee pollenates
bee.pollenate();
//  action 3:    the bee rests
bee.rest();
//  10)
//  Noun:        bat
//  action 1:    the bat flies
bat.fly();
//  action 2:    the bat eats
bat.eat();
//  action 3:    the bat sleeps
bat.sleep();


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
