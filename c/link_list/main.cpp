#include <stdio.h>

// 今天來學一個最基本的資料結構-> link list
// 簡單來說 之前學過陣列 假設有一個陣列存1 2 3 4 5 我們如果要刪掉中間的3 
// 會很麻煩 你要把後面所有的資料全部往前移一格 而link list 解決了這個問提
// 我們之前應該有提過link list長怎樣 如果忘記可以查一下或是問gpt 
// 這是一個非常好檢測c語言有沒有學好的機會 他用到pointer struct 以及 new 等重要觀念

typedef struct node {
    int data;
    struct node *p_next;
}node;

void node_insert( node *p_head , int num ) {

    node *p_new = new node; //建立一個新節點 塞到最後面
    p_new->data = num;      //把資料線放進去
    p_new->p_next = NULL;   //最後一個節點 讓他指向null

    node *p = p_head;
    while( p->p_next != NULL ) { //用迴圈 讓他跑到最後一個節點
        p = p->p_next;
    }

    p->p_next = p_new; //此時把原本最後一個節點 讓他的next 指向新增的節點 (新節點變最後一個)
}

void node_delete( node *p_head , int num ) {

    node *p = p_head->p_next;     //用來找刪掉資料的節點在哪
    node *p_prev = p_head;        // 用來找上面那的節點的前一個

    while( p != NULL && p->data != num ) {    //找到我們要刪掉的節點 (根據num值) 但要注意 num 可能根本沒有在list裡面
        p = p->p_next;
        p_prev = p_prev->p_next; //兩的節點都往前一格
    }
    
    if( p == NULL ) return;      // num 根本就不在list裡
    p_prev->p_next = p->p_next;  //刪掉節點的方式 其實就是讓該節點前面節點的next 直接指向該節點的next 跳過他的概念
    delete p;                    //記得還給電腦記憶體

}

void print_list( node *p_head ) {
    
    node *p = p_head->p_next;
    while( p != NULL ) {
        printf("%d ", p->data);
        p = p->p_next;
   }
   printf("\n");
}

int main( ) {

    node my_list;
    my_list.data = 0;
    my_list.p_next = NULL; //這是一個小技巧叫 dummy head 
                           //我們第一個節點不放資料不使用 如果不這樣做 delete會出問題 
                           // (當然也可以選擇不要 但delete你就要考慮 第一個節點要怎麼刪掉 你可以試試)

    node_insert( &my_list ,  1 ); //就新增節點
    node_insert( &my_list ,  2 );
    node_insert( &my_list ,  3 );
    node_insert( &my_list ,  4 );
    node_insert( &my_list ,  5 );
    
    printf("first print:\n");
    print_list( &my_list );       // 印出來

    node_delete( &my_list , 3 );  // 刪除節點

    printf("second print:\n");    // 刪除後再印一次
    print_list( &my_list );

    return 0;
}