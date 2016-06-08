// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: Em1SteppingVerbose.hh,v 1.4 2000/12/06 13:21:49 maire Exp $
// GEANT4 tag $Name: geant4-03-00 $
//
//   This class manages the verbose outputs in G4SteppingManager. 
//   It inherits from G4SteppingVerbose.
//   It shows how to extract informations during the tracking of a particle.
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo.....
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo.....

class Em1SteppingVerbose;

#ifndef Em1SteppingVerbose_h
#define Em1SteppingVerbose_h 1

#include "G4SteppingVerbose.hh"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo.....

class Em1SteppingVerbose : public G4SteppingVerbose {

public:   

  Em1SteppingVerbose();
 ~Em1SteppingVerbose();

  void StepInfo();
  void TrackingStarted();

};

#endif