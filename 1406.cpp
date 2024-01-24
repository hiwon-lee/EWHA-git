// 에디터
#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
using namespace std;

// 단순 연결 리스트의 노드 구조 정의
typedef struct ListNode
{
    char data;
    struct ListNode *link;
} listNode;

// 리스트 시작을 나타내는 head 노드를 구조체로 정의
typedef struct
{
    ListNode *head;
} linkedList_h;

// 공백 연결 리스트를 생성하는 연산
linkedList_h *createLinkedList_h(void)
{
    linkedList_h *L;
    L = (linkedList_h *)malloc(sizeof(linkedList_h));
    L->head = NULL; // 공백 리스트이므로 NULL로 설정
    return L;
}

// 여결 리스트의 전체 메모리를 해제하는 연산
void freeLinkedList_h(linkedList_h *L)
{
    listNode *p;
    while (L->head != NULL)
    {
        p = L->head;
        L->head = L->head->link;
        free(p);
        p = NULL;
    }
}

// 연결 리스트를 순서대로 출력하는 연산
void printList(linkedList_h *L)
{
    listNode *p;
    printf("L = ");
    p = L->head;
    while (p != NULL)
    {
        printf("%s", p->data);
        p = p->link;
        if (p != NULL)
            printf(", ");
    }
    printf(" \n");
}

// 첫 번째 노드로 삽입하는 연산
void insertFirstNode(linkedList_h *L, char *x)
{
    listNode *newNode;
    newNode = (listNode *)malloc(sizeof(listNode)); // 삽입할 새 노드 할당
    strcpy(newNode->data, x);                       // 새 노드의 데이터 필드에 x저장
    newNode->link = L->head;
    L->head = newNode;
}

// 노드를 pre 뒤에 삽입하는 연산
void insertMiddleNode(linkedList_h *L, listNode *pre, char *x)
{
    listNode *newNode;
    newNode = (listNode *)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    if (L == NULL)
    {
        newNode->link = NULL;
        L->head = newNode;
    }
    else if (pre == NULL)
    {
        L->head = newNode;
    }
    else
    {
        newNode->link = pre->link; // 포인터 pre의 노드 뒤에 새 노드 연결
        pre->link = newNode;
    }
}

// 마지막 노드로 삽입하는 연산
void insertLastNode(linkedList_h *L, char *x)
{
    listNode *newNode;
    listNode *temp;
    newNode - (listNode *)malloc(sizeof(listNode));
    strcpy(newNode->data, x);
    newNode->link = NULL;
    if (L->head == NULL)
    {
        L->head = newNode;
        return;
    }

    // 현재 리스트가 공백이 아닌 경우
    temp = L->head;
    while (temp->link != NULL)
        temp = temp->link;
    temp->link = newNode;
}

void deleteNode(linkedList_h *L, listNode *p)
{
    listNode *pre;
    if (L->head == NULL)
        return;
    if (L->head->link == NULL)
    {
        free(L->head);
        L->head = NULL;
        return;
    }
    else if (p == NULL)
        return;
    else
    {
        pre = L->head;
        while (pre->link != p)
        {
            pre = pre->link;
        }
        pre->link = p->link;
        free(p);
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    cin >> str;

    int n;
    cin >> n;
    int idx = str.size();
    char order;
    
    while (n--)
    {
        cin >> order;

        switch (order)
        {
        case 'L':
            if (idx != 0)
                idx--;
            break;
        case 'D':
            if (idx < str.size())
                idx++;
            break;
        case 'B':
            // cout << "B";
            if (idx != 0)
            {
                // cout << idx << endl;
                str.erase(str.begin() + idx - 1, str.begin() + idx);
                idx = idx ? idx - 1 : 0;
                // cout << idx << endl;
            }
            // cout << "erase : " << str << endl;
            break;
        case 'P':
            char ele;
            cin >> ele;
            str.insert(str.begin() + idx, ele);
            idx++;
            // cout << "insert : " << str << endl;

            break;
            // default:
            //     cout << str << endl;
            //     break;
        }

        // cout << idx << endl;
    }
    printf("%s\n", str.c_str());
}
