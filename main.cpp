#include <iostream>
using namespace std;
int main() {
    int var;
    printf("Vvedite nomer varianta 1-5: ");
    scanf("%d", &var);
    printf("\n");
    switch (var) {
        case 1:
            for (int i=1; i<=256; i++){
                char c = i;
                if (i%5==0) {
                    printf("%c ", c);
                    cout<<"\n";
                }
                else printf("%c ", c);
            }
            break;
        case 2:
            for (int i=1; i<=256; i++){
                char c = i;
                if (i%2==0)
                    printf("%c ", c);
                else cout<<"\n";
            }
            break;
        case 3:
            for (int i=5; i<=10; i++){
                char c = i;
                printf("%c ", c); cout<<" ";}
            break;
        case 4:
            for (int i=20; i<=30; i++){
                char c = i;
                for (int j=1; j<=(i%20); j++){
                    cout<<" ";
                }
                printf("%c ", c);
                cout<<"\n";}
            break;
        case 5:
            for (int i=50; i>=25; i--){
                char c = i;
                printf("%c ", c);
                cout<<"\n";}
            break;

        default: printf("Vvedite nomer 1-5");
    }
}
