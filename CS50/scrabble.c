#include <ctype.h>
#include <stdio.h>
#include <string.h>

int compute_score(char word[]);
int POINTS[] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int main(void) {
  char word1[100] = {};
  char word2[100] = {};
  printf("Player 1:\t");
  scanf("%s", word1);
  printf("Player 2:\t");
  scanf("%s", word2);

  // computing the score of each word
  int score1 = compute_score(word1);
  int score2 = compute_score(word2);

  if ( score1 > score2) {
    printf("Player 1 won!\n");
  } else if (score2 > score1) {
    printf("Player 2 won!\n");
  } else {
    printf("Tie\n");
  }
}

int compute_score(char word[]) {
  int score = 0;

  for (int i = 0, len = strlen(word); i < len; i++) {
    if (isupper(word[i])) {
      score += POINTS[word[i] - 'A'];
    } else if (islower(word[i])) {
      score += POINTS[word[i] - 'a'];
    }
  }
  return score;
}
