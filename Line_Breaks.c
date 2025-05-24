#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, m, i, current_length = 0, x = 0;
        scanf("%d %d", &n, &m);

        for (i = 0; i < n; i++) {
            char word[11];
            scanf("%s", word);

            int word_length = 0;
            while (word[word_length] != '\0') {
                word_length++;
            }

            if (current_length + word_length <= m) {
                current_length += word_length;
                x++;
            } else {
                break;
            }
        }

        printf("%d\n", x);

        for (; i < n; i++) {
            char dummy[11];
            scanf("%s", dummy);
        }
    }

    return 0;
}
