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
//  Noun: cat
//  action 1: the cat sprints
cat.sprint();
//  action 2: the cat scratches
cat.scratch();
//  action 3: the cat eats
cat.eat();
//  2)
//  Noun: printer
//  action 1: the printer prints documents
printer.printDocument();
//  action 2: the printer scan documents
printer.scanDocument();
//  action 3: the printer sends a fax
printer.fax();
//  3)
//  Noun: player (video games)
//  action 1: the player runs
player.run();
//  action 2: the player attacks
player.attack();
//  action 3: the player heals himself/herself
player.heal();
//  4)
//  Noun: phone
//  action 1: the phone takes a photo
phone.takePhoto();
//  action 2: the phone plays audio
phone.playAudio();
//  action 3: the phone sends out a message
phone.sendMessage();
//  5)
//  Noun: bus 
//  action 1: the bus takes passengers
bus.takePassenger();
//  action 2: the bus consumes fuel
bus.consumeFuel();
//  action 3: the bus charges the passengers for ticket
bus.chargeTicket();
//  6)
//  Noun: bat
//  action 1: the bat flies
bat.fly();
//  action 2: the bat hunts
bat.hunt();
//  action 3: the bat sleeps
bat.sleep();
//  7)
//  Noun: disk
//  action 1: the disk stores data
disk.storeData();
//  action 2: the disk searches for data
disk.searchData();
//  action 3: the disk transmits data
disk.transmitData();
//  8)
//  Noun: plant
//  action 1: the plant produces oxygen
plant.produceOxygen();
//  action 2: the plant grows fruits
plant.growFruits();
//  action 3: the plant consumes sunlight
plant.consumeSunlight();
//  9)
//  Noun: web browser
//  action 1: the web browser loads content of a page
webBrowser.loadContent();
//  action 2: the web browser refreshes a page
webBrowser.refresh();
//  action 3: the web browser searches content on the internet
webBrowser.search();
//  10)
//  Noun: vending machine
//  action 1: the vending machine receives orders
vendingMachine.receiveOrder();
//  action 2: the vending machine receives money
vendingMachine.receiveMoney();
//  action 3: the vending machine releases the item
vendingMachine.releaseItem();


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
