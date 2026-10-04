#include <stdio.h>
    int main() {

    
        int age = 35;
        float height = 1.5;
        char name[] = "joe";
        double pi = 3.1454831235642905;
        

        char name1[30] = "";
        int age1;
        float height1;
        double e;


        printf("hello stranger\n");
        printf("im %s\n" , name);
        printf("my age is %d\n" ,age);
        printf("my height is %.2f\nm" ,height);
        printf("the value of pi is %.10lf\n" ,pi);

        printf("enter ur name: ");
        scanf("%s" ,name1); /*why & is not used*/

        printf("enter ur age: ");
        scanf("%d" ,&age1);

        printf("enter ur heightin meters: ");
        scanf("%f" ,&height1);

        printf("enter the value of e(euler): ");
        scanf("%lf" ,&e);


        printf("hello, %s\n" ,name1);
        printf("ur age is %d\n" ,age1);
        printf("ur height is %.2f\nm" ,height1);
        printf("the value of e according to u is %.10lf\n" ,e);



        return 0;


    }