

#include <c_list.h>
#include <stdio.h>

int t_list();

int t_vector();

int t_tree();

int t_map();

int t_set();

int t_stack();

int t_queue();

int t_algo();

struct student{
    char name[20];
    int age;
};

static inline int data_comparer(void *x, void *y) {
    struct  student *s1=(struct student*) x;
    struct  student *s2=(struct student*) y;
    return  s2->age-s1->age;
}

void t_studnet(){
    c_list stu_list;
    c_list_create(&stu_list,NULL);
    for(int i=0;i<10;i++) {
        struct student *ss = malloc(sizeof(struct student));
        ss->age = i;
        strcpy(ss->name, "testX");
        char buf[10];
        sprintf(buf,"testX%d",ss->age);
        strcpy(ss->name,buf);
        printf("%d--%s\n", ss->age, ss->name);
        c_list_push_back(&stu_list, (value_type) ss);
    }
    c_reverse_iterator begin=c_list_rbegin(&stu_list);
    c_reverse_iterator last=c_list_rend(&stu_list);

    c_reverse_iterator iter;
    printf("list is :\n");
    for (iter = begin ;!ITER_EQUAL(iter, last); ITER_INC(iter)) {
        struct student *st = (struct student *) ITER_REF(iter);
        printf("student is %s %d\n", st->name, st->age);
    }

    c_list_destroy(&stu_list);
}
int main() {
    t_studnet();

   // t_list();
   // t_vector();
   // t_tree();
   // t_map();
   // t_set();
   // t_stack();
   // t_queue();
   // t_algo();

#ifdef WIN32
    system("pause");
#endif
    return 0;
}
