#include <stdio.h>
#include <stdlib.h>
struct ListNode {
    int val;
    struct ListNode* next;
};
int* nodesBetweenCriticalPoints(struct ListNode* head, int* returnSize){
    if (!head || !head->next || !head->next->next) {
        int* result = (int*)malloc(2 * sizeof(int));
        result[0] = -1;
        result[1] = -1;
        return result;
    }
    struct ListNode* prev = head;
    struct ListNode* curr = head->next;
    struct ListNode* next = curr->next;
    int positions[1000];
    int count = 0;
    int index = 1;
    while (next) {
        if ((curr->val > prev->val && curr->val > next->val) ||
            (curr->val < prev->val && curr->val < next->val)) {
            positions[count++] = index;
        }
        prev = curr;
        curr = next;
        next = next->next;
        index++;
    }
    if (count <= 2) {
        int* result = (int*)malloc(2 * sizeof(int));
        result[0] = -1;
        result[1] = -1;
        return result;
    }
    int* result = (int*)malloc(2 * sizeof(int));
    int minDistance = __INT_MAX__;
    int maxDistance = -__INT_MAX__;
    
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            int distance = abs(positions[j] - positions[i]);
            if (distance < minDistance) {
                minDistance = distance;
            }
            if (distance > maxDistance) {
                maxDistance = distance;
            }
        }
    }  
    result[0] = minDistance;
    result[1] = maxDistance;
    *returnSize = 2;
    return result;
}
struct ListNode* newNode(int value) {
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = value;
    node->next = NULL;
    return node;
}
void appendNode(struct ListNode** headRef, int value) {
    struct ListNode* new_node = newNode(value);
    if (*headRef == NULL) {
        *headRef = new_node;
        return;
    }
    struct ListNode* last = *headRef;
    while (last->next != NULL) {
        last = last->next;
    }
    last->next = new_node;
}
void freeList(struct ListNode* head) {
    struct ListNode* tmp;
    while (head) {
        tmp = head;
        head = head->next;
        free(tmp);
    }
}
void printResult(int* result) {
    printf("[%d, %d]\n", result[0], result[1]);
}
int main() {
    struct ListNode* head = NULL;
    appendNode(&head, 3);
    appendNode(&head, 1);
    int returnSize;
    int* result = nodesBetweenCriticalPoints(head,&returnSize);
    printResult(result);
    free(result);
    freeList(head);
    return 0;
}
