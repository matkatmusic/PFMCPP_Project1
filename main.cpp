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
//  Noun:       cat
//  action 1:   purrs
cat.purr();
//  action 2:   meows  
cat.meow();
//  action 3:   climbs
cat.climb();
//  2)
//  Noun:       bird
//  action 1:   flies
bird.fly();
//  action 2:   sings
bird.sing();
//  action 3:   nests
bird.nest();
//  3)
//  Noun:       book
//  action 1:   write
book.write();
//  action 2:   read
book.read();
//  action 3:   close
book.close();
//  4)
//  Noun:       phone
//  action 1:   dial
phone.dial();
//  action 2:   pick up
phone.pickUp();
//  action 3:   hang up
phone.hangUp();
//  5)
//  Noun:       photo
//  action 1:   take
photo.take();
//  action 2:   print
photo.print();
//  action 3:   share
photo.share();
//  6)
//  Noun:       mixer
//  action 1:   connect input
mixer.connectInput();
//  action 2:   connect output
mixer.connectOutput();
//  action 3:   adjust volume
mixer.adjustVolume();
//  7)
//  Noun:       programmer
//  action 1:   eats pasta
programmer.eatPasta();
//  action 2:   sleeps
programmer.sleep();
//  action 3:   writes code
programmer.writeCode();
//  8)
//  Noun:       dancer
//  action 1:   shakes booty
dancer.shakeBooty();
//  action 2:   twirls
dancer.twirl();
//  action 3:   extends arm with finger pointing up
dancer.extendArmWithFingerPointingUp();
//  9)
//  Noun:       cyclist
//  action 1:   pushes pedals
cyclist.pushPedals();
//  action 2:   squeezes his breaks
cyclist.squeezeBreaks();
//  action 3:   parks bicycle
cyclist.parkBicycle();
//  10)
//  Noun:       dog
//  action 1:   barks
dog.bark();
//  action 2:   laps water
dog.lapWater();
//  action 3:   runs
dog.run();


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
