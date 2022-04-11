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
//  Noun:        system
//  action 1:    the system upgrades
system.upgrade();
//  action 2:    the system downgrades
system.downgrade();
//  action 3:    the system collects error messages
system.collectErrorMessage();
//  2)
//  Noun:        dog
//  action 1:    the dog bites
dog.bite();
//  action 2:    the dog runs
dog.run();
//  action 3:    the dog barks
dog.bark();
//  3)
//  Noun:        plane
//  action 1:    the plane takes off
plane.takeOff();
//  action 2:    the plane lands
plane.land();
//  action 3:    the plane flys
plane.fly();
//  4)
//  Noun:        ball
//  action 1:    the ball bounces
ball.bounce();
//  action 2:    the ball rolls down
ball.rollDown();
//  action 3:    the ball floats on water
ball.floatOnWater();
//  5)
//  Noun:         video
//  action 1:     the video plays
video.play();
//  action 2:     the video pauses
video.pause();
//  action 3:     the video repeats n times
video.repeat(n);
//  6)
//  Noun:         image
//  action 1:     the image zooms in
image.zoomIn();
//  action 2:     the image zooms out
image.zoomOut();
//  action 3:     the image resizes
image.resize();
//  7)
//  Noun:         plugin
//  action 1:     the plugin activates
plugin.activate();
//  action 2:     the plugin deactivates
plugin.deactivate();
//  action 3:     the plugin installs
plugin.install();
//  8)
//  Noun:         player
//  action 1:     the player dribbles
player.dribble();
//  action 2:     the player passes the ball
player.pass();
//  action 3:     the player shots
player.shot();
//  9)
//  Noun:         file
//  action 1:     the file saves
file.save();
//  action 2:     the file loads
file.load();
//  action 3:     the file copys to specific path
file.copyTo();
//  10)
//  Noun:         stack
//  action 1:     the stack pops
stack.pop();
//  action 2:     the stack pushes
stack.push();
//  action 3:     the stack clears
stack.clear();


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
