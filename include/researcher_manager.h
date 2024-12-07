#ifndef RESEARCHER_MANAGER_H
#define RESEARCHER_MANAGER_H

// 结构体定义：用于存储研究人员信息
// 包括研究人员的名字和贡献描述
struct Researcher {
    char name[50];               // 研究人员名字（最大50个字符）
    char contributions[200];     // 研究人员的贡献描述（最大200个字符）
};

// 管理研究人员账户的主要入口函数
void manageResearcherAccounts();

// 注册一个新的研究人员
// 参数：
// - name: 研究人员的名字
void register_researcher(const char* name);

// 编辑研究人员的贡献信息
// 参数：
// - name: 研究人员的名字
// - new_contributions: 要更新的贡献描述
void edit_researcher_contributions(const char* name, const char* new_contributions);

// 删除一个研究人员
// 参数：
// - name: 研究人员的名字
void delete_researcher(const char* name);

// 查看某个研究人员的贡献
// 参数：
// - name: 研究人员的名字
void view_researcher_contributions(const char* name);

#endif // RESEARCHER_MANAGER_H
