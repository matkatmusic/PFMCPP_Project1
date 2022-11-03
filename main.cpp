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
//  Noun:book
//  action 1: the book provide education.
book.ProvideEducation();
//  action 2:the book rests on a shelf.
book.RestOnaShelf();
//  action 3:the book takes up space.
book.TakesUpSpace();
//  2)
//  Noun:laptop
//  action 1:the laptop does the calculations.
laptop.DoesTheCalculations();
//  action 2:the laptop displays on screen.
laptop.DisplaysOnScreen();
//  action 3:the laptop supports presentation.
laptop.SupportsPresentation();
//  3)
//  Noun:cloth
//  action 1:the cloth fades.
cloth.fades();
//  action 2:the cloth warms the people.
cloth.WarmsThePeople();
//  action 3:the cloth protectas against injury.
cloth.ProtectasAgainstInjury();
//  4)
//  Noun:piano
//  action 1:the piano makes sound.
piano.MakesSound();
//  action 2:the piano inspires people.
piano.InspiresPeople();
//  action 3:the piano annoys neighbors.
piano.AnnoysNeighbors();
//  5)
//  Noun:human 
//  action 1:the human sleeps.
human.sleeps();
//  action 2:the human eats.
huamn.eats();
//  action 3:the human grows up.
human.GrowsUp();
//  6)
//  Noun:car 
//  action 1:the car consumes gasoline.
car.ConsumeGasoline();
//  action 2:the car runs.
car.runs();
//  action 3:the car carries people.
car.CarriesPeople();
//  7)
//  Noun:music
//  action 1:the music connects people.
music.ConnectsPeople(); 
//  action 2:the music transcends borders.
music.TranscendsBorders();
//  action 3:the music heals people.
music.HealsPeople();
//  8)
//  Noun:
//  action 1:the earth rotates.
earth.ratates();
//  action 2:the earth turns.
earth.turns();
//  action 3:the earth produces water.
earth.ProducesWater();
//  9)
//  Noun:goverment
//  action 1:The government sets up the infrastructure.
goverment.SetUpTheInfrastructure();
//  action 2:The government heplps people.
goverment.HelpsPeople();
//  action 3:The government makes the rules.
goverment.MakesTheRules();
//  10)
//  Noun:religion.
//  action 1:the religion provides salvation.
religion.ProvidesSalvation();
//  action 2:the religion provides the answer.
religion.ProvidesTheAnswer();
//  action 3:the religion provides takes your money.
religion.TakesYourMoney();


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
