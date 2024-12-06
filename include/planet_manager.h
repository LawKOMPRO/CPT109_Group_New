#ifndef PLANET_MANAGER_H
#define PLANET_MANAGER_H


// Constants
#define MAX_PLANETS 100
#define NAME_LENGTH 50
#define TYPE_LENGTH 20
#define SIZE_LENGTH 20
#define RELEVANT_DATA_LENGTH 100
#define RELEVANT_DATA_COUNT 5

#include "searchplanet_manager.h"

// // Struct definition
// typedef struct {
//     char name[NAME_LENGTH];
//     char type[TYPE_LENGTH];
//     double size;
//     double distanceFromStar;
//     int isCataloged;
//     int isDiscovered;
//     int isObserved;
// } Planet;

// Global variables
extern Planet catalogue[MAX_PLANETS];
extern int planetCount;

// Function declarations
void saveCatalogueToFile();
void addPlanet();
void editPlanet();
void removePlanet();
void displayCatalogue();
void planet_manager();

#endif // PLANET_MANAGER_H
