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
//  Noun:
//  action 1:
scanner.scanDocument();
//  action 2:
scanner.sendData();
//  action 3:
scanner.connectToComputer();
//  2)
//  Noun:
//  action 1:
dog.chaseBall();
//  action 2:
dog.digHole();
//  action 3:
dog.sleep();
//  3)
//  Noun:
//  action 1:
chef.sharpenKnife();
//  action 2:
chef.cookPrawns();
//  action 3:
chef.speakToCustomer();
//  4)
//  Noun:
//  action 1:
computer.processData();
//  action 2:
computer.updateSoftware();
//  action 3:
computer.storeCredentials();
//  5)
//  Noun:
//  action 1:
musician.playInstrument();
//  action 2:
musician.sing();
//  action 3:
musician.recordTrack();
//  6)
//  Noun:
//  action 1:
airplane.takeOff();
//  action 2:
airplane.cruiseAtAltitude();
//  action 3:
airplane.land();
//  7)
//  Noun:
//  action 1:
gardener.waterPlants();
//  action 2:
gardener.trimWeeds();
//  action 3:
gardener.cleanGarden();
//  8)
//  Noun:
//  action 1:
telephone.makeCall();
//  action 2:
telephone.playRingtone();
//  action 3:
telephone.connectToBluetoothDevice();
//  9)
//  Noun:
//  action 1:
videoGame.startNewLevel();
//  action 2:
videoGame.saveProgress();
//  action 3:
videoGame.loadSavedState();
//  10)
//  Noun:
//  action 1:
coffeeMaker.brew();
//  action 2:
coffeeMaker.grindBeans();
//  action 3:
coffeeMaker.shutdown();


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
