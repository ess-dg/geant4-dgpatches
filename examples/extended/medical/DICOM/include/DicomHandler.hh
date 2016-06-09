//
// ********************************************************************
// * DISCLAIMER                                                       *
// *                                                                  *
// * The following disclaimer summarizes all the specific disclaimers *
// * of contributors to this software. The specific disclaimers,which *
// * govern, are listed with their locations in:                      *
// *   http://cern.ch/geant4/license                                  *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.                                                             *
// *                                                                  *
// * This  code  implementation is the  intellectual property  of the *
// * GEANT4 collaboration.                                            *
// * By copying,  distributing  or modifying the Program (or any work *
// * based  on  the Program)  you indicate  your  acceptance of  this *
// * statement, and all its terms.                                    *
// ********************************************************************
//
// The code was written by :
//	*Louis Archambault louis.archambault@phy.ulaval.ca,
//      *Luc Beaulieu beaulieu@phy.ulaval.ca
//      +Vincent Hubert-Tremblay at tigre.2@sympatico.ca
//
//
// *Centre Hospitalier Universitaire de Quebec (CHUQ),
// Hotel-Dieu de Quebec, departement de Radio-oncologie
// 11 cote du palais. Quebec, QC, Canada, G1R 2J6
// tel (418) 525-4444 #6720
// fax (418) 691 5268
//
// + Universit� Laval, Qu�bec (QC) Canada
//*******************************************************//

//*******************************************************
//
// DicomHandler.hh :
//	- Handling of DICM images
//	- Transforming *.dcm to *.g4 ( pixels->density )
//	- Reading headers and pixels
//	- Transforming pixel to density and creating *.g4
//	  files
//	- Functions are in DicomHandler.cc
//
//
// Base on previous code by :
//	Dragan Tubic <tdragan@gel.ulaval.ca>
//*******************************************************

#ifndef DicomHandler_h
#define DicomHandler_h 1

#include "globals.hh"

class DicomHandler
{
public:

  DicomHandler();

  ~DicomHandler() { }

  G4int readHeader(FILE *,char[300]);

  G4int readData(FILE *,char[300]); // note: always use readHeader 
                                    // before readData

  // use ImageMagick to display the image
  //G4int displayImage(char[500]);

  void checkFileFormat();

private:

  G4int compression, max;
  G4double pixel2density(G4int pixel);
  G4int rows;
  G4int columns;
  G4int bitAllocated;

  char  pixelSpacingX[300],pixelSpacingY[300];
  char  sliceThickness[300];
  G4double sliceLocation;
};
#endif
