#include <stdio.h>


//����һ��ѧ��
struct student
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}s1,s2,s3; //����ȫ�ֵĽṹ�����

//���¶���stuΪStu
typedef struct stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

struct s{
    char name[20];
    struct stu s; //�ṹ������
    char* p; //ָ������
};

int main1() {
    struct student stu ={"jack",12,"10086","��"}; //�ֲ��Ľṹ�����

    struct student*p  = &stu;


    printf("�����ǣ�%s",p->name);

    char arr[]  = "helle";
    //Ƕ�׽ṹ��ĳ�ʼ��

    struct s s1 = {"������",{"jack",12,"10086","��"},arr};
    return 0;
}
void my_strcpy(char* dest,char* src)
{
    while (*src != '\0'){
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src; //cpy \0�ַ�
}
int main()
{
    const int num = 10; //���� num
    //��ʱ��const���ε���pָ�� ָ���ֵ���ܷ����ı�
    int * const p = &num;
    *p = 20; //����
//    p = &num;  ������ ���ܸı�ָ��

    //���� ��ʱ const���ε���*ps
    const int * ps = &num;
//    *ps = 10; //����
    ps = &num;

    //const����ָ��������ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
    //const����ָ������ұ�ʱ�����ε���ָ�����p����p���ܸı�



    printf("%d\n",num);
}