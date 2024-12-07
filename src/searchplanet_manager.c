#include <stdio.h>
#include <string.h>
#include <tgmath.h>
#include <ctype.h> // 添加此行以使用 tolower 函数
#include "searchplanet_manager.h"

// 大小写不敏感的字符串比较函数
int caseInsensitiveCompare(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        char c1 = tolower((unsigned char)*s1);
        char c2 = tolower((unsigned char)*s2);
        if (c1 != c2) {
            return c1 - c2;
        }
        s1++;
        s2++;
    }
    return tolower((unsigned char)*s1) - tolower((unsigned char)*s2);
}

// 按名称搜索行星（大小写不敏感）
void searchPlanetByName(const char *filename, const char* name)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    Planet planet;
    int found = 0;
    while (fread(&planet, sizeof(Planet), 1, file) == 1)
    {
        if (caseInsensitiveCompare(planet.name, name) == 0)
        {
            printf("Found Planet: %s\n", planet.name);
            printf("Type: %s\n", planet.type);
            printf("Size: %.2lf km\n", planet.size);
            printf("Distance from Star: %.2lf AU\n", planet.distanceFromStar);
            found = 1;
            break;
        }
    }

    if (!found)
    {
        printf("Planet not found.\n");
    }

    fclose(file);
}

// 按类型搜索行星（大小写不敏感）
void searchPlanetType(const char *filename, const char* type)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    Planet planet;
    int found = 0;
    while (fread(&planet, sizeof(Planet), 1, file) == 1)
    {
        if (caseInsensitiveCompare(planet.type, type) == 0)
        {
            printf("Found Planet: %s\n", planet.name);
            printf("Type: %s\n", planet.type);
            printf("Size: %.2lf km\n", planet.size);
            printf("Distance from Star: %.2lf AU\n", planet.distanceFromStar);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Not found.\n");
    }

    fclose(file);
}

// 按大小搜索行星
void searchPlanetBySize(const char *filename, double size)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    Planet planet;
    Planet closestPlanet;
    double closestDifference = -1;
    int found = 0;

    while (fread(&planet, sizeof(Planet), 1, file) == 1)
    {
        double difference = fabs(planet.size - size);
        if (!found || difference < closestDifference)
        {
            closestPlanet = planet;
            closestDifference = difference;
            found = 1;
        }
    }

    if (found)
    {
        printf("Closest Planet: %s\n", closestPlanet.name);
        printf("Type: %s\n", closestPlanet.type);
        printf("Size: %.2lf km\n", closestPlanet.size);
        printf("Distance from Star: %.2lf AU\n", closestPlanet.distanceFromStar);
    }
    else
    {
        printf("No planets found in the file.\n");
    }

    fclose(file);
}

// 按行星到恒星的距离搜索行星（修改后的函数）
void searchPlanetByDistance(const char *filename, double distance)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    Planet planet;
    Planet closestPlanet;
    double closestDifference = -1;
    int found = 0;

    while (fread(&planet, sizeof(Planet), 1, file) == 1)
    {
        if (planet.distanceFromStar >= distance)
        {
            double difference = planet.distanceFromStar - distance;
            if (!found || difference < closestDifference)
            {
                closestPlanet = planet;
                closestDifference = difference;
                found = 1;
            }
        }
    }

    if (found)
    {
        printf("Closest Planet with distance >= %.2lf AU:\n", distance);
        printf("Name: %s\n", closestPlanet.name);
        printf("Type: %s\n", closestPlanet.type);
        printf("Size: %.2lf km\n", closestPlanet.size);
        printf("Distance from Star: %.2lf AU\n", closestPlanet.distanceFromStar);
    }
    else
    {
        printf("No planets found with distance greater than or equal to %.2lf AU.\n", distance);
    }

    fclose(file);
}

// 显示所有行星信息
void displayAllPlanets(const char *filename)
{
    FILE *file = fopen(filename, "rb");
    if (file == NULL)
    {
        printf("Error opening file for reading.\n");
        return;
    }

    Planet planet;
    printf("\nDisplaying all planets:\n");
    while (fread(&planet, sizeof(Planet), 1, file) == 1)
    {
        printf("Name: %s\n", planet.name);
        printf("Type: %s\n", planet.type);
        printf("Size: %.2lf km\n", planet.size);
        printf("Distance from Star: %.2lf AU\n", planet.distanceFromStar);
        printf("\n");
    }

    fclose(file);
}
