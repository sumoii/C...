#include <stdio.h>
int main(){
    struct{
        char *name;  //����
        int num;  //ѧ��
        int age;  //����
        char group;  //����С��
        float score;  //�ɼ�
    } stu1 = { "Tom", 12, 18, 'A', 136.5 }, *pstu = &stu1;
    //��ȡ�ṹ���Ա��ֵ
    printf("%s��ѧ����%d��������%d����%c�飬����ĳɼ���%.1f��\n", (*pstu).name, (*pstu).num, (*pstu).age, (*pstu).group, (*pstu).score);
    printf("%p\n",pstu);
    return 0;
}
