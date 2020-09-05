#include <bits/stdc++.h>
using namespace std;

string map[101] = {
	"                     ",
	" ################### ",
	" #    ##           # ",
	" #    O#   @@@@@@  # ",
	" #    ## @@@@      # ",
	" #   ##     A      # ",
	" #     @@@@  ###   # ",
	" #  @@@@@          # ",
	" #         O       # ",
	" ################### ",
	"                     "
};

struct Monster {
	int x;
	int y;
	void move() {
		srand(time(NULL));
		while (true) {
			fan = rand() % 4 + 1;
			switch (fan) {
				case 1:
					if (map[x+1][y] == ' ') {
						x++;
						return;
					}
					break;
				case 2:
					if (map[x-1][y] == ' ') {
						x--;
						return;
					}
					break;
				case 3:
					if (map[x][y+1] == ' ') {
						y++;
						return;
					}
					break;
				case 4:
					if (map[x][y-1] == ' ') {
						y--;
						return;
					}
					break;
				}
			}
		}
	}
}
