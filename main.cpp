#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    e
 
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
 
 5) When you finish, commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].

Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
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
//  Noun:       car   
//  action 1:   the car drives
car.drive();
//  action 2:   the car parks
car.park();
//  action 3:   the car stops
car.stop();
//  2)
//  Noun:       computer
//  action 1:   the computer calculates
computer.calculate();
//  action 2:   the coputer crashes
computer.crash();
//  action 3:   the computer prints
computer.print();
//  3)
//  Noun:       telephone
//  action 1:   the telephone rings
telephone.ring();
//  action 2:   the telephone speaks
telephone.speak();
//  action 3:   the telephone listens
telephone.listen();
//  4)
//  Noun:       frog
//  action 1:   the frog hops
frog.hop();
//  action 2:   the frog jumps
frog.jump();
//  action 3:   the frog catches a fly
frog.catchFly();
//  5)
//  Noun:       chef
//  action 1:   the chef cooks
chef.cook();
//  action 2:   the chef cleans
chef.clean();
//  action 3:   the chef grills
chef.grill();
//  6)
//  Noun:       boat
//  action 1:   the boat sails
boat.sail();
//  action 2:   the boat moors
boat.moor();
//  action 3:   the boat sinks
boat.sink();
//  7)
//  Noun:       gun
//  action 1:   the gun shoots
gun.shoot();
//  action 2:   the gun reloads
gun.reload();
//  action 3:   the gun jams
gun.jam();
//  8)
//  Noun:       door
//  action 1:   the door opens
door.open();
//  action 2:   the door closes
door.close();
//  action 3:   the door squeaks
door.squeak();
//  9)
//  Noun:       bird
//  action 1:   the bird flys
bird.fly();
//  action 2:   the bird sings
bird.sing();
//  action 3:   the bird nests
bird.nest();
//  10)
//  Noun:       kettle
//  action 1:   the kettle fills
kettle.fill();
//  action 2:   the kettle boils
kettle.boil();
//  action 3:   the kettle empties
kettle.empty();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
