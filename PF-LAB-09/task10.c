#include <stdio.h>

int basicattack(int dmg, int hp);
int powerstrike(int dmg, int hp);
int heal(int dmg, int hp);
int poisonattack(int dmg, int hp);

int main() {
    int hp = 100;
    int dmg = 25;
    int choice;
    int (*action)(int, int);
    int i;

    for (i = 0; i < 3; i++) {
        printf("\nTurn %d\n", i + 1);
        printf("Current HP: %d\n", hp);
        printf("1. Basic Attack\n");
        printf("2. Power Strike\n");
        printf("3. Heal\n");
        printf("4. Poison Attack\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            action = basicattack;
        } else if (choice == 2) {
            action = powerstrike;
        } else if (choice == 3) {
            action = heal;
        } else if (choice == 4) {
            action = poisonattack;
        } else {
            printf("Invalid choice\n");
            continue;
        }

        hp = action(dmg, hp);
        printf("Updated HP: %d\n", hp);
    }

    return 0;
}

int basicattack(int dmg, int hp) {
    hp = hp - dmg;
    return hp;
}

int powerstrike(int dmg, int hp) {
    hp = hp - (int)(dmg * 2.5);
    return hp;
}

int heal(int dmg, int hp) {
    hp = hp + 20;
    return hp;
}

int poisonattack(int dmg, int hp) {
    printf("Poison applied!\n");
    hp = hp - (dmg / 2);
    return hp;
}