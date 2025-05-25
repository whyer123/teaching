#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *p_in = fopen("10co2008CO.txt", "r");
    FILE *p_out = fopen("out.txt", "w");

    if (!p_in || !p_out) {
        perror("File open error");
        return 1;
    }

    char line[100];
    char date[30], time[30];
    float close;

    char current_date[30] = "";
    float sum = 0;
    int count = 0;

    fprintf(p_out, "Date        avg_close\n");

    // skip the header
    fgets(line, sizeof(line), p_in);

    while (fgets(line, sizeof(line), p_in)) {
        sscanf(line, "%s %s %f", date, time, &close);

        if (strcmp(current_date, "") == 0) {
            strcpy(current_date, date);
        }

        if (strcmp(current_date, date) == 0) {
            sum += close;
            count++;
        } else {
            // write previous date result
            fprintf(p_out, "%s %.4f\n", current_date, sum / count);

            // reset for new date
            strcpy(current_date, date);
            sum = close;
            count = 1;
        }
    }

    // write last date
    if (count > 0) {
        fprintf(p_out, "%s %.4f\n", current_date, sum / count);
    }

    fclose(p_in);
    fclose(p_out);
    return 0;
}