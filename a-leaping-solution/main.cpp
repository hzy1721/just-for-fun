#include <cstdio>

using namespace std;

int main()
{
    printf("请输入您想跳下的教学楼的每层窗户数与总楼层数(用空格分隔): \n");
    int windowNumber, floorNumber;
    scanf("%d%d", &windowNumber, &floorNumber);
    printf("请输入您想位于的楼层: \n");
    int currentFloor;
    scanf("%d", &currentFloor);
    printf(" _");
    for (int i = 0; i < windowNumber * 3 + 1; ++i)
        printf("_");
    printf("_\n");
    for (int i = 0; i < floorNumber; ++i) {
        printf(" |");
        for (int j = 0; j < windowNumber * 3 + 1; ++j)
            printf(" ");
        printf("|");
        if (i == floorNumber - currentFloor)
            printf("  \\O/");
        else if (i == floorNumber - currentFloor + 1)
            printf("  /\\");
        printf("\n");
        printf(" |");
        for (int j = 0; j < windowNumber; ++j)
            printf(" 口");
        printf(" |");
        if (i == floorNumber - currentFloor)
            printf("   /");
        printf("\n");
    }
    printf("_|");
    for (int i = 0; i < windowNumber * 3 + 1; ++i)
        printf("_");
    printf("|_");
    for (int i = 0; i < 6; ++i)
        printf("_");
    printf("\n");
    return 0;
}