#ifndef SEARCHPLANET_MANAGER_H
#define SEARCHPLANET_MANAGER_H

// 行星结构体
#pragma pack(1) // 禁用结构体对齐
typedef struct {
    char name[50];
    char type[50];
    double size;
    double distanceFromStar;
    int isCataloged;   // 是否编入目录 (1 表示已编入, 0 表示未编入)
    int isDiscovered;  // 是否被发现 (1 表示已发现, 0 表示未发现)
    int isObserved;    // 是否被观测到 (1 表示已观测, 0 表示未观测)
} Planet;
#pragma pack() // 恢复默认对齐

// 传入参数为 1.行星数组 2.数组的长度 3.要搜索行星的名称
void searchPlanetByName(const char *filename, const char* name);
void searchPlanetType(const char *filename, const char* type);
void searchPlanetBySize(const char *filename, double size);
void searchPlanetByDistance(const char *filename, double distance);
void displayAllPlanets(const char *filename);

#endif // SEARCHPLANET_MANAGER_H
