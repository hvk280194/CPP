#ifndef _BOARD_H_
#define _BOARD_H_

constexpr int MY_SIZE = 3;
constexpr char DIGITS[] = { '0','1','2', '3', '4', '5', '6', '7', '8', '9' };

class Board {
public:
	Board() = default;
	virtual ~Board()=default;
	virtual void initialize();
	virtual void draw();
	virtual bool update(int position);
	virtual bool check();

	virtual char* getBoard() {
		return &board_[0][0];
	}

	virtual char getMark() {
		return mark_;
	}
	 

private:
	char board_[MY_SIZE][MY_SIZE];
	char mark_;
};

#endif // !_BOARD_H_

