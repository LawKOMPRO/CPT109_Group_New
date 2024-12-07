#include "researcher_manager.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Researcher researchers[100];
int researcher_count = 0;

// 从文件中加载研究人员数据
void load_researchers_from_file() {
    FILE* fp = fopen("researchers.dat", "rb");
    if (fp == NULL) {
        printf("Data file not found, starting with empty data.\n");
        return;
    }
    researcher_count = fread(researchers, sizeof(struct Researcher), 100, fp);
    fclose(fp);
    printf("Loaded %d researchers from file.\n", researcher_count);
}

// 保存单个研究人员数据
void save_researcher_to_file(struct Researcher* researcher) {
    FILE* fp = fopen("researchers.dat", "ab");
    if (fp == NULL) {
        printf("Unable to save researcher data to file.\n");
        return;
    }
    fwrite(researcher, sizeof(struct Researcher), 1, fp);
    fclose(fp);
    printf("Researcher data has been saved successfully.\n");
}

// 保存所有研究人员数据
void save_all_researchers_to_file() {
    FILE* fp = fopen("researchers.dat", "wb");
    if (fp == NULL) {
        printf("Unable to save researcher data to file.\n");
        return;
    }
    fwrite(researchers, sizeof(struct Researcher), researcher_count, fp);
    fclose(fp);
    printf("All researcher data has been saved successfully.\n");
}

// 注册研究人员
void register_researcher(const char* name) {
    if (researcher_count >= 100) {
        printf("Cannot add more researchers. Maximum capacity reached.\n");
        return;
    }
    strcpy(researchers[researcher_count].name, name);
    strcpy(researchers[researcher_count].contributions, "No contributions yet.");
    save_researcher_to_file(&researchers[researcher_count]);
    researcher_count++;
    printf("Researcher %s has been successfully registered.\n", name);
}

// 编辑研究人员贡献
void edit_researcher_contributions(const char* name, const char* new_contributions) {
    for (int i = 0; i < researcher_count; i++) {
        if (strcmp(researchers[i].name, name) == 0) {
            // 显示当前的贡献内容
            printf("Current Contributions for %s: %s\n", researchers[i].name, researchers[i].contributions);

            // 更新贡献内容
            strcpy(researchers[i].contributions, new_contributions);

            // 保存到文件
            save_all_researchers_to_file();

            // 确认更新
            printf("Updated Contributions for %s: %s\n", researchers[i].name, researchers[i].contributions);
            printf("Researcher contributions have been successfully updated.\n");
            return;
        }
    }
    printf("Researcher %s not found.\n", name);
}


// 删除研究人员
void delete_researcher(const char* name) {
    for (int i = 0; i < researcher_count; i++) {
        if (strcmp(researchers[i].name, name) == 0) {
            for (int j = i; j < researcher_count - 1; j++) {
                researchers[j] = researchers[j + 1];
            }
            researcher_count--;
            save_all_researchers_to_file();
            printf("Researcher %s has been successfully deleted.\n", name);
            return;
        }
    }
    printf("Researcher %s not found.\n", name);
}

// 查看研究人员贡献
void view_researcher_contributions(const char* name) {
    for (int i = 0; i < researcher_count; i++) {
        if (strcmp(researchers[i].name, name) == 0) {
            printf("Researcher: %s\nContributions: %s\n", researchers[i].name, researchers[i].contributions);
            return;
        }
    }
    printf("Researcher %s not found.\n", name);
}

// 清理输入缓冲
void clear_input_buffer() {
    while (getchar() != '\n');
}

// 管理研究人员账户主菜单
void manageResearcherAccounts() {
    int choice;
    char name[50];
    char new_contributions[200];

    load_researchers_from_file();

    printf("\nYou have entered the Manage Researcher Accounts module.\n");
    do {
        printf("\n---- Researcher Account Management ----\n");
        printf("1. Add Researcher\n");
        printf("2. Edit Researcher Details\n");
        printf("3. Delete Researcher\n");
        printf("4. View Researcher Activity and Contributions\n");
        printf("5. Exit\n");
        printf("Please select an option: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            clear_input_buffer();
            continue;
        }

        switch (choice) {
        case 1:
            printf("Enter name: ");
            clear_input_buffer();
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';
            register_researcher(name);
            break;
        case 2:
            printf("Enter the name of the researcher to edit: ");
            clear_input_buffer();
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            // 检查研究人员是否存在
            int found_index = -1;
            for (int i = 0; i < researcher_count; i++) {
                if (strcmp(researchers[i].name, name) == 0) {
                    found_index = i;
                    break;
                }
            }

            if (found_index == -1) {
                printf("Researcher %s not found.\n", name);
                break;
            }

            // 显示当前贡献
            printf("Current Contributions for %s: %s\n", researchers[found_index].name, researchers[found_index].contributions);

            // 输入新的贡献
            printf("Enter new contributions: ");
            fgets(new_contributions, sizeof(new_contributions), stdin);
            new_contributions[strcspn(new_contributions, "\n")] = '\0';

            // 更新贡献并保存
            edit_researcher_contributions(name, new_contributions);
            break;

        case 3:
            printf("Enter the name of the researcher to delete: ");
            clear_input_buffer();
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            delete_researcher(name);
            break;
        case 4:
            printf("Enter the name of the researcher to view: ");
            clear_input_buffer();
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = '\0';

            view_researcher_contributions(name);
            break;
        case 5:
            printf("Exiting Researcher Account Management.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
        }
    } while (choice != 5);
}
