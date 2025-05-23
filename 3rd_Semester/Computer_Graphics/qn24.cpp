// Write a C program to implement Painter’s Algorithm. 

#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_OBJECTS 10  
/*
INPUT TO BE GIVEN.....
Enter number of objects: 3

Enter x1, y1, x2, y2, depth (z), and color for object 1: 
100 100 200 200 2 4

Enter x1, y1, x2, y2, depth (z), and color for object 2: 
120 120 250 250 5 2

Enter x1, y1, x2, y2, depth (z), and color for object 3: 
140 140 300 300 1 14
*/

typedef struct {
    int x1, y1, x2, y2, z; 
    int color;             
} Object;

Object objects[MAX_OBJECTS];
int n; 

void swap(Object *a, Object *b) {
    Object temp = *a;
    *a = *b;
    *b = temp;
}

// Sort objects by depth (Descending order)
void sortObjectsByDepth() {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (objects[j].z < objects[j + 1].z) {
                swap(&objects[j], &objects[j + 1]);
            }
        }
    }
}

// Draw objects from farthest to nearest
void drawObjects() {
    for (int i = 0; i < n; i++) {
        setcolor(objects[i].color);
        rectangle(objects[i].x1, objects[i].y1, objects[i].x2, objects[i].y2);
        floodfill((objects[i].x1 + objects[i].x2) / 2, (objects[i].y1 + objects[i].y2) / 2, objects[i].color);
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    printf("Enter number of objects (max %d): ", MAX_OBJECTS);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter x1, y1, x2, y2, depth (z), and color for object %d: ", i + 1);
        scanf("%d %d %d %d %d %d", &objects[i].x1, &objects[i].y1, &objects[i].x2, &objects[i].y2, &objects[i].z, &objects[i].color);
    }

    sortObjectsByDepth(); // Sort objects by depth
    drawObjects();        // Draw objects using Painter’s Algorithm

    printf("Painter's Algorithm Applied. Press any key to exit.");
    getch();
    closegraph();

    return 0;
}
