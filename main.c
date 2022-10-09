#include <stdio.h>


//描述一个学生
struct student
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}s1,s2,s3; //三个全局的结构体变量

//重新定义stu为Stu
typedef struct stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

struct s{
    char name[20];
    struct stu s; //结构体类型
    char* p; //指针类型
};

int main1() {
    struct student stu ={"jack",12,"10086","男"}; //局部的结构体变量

    struct student*p  = &stu;


    printf("姓名是：%s",p->name);

    char arr[]  = "helle";
    //嵌套结构体的初始化

    struct s s1 = {"王祖贤",{"jack",12,"10086","男"},arr};
    return 0;
}
void my_strcpy(char* dest,char* src)
{
    while (*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src; //cpy \0字符
}
int main()
{
    const int num = 10; //修饰 num
    //此时的const修饰的是p指针 指针的值不能发生改变
    int * const p = &num;
    *p = 20; //可以
//    p = &num;  不可以 不能改变指针

    //但是 此时 const修饰的是*ps
    const int * ps = &num;
//    *ps = 10; //报错
    ps = &num;

    //const放在指针变量左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
    //const放在指针变量右边时，修饰的是指针变量p本身，p不能改变



    printf("%d\n",num);
}