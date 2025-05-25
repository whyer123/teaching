// 輸入資料
    for (int i = 0; i < n; i++) {
        printf("輸入第 %d 筆資料:\n", i + 1);
        printf("姓名: ");
        scanf("%s", people[i].name);
        printf("出生年: ");
        scanf("%d", &people[i].bornYear);
        printf("電話: ");
        scanf("%s",