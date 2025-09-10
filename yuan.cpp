#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

void bf_function() {
	vector<unsigned char> tape(66, 0);
	unsigned char* ptr = tape.data();
	ptr += 65;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 1;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 3;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 3;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 11;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 1;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 10;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 6;
	putchar(*ptr);
	ptr -= 64;
	while (*ptr) {
		*ptr -= 1;
	}
	*ptr += 10;
	ptr += 3;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		ptr += 3;
		*ptr += 1;
		ptr -= 3;
		*ptr -= 1;
	}
	ptr += 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 5;
	while (*ptr) {
		ptr += 5;
		*ptr += 1;
		ptr -= 8;
		*ptr += 1;
		ptr += 3;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 5;
	while (*ptr) {
		ptr -= 5;
		*ptr += 1;
		ptr += 5;
		*ptr -= 1;
	}
	ptr -= 4;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		ptr += 1;
		*ptr += 1;
		ptr += 4;
		*ptr += 1;
		ptr -= 5;
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 3;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		ptr += 3;
		*ptr += 1;
		ptr -= 3;
		*ptr -= 1;
	}
	ptr += 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 5;
	while (*ptr) {
		ptr += 5;
		*ptr += 1;
		ptr -= 8;
		*ptr += 1;
		ptr += 3;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 5;
	while (*ptr) {
		ptr -= 5;
		*ptr += 1;
		ptr += 5;
		*ptr -= 1;
	}
	ptr -= 2;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		ptr += 3;
		*ptr += 1;
		ptr += 2;
		*ptr += 1;
		ptr -= 5;
		*ptr -= 1;
	}
	ptr += 1;
	while (*ptr) {
		ptr -= 4;
		while (*ptr) {
			*ptr -= 1;
		}
		*ptr += 10;
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			ptr += 1;
			*ptr += 1;
			ptr += 4;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 3;
		// 读输入账号
		*ptr = getchar();
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr += 2;
			*ptr += 1;
			ptr += 3;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		while (*ptr) {
			ptr -= 1;
			*ptr += 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 4;
			*ptr += 1;
			ptr -= 1;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 2;
			*ptr -= 1;
		}
		ptr += 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 6;
		while (*ptr) {
			ptr += 6;
			*ptr += 1;
			ptr -= 4;
			*ptr += 1;
			ptr -= 2;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 6;
		while (*ptr) {
			ptr -= 6;
			*ptr += 1;
			ptr += 6;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 6;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			ptr -= 3;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr -= 1;
			*ptr -= 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			ptr += 1;
			*ptr += 1;
			ptr += 4;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			ptr -= 3;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 2;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			*ptr -= 1;
		}
		*ptr += 31;
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 9;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 6;
		while (*ptr) {
			ptr += 6;
			*ptr += 1;
			ptr -= 9;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 6;
		while (*ptr) {
			ptr -= 6;
			*ptr += 1;
			ptr += 6;
			*ptr -= 1;
		}
		ptr -= 7;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		while (*ptr) {
			ptr -= 1;
			*ptr += 1;
			ptr += 7;
			*ptr += 1;
			ptr -= 6;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 7;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 7;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr += 1;
			while (*ptr) {
				ptr -= 2;
				*ptr += 1;
				ptr += 3;
				*ptr += 1;
				ptr -= 1;
				*ptr -= 1;
			}
			ptr += 1;
			while (*ptr) {
				ptr -= 1;
				*ptr += 1;
				ptr += 1;
				*ptr -= 1;
			}
			ptr -= 2;
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 2;
			*ptr -= 1;
		}
		ptr += 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 6;
		while (*ptr) {
			ptr += 6;
			*ptr += 1;
			ptr -= 4;
			*ptr += 1;
			ptr -= 2;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 6;
		while (*ptr) {
			ptr -= 6;
			*ptr += 1;
			ptr += 6;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 6;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			ptr -= 3;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr -= 1;
			*ptr += 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr += 2;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr += 1;
	}
	ptr += 61;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 1;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 15;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 15;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 3;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 11;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 14;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 8;
	while (*ptr) {
		ptr -= 1;
		*ptr += 8;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	putchar(*ptr);
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	*ptr += 6;
	while (*ptr) {
		ptr -= 1;
		*ptr += 6;
		ptr += 1;
		*ptr -= 1;
	}
	*ptr += 4;
	while (*ptr) {
		ptr -= 1;
		*ptr += 4;
		ptr += 1;
		*ptr -= 1;
	}
	ptr -= 1;
	*ptr += 6;
	putchar(*ptr);
	ptr -= 64;
	while (*ptr) {
		*ptr -= 1;
	}
	*ptr += 10;
	ptr += 3;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		ptr += 3;
		*ptr += 1;
		ptr -= 3;
		*ptr -= 1;
	}
	ptr += 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 5;
	while (*ptr) {
		ptr += 5;
		*ptr += 1;
		ptr -= 8;
		*ptr += 1;
		ptr += 3;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 5;
	while (*ptr) {
		ptr -= 5;
		*ptr += 1;
		ptr += 5;
		*ptr -= 1;
	}
	ptr -= 4;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		ptr += 1;
		*ptr += 1;
		ptr += 4;
		*ptr += 1;
		ptr -= 5;
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 3;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		ptr += 3;
		*ptr += 1;
		ptr -= 3;
		*ptr -= 1;
	}
	ptr += 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 5;
	while (*ptr) {
		ptr += 5;
		*ptr += 1;
		ptr -= 8;
		*ptr += 1;
		ptr += 3;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 5;
	while (*ptr) {
		ptr -= 5;
		*ptr += 1;
		ptr += 5;
		*ptr -= 1;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 4;
	while (*ptr) {
		ptr += 4;
		*ptr += 1;
		ptr += 1;
		*ptr += 1;
		ptr -= 5;
		*ptr -= 1;
	}
	ptr += 1;
	while (*ptr) {
		ptr -= 4;
		while (*ptr) {
			*ptr -= 1;
		}
		*ptr += 10;
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			ptr += 1;
			*ptr += 1;
			ptr += 4;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 3;
		// 读输入密码
		*ptr = getchar();
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr += 2;
			*ptr += 1;
			ptr += 3;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		while (*ptr) {
			ptr -= 1;
			*ptr += 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 4;
			*ptr += 1;
			ptr -= 1;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 2;
			*ptr -= 1;
		}
		ptr += 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 6;
		while (*ptr) {
			ptr += 6;
			*ptr += 1;
			ptr -= 4;
			*ptr += 1;
			ptr -= 2;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 6;
		while (*ptr) {
			ptr -= 6;
			*ptr += 1;
			ptr += 6;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 6;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			ptr -= 3;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr -= 1;
			*ptr -= 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 4;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			ptr += 1;
			*ptr += 1;
			ptr += 4;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 2;
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 3;
			*ptr += 1;
			ptr -= 2;
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			*ptr -= 1;
		}
		*ptr += 10;
		ptr += 3;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 9;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 6;
		while (*ptr) {
			ptr += 6;
			*ptr += 1;
			ptr -= 9;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 6;
		while (*ptr) {
			ptr -= 6;
			*ptr += 1;
			ptr += 6;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 6;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			ptr -= 3;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr -= 1;
			*ptr -= 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 3;
		while (*ptr) {
			ptr += 3;
			*ptr += 1;
			ptr -= 3;
			*ptr -= 1;
		}
		ptr += 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 8;
			*ptr += 1;
			ptr += 3;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 8;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 3;
		while (*ptr) {
			ptr -= 3;
			*ptr += 1;
			ptr += 8;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr += 1;
			*ptr += 1;
			ptr += 1;
			*ptr += 1;
			ptr -= 2;
			*ptr -= 1;
		}
		ptr += 1;
		while (*ptr) {
			ptr -= 1;
			*ptr += 1;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 1;
		ptr += 1;
		while (*ptr) {
			ptr += 1;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 2;
			while (*ptr) {
				ptr += 2;
				*ptr += 1;
				ptr -= 2;
				*ptr -= 1;
			}
			ptr += 7;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 5;
			while (*ptr) {
				ptr += 5;
				*ptr += 1;
				ptr -= 7;
				*ptr += 1;
				ptr += 2;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 1;
			while (*ptr) {
				ptr += 1;
				*ptr += 1;
				ptr -= 1;
				*ptr -= 1;
			}
			ptr += 7;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 6;
			while (*ptr) {
				ptr += 6;
				*ptr += 1;
				ptr -= 7;
				*ptr += 1;
				ptr += 1;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 4;
			while (*ptr) {
				ptr -= 4;
				*ptr += 1;
				ptr += 4;
				*ptr -= 1;
			}
			ptr += 3;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 7;
			while (*ptr) {
				ptr += 7;
				*ptr += 1;
				ptr -= 3;
				*ptr += 1;
				ptr -= 4;
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				*ptr -= 1;
			}
			*ptr += 10;
			ptr += 3;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				ptr += 3;
				*ptr += 1;
				ptr -= 3;
				*ptr -= 1;
			}
			ptr += 11;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 8;
			while (*ptr) {
				ptr += 8;
				*ptr += 1;
				ptr -= 11;
				*ptr += 1;
				ptr += 3;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 8;
			while (*ptr) {
				ptr -= 8;
				*ptr += 1;
				ptr += 8;
				*ptr -= 1;
			}
			ptr -= 9;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 1;
			while (*ptr) {
				ptr -= 1;
				*ptr += 1;
				ptr += 9;
				*ptr += 1;
				ptr -= 8;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 7;
			while (*ptr) {
				ptr -= 7;
				*ptr += 1;
				ptr += 7;
				*ptr -= 1;
			}
			ptr -= 9;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				ptr -= 2;
				*ptr += 1;
				ptr += 9;
				*ptr += 1;
				ptr -= 7;
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 3;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 2;
			while (*ptr) {
				ptr += 1;
				while (*ptr) {
					ptr -= 2;
					*ptr += 1;
					ptr += 3;
					*ptr += 1;
					ptr -= 1;
					*ptr -= 1;
				}
				ptr += 1;
				while (*ptr) {
					ptr -= 1;
					*ptr += 1;
					ptr += 1;
					*ptr -= 1;
				}
				ptr -= 2;
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				ptr += 3;
				*ptr += 1;
				ptr -= 3;
				*ptr -= 1;
			}
			ptr += 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 7;
			while (*ptr) {
				ptr += 7;
				*ptr += 1;
				ptr -= 10;
				*ptr += 1;
				ptr += 3;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				ptr -= 2;
				*ptr += 1;
				ptr += 2;
				*ptr -= 1;
			}
			ptr += 6;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 8;
			while (*ptr) {
				ptr += 8;
				*ptr += 1;
				ptr -= 6;
				*ptr += 1;
				ptr -= 2;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 8;
			while (*ptr) {
				ptr -= 8;
				*ptr += 1;
				ptr += 8;
				*ptr -= 1;
			}
			ptr -= 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				ptr -= 2;
				*ptr += 1;
				ptr += 10;
				*ptr += 1;
				ptr -= 8;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 7;
			while (*ptr) {
				ptr -= 7;
				*ptr += 1;
				ptr += 7;
				*ptr -= 1;
			}
			ptr -= 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 3;
			while (*ptr) {
				ptr -= 3;
				*ptr += 1;
				ptr += 10;
				*ptr += 1;
				ptr -= 7;
				*ptr -= 1;
			}
			ptr -= 2;
			while (*ptr) {
				ptr -= 1;
				*ptr += 1;
				ptr += 1;
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				ptr += 3;
				*ptr += 1;
				ptr -= 3;
				*ptr -= 1;
			}
			ptr += 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 7;
			while (*ptr) {
				ptr += 7;
				*ptr += 1;
				ptr -= 10;
				*ptr += 1;
				ptr += 3;
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				*ptr -= 1;
			}
			*ptr += 48;
			ptr += 3;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				ptr += 3;
				*ptr += 1;
				ptr -= 3;
				*ptr -= 1;
			}
			ptr += 11;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 8;
			while (*ptr) {
				ptr += 8;
				*ptr += 1;
				ptr -= 11;
				*ptr += 1;
				ptr += 3;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 8;
			while (*ptr) {
				ptr -= 8;
				*ptr += 1;
				ptr += 8;
				*ptr -= 1;
			}
			ptr -= 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				ptr -= 2;
				*ptr += 1;
				ptr += 10;
				*ptr += 1;
				ptr -= 8;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 7;
			while (*ptr) {
				ptr -= 7;
				*ptr += 1;
				ptr += 7;
				*ptr -= 1;
			}
			ptr -= 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 3;
			while (*ptr) {
				ptr -= 3;
				*ptr += 1;
				ptr += 10;
				*ptr += 1;
				ptr -= 7;
				*ptr -= 1;
			}
			ptr -= 2;
			while (*ptr) {
				ptr -= 1;
				*ptr -= 1;
				ptr += 1;
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				ptr += 3;
				*ptr += 1;
				ptr -= 3;
				*ptr -= 1;
			}
			ptr += 10;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 7;
			while (*ptr) {
				ptr += 7;
				*ptr += 1;
				ptr -= 10;
				*ptr += 1;
				ptr += 3;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 7;
			while (*ptr) {
				ptr -= 7;
				*ptr += 1;
				ptr += 7;
				*ptr -= 1;
			}
			ptr -= 3;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr -= 4;
			while (*ptr) {
				ptr += 4;
				*ptr += 1;
				ptr += 3;
				*ptr += 1;
				ptr -= 7;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 6;
			while (*ptr) {
				ptr -= 6;
				*ptr += 1;
				ptr += 6;
				*ptr -= 1;
			}
			ptr -= 7;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 1;
			while (*ptr) {
				ptr -= 1;
				*ptr += 1;
				ptr += 7;
				*ptr += 1;
				ptr -= 6;
				*ptr -= 1;
			}
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 5;
			while (*ptr) {
				ptr -= 5;
				*ptr += 1;
				ptr += 5;
				*ptr -= 1;
			}
			ptr -= 7;
			while (*ptr) {
				*ptr -= 1;
			}
			ptr += 2;
			while (*ptr) {
				ptr -= 2;
				*ptr += 1;
				ptr += 7;
				*ptr += 1;
				ptr -= 5;
				*ptr -= 1;
			}
			ptr -= 2;
			*ptr -= 1;
			ptr += 1;
			while (*ptr) {
				*ptr -= 1;
			}
		}
		ptr += 2;
	}
	ptr -= 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 3;
	while (*ptr) {
		ptr -= 3;
		*ptr += 1;
		ptr += 3;
		*ptr -= 1;
	}
	ptr += 2;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 5;
	while (*ptr) {
		ptr += 5;
		*ptr += 1;
		ptr -= 2;
		*ptr += 1;
		ptr -= 3;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 4;
	while (*ptr) {
		ptr -= 4;
		*ptr += 1;
		ptr += 4;
		*ptr -= 1;
	}
	ptr += 2;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 6;
	while (*ptr) {
		ptr += 6;
		*ptr += 1;
		ptr -= 2;
		*ptr += 1;
		ptr -= 4;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 6;
	while (*ptr) {
		ptr -= 6;
		*ptr += 1;
		ptr += 6;
		*ptr -= 1;
	}
	ptr -= 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 2;
	while (*ptr) {
		ptr -= 2;
		*ptr += 1;
		ptr += 8;
		*ptr += 1;
		ptr -= 6;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 5;
	while (*ptr) {
		ptr -= 5;
		*ptr += 1;
		ptr += 5;
		*ptr -= 1;
	}
	ptr -= 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 3;
	while (*ptr) {
		ptr -= 3;
		*ptr += 1;
		ptr += 8;
		*ptr += 1;
		ptr -= 5;
		*ptr -= 1;
	}
	ptr -= 2;
	while (*ptr) {
		ptr -= 1;
		*ptr -= 1;
		ptr += 1;
		*ptr -= 1;
	}
	ptr += 2;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 3;
	while (*ptr) {
		ptr += 3;
		*ptr += 1;
		ptr -= 3;
		*ptr -= 1;
	}
	ptr += 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 5;
	while (*ptr) {
		ptr += 5;
		*ptr += 1;
		ptr -= 8;
		*ptr += 1;
		ptr += 3;
		*ptr -= 1;
	}
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 5;
	while (*ptr) {
		ptr -= 5;
		*ptr += 1;
		ptr += 5;
		*ptr -= 1;
	}
	ptr -= 8;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 3;
	while (*ptr) {
		ptr -= 3;
		*ptr += 1;
		ptr += 8;
		*ptr += 1;
		ptr -= 5;
		*ptr -= 1;
	}
	ptr -= 2;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr += 1;
	while (*ptr) {
		*ptr -= 1;
	}
	ptr -= 2;
	while (*ptr) {
		ptr += 1;
		*ptr += 1;
		ptr += 1;
		*ptr += 1;
		ptr -= 2;
		*ptr -= 1;
	}
	ptr += 1;
	while (*ptr) {
		ptr -= 1;
		*ptr += 1;
		ptr += 1;
		*ptr -= 1;
	}
	// 失败逻辑，第二位指针 值不为0就算失败了
	*ptr += 1;
	ptr += 1;
	printf("第2位对应的ASCII字符是%d\n", (int)*ptr);
	while (*ptr) {
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 2;
		while (*ptr) {
			ptr += 2;
			*ptr += 1;
			ptr -= 2;
			*ptr -= 1;
		}
		ptr += 7;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 5;
		while (*ptr) {
			ptr += 5;
			*ptr += 1;
			ptr -= 7;
			*ptr += 1;
			ptr += 2;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			ptr += 1;
			*ptr += 1;
			ptr -= 1;
			*ptr -= 1;
		}
		ptr += 7;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 6;
		while (*ptr) {
			ptr += 6;
			*ptr += 1;
			ptr -= 7;
			*ptr += 1;
			ptr += 1;
			*ptr -= 1;
		}
		ptr += 62;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 5;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 14;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 14;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 11;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 14;
		putchar(*ptr);
		ptr -= 61;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 6;
		while (*ptr) {
			ptr -= 6;
			*ptr += 1;
			ptr += 6;
			*ptr -= 1;
		}
		ptr -= 7;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		while (*ptr) {
			ptr -= 1;
			*ptr += 1;
			ptr += 7;
			*ptr += 1;
			ptr -= 6;
			*ptr -= 1;
		}
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 5;
		while (*ptr) {
			ptr -= 5;
			*ptr += 1;
			ptr += 5;
			*ptr -= 1;
		}
		ptr -= 7;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 2;
		while (*ptr) {
			ptr -= 2;
			*ptr += 1;
			ptr += 7;
			*ptr += 1;
			ptr -= 5;
			*ptr -= 1;
		}
		ptr -= 2;
		*ptr -= 1;
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
	}
	// 成功逻辑，第一位指针要有值
	ptr -= 1;
	printf("第1位对应的ASCII字符是%d\n", (int)*ptr);
	while (*ptr) {
		ptr += 64;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 4;
		while (*ptr) {
			ptr -= 1;
			*ptr += 4;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 3;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 4;
		while (*ptr) {
			ptr -= 1;
			*ptr += 4;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 1;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 4;
		while (*ptr) {
			ptr -= 1;
			*ptr += 4;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 4;
		while (*ptr) {
			ptr -= 1;
			*ptr += 4;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 3;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 4;
		while (*ptr) {
			ptr -= 1;
			*ptr += 4;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 4;
		while (*ptr) {
			ptr -= 1;
			*ptr += 4;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 3;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 1;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 15;
		putchar(*ptr);
		ptr += 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr -= 1;
		while (*ptr) {
			*ptr -= 1;
		}
		ptr += 1;
		*ptr += 8;
		while (*ptr) {
			ptr -= 1;
			*ptr += 8;
			ptr += 1;
			*ptr -= 1;
		}
		*ptr += 6;
		while (*ptr) {
			ptr -= 1;
			*ptr += 6;
			ptr += 1;
			*ptr -= 1;
		}
		ptr -= 1;
		*ptr += 15;
		putchar(*ptr);
		ptr -= 63;
		*ptr -= 1;
	}
}
int main() {
	while (true)
	{
		bf_function();
	}
	return 0;
}
