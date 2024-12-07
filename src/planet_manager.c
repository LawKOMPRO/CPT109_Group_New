#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "planet_manager.h"
#include "searchplanet_manager.h"

#define MAX_PLANETS 100
#define NAME_LENGTH 50
#define TYPE_LENGTH 20
#define SIZE_LENGTH 20
#define RELEVANT_DATA_LENGTH 100
#define RELEVANT_DATA_COUNT 5

Planet catalogue[MAX_PLANETS]={};
int planetCount = 0;
int currentPlanet = 0;

//void saveCatalogueToFile(char * str);
void CountPlanet() {
    FILE *file = fopen("planets.dat", "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }
    Planet planet;
    planetCount = 0;
    while (fread(&planet, sizeof(Planet), 1, file) == 1)
    {
        planetCount++;
    }
    fclose(file);
}

void CountCategue() {
    currentPlanet = 0;
    for (int i = 0; i < MAX_PLANETS; i++) {
        if (catalogue[i].type == 0) {
            currentPlanet ++;
        }
    }
}

// 从文件中读取行星目录
// void loadCatalogueFromFile(){
//     CountPlanet();
//     FILE *file = fopen("planets.dat", "rb");
//     if (file == NULL)
//     {
//         printf("Error opening file for reading.\n");
//         return;
//     }
//     Planet planet;
//     while (fread(&planet, sizeof(Planet), 1, file) == 1) {
//         for (int i = planetnumber; i < currentplanet - 1; i++)catalogue[i]= planet;
//     }
//     fclose(file);
// }

void loadCatalogueFromFile() {
    FILE *file = fopen("planets.dat", "rb");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return;
    }
    Planet planet;
    planetCount = 0; // 重置planetCount
    while (fread(&planet, sizeof(Planet), 1, file) == 1) {
        catalogue[planetCount++] = planet;
    }
    fclose(file);
}
// // 保存行星目录到文件
// void savePlanetToFile(Planet planet) {
//     CountPlanet();
//     FILE* file = fopen("planets.dat", "ab");
//     if (file == NULL) {
//         perror("Error opening file");
//         return;
//     }
//     fwrite(&planet, sizeof(Planet), 1, file);
//     fclose(file);
// }

// void saveCatalogueToFile() {
//     CountPlanet();
//     CountCategue();
//     FILE *file = fopen("planets.dat", "rb");
//     if (file == NULL) {
//         perror("Error opening file");
//         return;
//     }
//     for (int i = planetCount-1; i < currentPlanet; i++) {
//         Planet planet = catalogue[i];
//         fwrite(&planet, sizeof(Planet), 1, file);
//     }
//     fclose(file);
// }

void saveCatalogueToFile() {
    FILE *file = fopen("planets.dat", "wb"); // 使用 "wb" 以覆盖写入
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    for (int i = 0; i < planetCount; i++) {
        fwrite(&catalogue[i], sizeof(Planet), 1, file);
    }
    fclose(file);
}

void addPlanet() {
    // loadCatalogueFromFile(); // 重新读取目录
    if (planetCount >= MAX_PLANETS) {
        printf("Catalogue is full. Cannot add more planets.\n");
        return;
    }

    Planet newPlanet;
    printf("Enter planet name: ");
    scanf("%49s", newPlanet.name);
    printf("Enter planet type: ");
    scanf("%49s", newPlanet.type);
    printf("Enter planet size: ");
    scanf("%lf", &newPlanet.size);
    printf("Enter planet's distance from star in astronomical units (AU): ");
    scanf("%lf", &newPlanet.distanceFromStar);
    newPlanet.isCataloged = 1; // 假设添加的行星都是已编入目录的
    newPlanet.isDiscovered = 1; // 假设添加的行星都是已发现的
    newPlanet.isObserved = 1; // 假设添加的行星都是被观测到的

    catalogue[planetCount++] = newPlanet;
    printf("Planet added successfully.\n");

    // // 保存到文件
    // savePlanetToFile(newPlanet);
    saveCatalogueToFile();
}

void editPlanet() {
    loadCatalogueFromFile(); // 重新读取目录
    char planetName[NAME_LENGTH];
    printf("Enter the name of the planet to edit: ");
    scanf("%49s", planetName);
    getchar(); // 清空换行符

    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalogue[i].name, planetName) == 0) {
            printf("Enter new name: ");
            char newName[NAME_LENGTH];
            fgets(newName, NAME_LENGTH, stdin);
            if (newName[0] != '\n') {
                newName[strcspn(newName, "\n")] = '\0'; // 移除换行符
                strcpy(catalogue[i].name, newName);
            }

            printf("Enter new type: ");
            char newType[TYPE_LENGTH];
            fgets(newType, TYPE_LENGTH, stdin);
            if (newType[0] != '\n') {
                newType[strcspn(newType, "\n")] = '\0'; // 移除换行符
                strcpy(catalogue[i].type, newType);
            }

            printf("Enter new size: ");
            double newSize;
            scanf("%lf", &newSize);
            catalogue[i].size = newSize;

            printf("Enter new distance from star in AU: ");
            double newDistance;
            scanf("%lf", &newDistance);
            catalogue[i].distanceFromStar = newDistance;

            printf("Enter new isCataloged (1 for yes, 0 for no): ");
            scanf("%d", &catalogue[i].isCataloged);

            printf("Enter new isDiscovered (1 for yes, 0 for no): ");
            scanf("%d", &catalogue[i].isDiscovered);

            printf("Enter new isObserved (1 for yes, 0 for no): ");
            scanf("%d", &catalogue[i].isObserved);

            printf("Planet edited successfully.\n");

            // 保存到文件
            saveCatalogueToFile();
            return;
        }
    }
    printf("Planet not found.\n");
}

void removePlanet() {
    loadCatalogueFromFile("planets.dat"); // 重新读取目录
    char planetName[NAME_LENGTH];
    printf("Enter the name of the planet to remove: ");
    scanf("%49s", planetName);

    for (int i = 0; i < planetCount; i++) {
        if (strcmp(catalogue[i].name, planetName) == 0) {
            for (int j = i; j < planetCount - 1; j++) {
                catalogue[j] = catalogue[j + 1];
            }
            planetCount--;
            printf("Planet removed successfully.\n");

            // 保存到文件
            saveCatalogueToFile();
            return;
        }
    }
    printf("Planet not found.\n");
}

void displayCatalogue(const char *filename) {
    loadCatalogueFromFile(filename); // 重新读取目录
    printf("Planet Catalogue:\n");
    for (int i = 0; i < planetCount; i++) {
        if (catalogue[i].size!=0.0){
            printf("Name: %s\n Type: %s\n Size: %.2f\n Distance from star: %.2f AU\n IsCataloged: %d\n IsDiscovered: %d\n IsObserved: %d\n\n",
                   catalogue[i].name, catalogue[i].type, catalogue[i].size, catalogue[i].distanceFromStar, catalogue[i].isCataloged, catalogue[i].isDiscovered, catalogue[i].isObserved);
        }
    }
}

// 保存行星目录到文件
void planet_manager() {
    loadCatalogueFromFile("planets.dat");
    char choice;
    do {
        printf("\nManage Planet Information\n");
        printf("1. Add a planet\n");
        printf("2. Edit a planet\n");
        printf("3. Remove a planet\n");
        printf("4. Display catalogue\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%s", &choice);

        switch (choice) {
            case '1':
                addPlanet();
            break;
            case '2':
                editPlanet();
            break;
            case '3':
                removePlanet();
            break;
            case '4':
                displayCatalogue("planets.dat");
            break;
            case '5':
                printf("Exiting program.\n");
            break;
            case '0':
                CountPlanet();
            CountCategue();
                printf("%d planetCount:\ncurrentOlanet:%d", planetCount,currentPlanet);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != '5');
}




