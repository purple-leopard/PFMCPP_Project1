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
//  action 3:   the arm rotates counter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun: scanner
//  action 1: the scanner scans a document
scanner.scanDocument();
//  action 2: the scanner sends data
scanner.sendData();
//  action 3: the scanner connects to a computer
scanner.connectToComputer();
//  2)
//  Noun: dog
//  action 1: the dog chases a ball
dog.chaseBall();
//  action 2: the dog digs a hole
dog.digHole();
//  action 3: the dog sleeps
dog.sleep();
//  3)
//  Noun: chef
//  action 1: the chef sharpens a knife
chef.sharpenKnife();
//  action 2: the chef cooks prawns
chef.cookPrawns();
//  action 3: the chef speaks to a customer
chef.speakToCustomer();
//  4)
//  Noun: dataCenter
//  action 1: the dataCenter processes data
dataCenter.processData();
//  action 2: the dataCenter updates its software
dataCenter.updateSoftware();
//  action 3: the dataCenter stores credentials
dataCenter.storeCredentials();
//  5)
//  Noun: musician
//  action 1: the musician plays their instrument
musician.playInstrument();
//  action 2: the musician sings
musician.sing();
//  action 3: the musician records a track
musician.recordTrack();
//  6)
//  Noun: drone
//  action 1: the drone takes off
drone.takeOff();
//  action 2: the drone cruises at altitude
drone.cruiseAtAltitude();
//  action 3: the drone lands
drone.land();
//  7)
//  Noun: gardener
//  action 1: the gardener waters plants
gardener.waterPlants();
//  action 2: the gardener trims weeds
gardener.trimWeeds();
//  action 3: the gardener cleans the garden
gardener.cleanGarden();
//  8)
//  Noun: telephone
//  action 1: the telephone searches for a cell network
telephone.searchForCellNetwork();
//  action 2: the telephone plays a ringtone
telephone.playRingtone();
//  action 3: the telephone connects to a bluetooth device
telephone.connectToBluetoothDevice();
//  9)
//  Noun: video game
//  action 1: the video game starts a new level
videoGame.startNewLevel();
//  action 2: the video game saves progress
videoGame.saveProgress();
//  action 3: the video game loads a saved state
videoGame.loadSavedState();
//  10)
//  Noun: coffee maker
//  action 1: the coffee maker brews
coffeeMaker.brew();
//  action 2: the coffee maker grinds beans
coffeeMaker.grindBeans();
//  action 3: the coffee maker plays a brew complete sound
coffeeMaker.playBrewCompleteSound();

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
