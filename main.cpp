#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.

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
//  Noun: TV
//  action 1: TV On
tv.on();
//  action 2: TV Off
tv.off();
//  action 3: TV changes channel
tv.changeChannel();
 
//  2)
//  Noun: printer
//  action 1: printer prints
printer.print();
//  action 2: printer runs out of tint
printer.outOfTint();
//  action 3: printer turns on wi-fi connection
printer.wifiConnectionOn();
 
//  3)
//  Noun: person
//  action 1: person seats
person.seat();
//  action 2: person jumps
person.jump();
//  action 3: person shouts
person.shouts();

//  4)
//  Noun: dog 
//  action 1: dog barks
dog.bark();
//  action 2: dog smells poop
dog.smellPoop();
//  action 3: dog gets lost
dog.getLost();
 
//  5)
//  Noun: car
//  action 1: car crashes
car.crash();
//  action 2: car breaks
car.break();
//  action 3: car gets flat tires
car.flatTires();
 
//  6)
//  Noun: laptop
//  action 1: laptop dies
laptop.die();
//  action 2: laptop falls
laptop.fall();
//  action 3: laptop takes a picture of me without my consent
laptop.takePictureOfMeWithoutMyConsent();
 
//  7)
//  Noun: phone
//  action 1: phone calls my vegan frined
phone.callMyVeganFriend();
//  action 2: phone plays sad piano music for me
phone.playSadPianoMusic ();
//  action 3:phone vibrates enough
phone.vibrateEnough();
 
//  8)
//  Noun: old granny
//  action 1: old granny gets older
oldGranny.getOlder();
//  action 2: old granny falls down the stairs 
oldGranny.fallDownStairs();
//  action 3: old granny kisses me 
oldGranny.kissMe();
 
//  9)
//  Noun: weird neighbor
//  action 1: weird neighbor talks to himself
weirdNeighbor.talkToHimself();
//  action 2: weird neighbor come home naked
weirdNeighbor.comeHomeNaked();
//  action 3: wierd neighbor likes good music
weirdNeighbor.likeGoodMusic();

//  10)
//  Noun: cow
//  action 1: cow sprints full speed
cow.fullSpeed();
//  action 2: cow speaks fluent portuguese
cow.speakPortuguese();
//  action 3: cow gets me some milk
cow.getMilk();
 


#endif

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
