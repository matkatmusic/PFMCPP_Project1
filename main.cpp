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

//noun




//  1)
//  Noun: dog
//  action 1: A dog barks


dog.bark();

//  action 2: A dog likes to play fetch
dog.playFetch();
//  action 3: A dog sniffs
dog.sniff();

//  2)
//  Noun: Cat
//  action 1: A cat purrs
cat.purr();


//  action 2: A cat may scratch furniture
cat.scratchFurniture();
//  action 3: Cats wag their tail
cat.wagTail();
//  3)
//  Noun: Laptop

//  action 1: A laptop can change the desktop background
laptop.changeDesktopBackground();

//  action 2: A laptop performs multiple tasks
laptop.performMultipleTasks();
//  action 3: A laptop saves files
laptop.saveFile();

//  4)
//  Noun: Fan
//  action 1: the fan rotates

fan.rotate();
//  action 2: the fan sets Speed
fan.setSpeed();

//  action 3: some fans can set a timer to turn off after a certain amount of time
fan.setTimer();
//  5)
//  Noun:watch
//  action 1: most smart watches these days can measure workout statistics 
watch.startWorkoutStatistics();
//  action 2: a watch updates time 
watch.updateTime();

//  action 3: a watch displays the date
watch.displayDate();

//  6) Bike
//  Noun:
//  action 1: a bike rotates its wheels
bike.rotateWheels();


//  action 2: a bike applies brakes
bike.applyBrakes();

//  action 3: a bike changes its gear
bike.changeGear();

//  7)
//  Noun:Headphones
//  action 1: headphones play music
headphones.playMusic();

//  action 2: some headphones can operate wirelessly through bluetooth
headphones.operateWirelessly();

//  action 3: some headphones can cancel ambient noise
headphones.cancelAmbientNoise();
//  8)
//  Noun: Thermostat
//  action 1: A thermostat sets the temperature();


thermostat.setTemperature();
//  action 2: A thermostat can heat the room
thermostat.heat();


//  action 3: A thermostat can cool the room
thermostat.cool();

//  9)
//  Noun: Person
//  action 1: a person walks
person.walk();
//  action 2: a person sits
person.sit();
//  action 3: a person eats food
person.eatFood();
//  10)
//  Noun: Coffee Machine
//  action 1: a coffee machine can make a cappuccino
coffeeMachine.makeCappuccino();
//  action 2: a coffee machine can make a latte
coffeeMachine.makeLatte();
//  action 3: a coffee machine can make lungo
coffeeMachine.makeLungo();


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
