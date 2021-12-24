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
//  Noun:       watch
//  action 1:   the watch displays the current time
watch.displayCurrentTime();
//  action 2:   the watch displays the current date
watch.displayCurrentDate();
//  action 3:   the watch gets notifications 
watch.getNotifications();

//  2)
//  Noun:       phone
//  action 1:   the phone rings
phone.ring();
//  action 2:   the phone plays a media file
phone.playMedia();
//  action 3:   the phone vibrates
phone.vibrate();

//  3)
//  Noun:       cat        
//  action 1:   the cat jumps on the chair
cat.jumpOnChair();
//  action 2:   the cat begs for food
cat.begForFood();
//  action 3:   the cat meows
cat.meow();

//  4)
//  Noun:       fan
//  action 1:   the fan spins
fan.spin();
//  action 2:   the fan speeds up
fan.accelerate(); 
//  action 3:   the fan slows down
fan.deccelerate();

//  5)
//  Noun:       moose
//  action 1:   the moose walks
moose.walk();
//  action 2:   the moose sleeps
moose.sleep();
//  action 3:   the moose drinks water
mosse.drinkWater();

//  6)
//  Noun:       child
//  action 1:   the child sings
child.sing();
//  action 2:   the child talks
child.talk();
//  action 3:   the child runs
child.run();

//  7)
//  Noun:       vehicle
//  action 1:   the vehicle moves forward
vehicle.moveForward();
//  action 2:   the vehicle moves backward
vehicle.moveBackward();
//  action 3:   the vehicle flashes its lights
vehicle.flashLights();

//  8)
//  Noun:       fireplace
//  action 1:   the fireplace lights the room
fireplace.lightRoom();
//  action 2:   the fireplace heats the room
fireplace.heatRoom();
//  action 3:   the fireplace creates a crackling sound in the room
fireplace.crackle();

//  9)
//  Noun:       bird
//  action 1:   the bird flies
bird.fly();
//  action 2:   the bird lands
bird.land();
//  action 3:   the bird builds a nest
bird.buildNest();

//  10)
//  Noun:       whale
//  action 1:   the whale swims
whale.swim();
//  action 2:   the whale eats fish
whale.eatFish();
//  action 3:   the whale jumps
whale.jump();

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
