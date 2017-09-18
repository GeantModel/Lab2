#include <iostream>

int main() {
    int var;
    printf("Vvedite nomer varianta 1-5: ");
    scanf("%d",&var);
    printf("\n");
    switch (var) {
        case 1:
            for (int i=1; i<=256; i++){
                char c = i;
                if (i%5==0) {
                    printf("%c ", c);
                    std::cout<<"\n";
                }
                else printf("%c ", c);
            }
            break;
        case 2:
            for (int i=1; i<=256; i++){
                char c = i;
                if (i%2==0)
                    printf("%c ", c);
                else std::cout<<"\n";
            }
            break;
        case 3:
            for (int i=5; i<=10; i++){
                char c = i;
                printf("%c ", c); std::cout<<"1";}
            break;

        case 4:
            for (int i=20; i=30; i++){
                char c = i;
                printf("%c ", c);
                for (int j=1; j<=11; j++){
                    do printf(" ");
                    while (j!=(i%20));
                }
                std::cout<<"\n";}
            break;

        case 5:
            for (int i=50; i>=25; i--){
                char c = i;
                printf("%c ", c);
                std::cout<<"\n";}
            break;

        default: printf("Vvedite nomer 1-3");
    }
}
