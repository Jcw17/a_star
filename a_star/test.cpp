#include "a_star.cpp"

int main(){
	a_star my = a_star(0,0,4,5);
	auto board = my.ReadBoardFile("1.board");
	auto solution = my.Search(board, my.init, my.goal);
	my.PrintBoard(solution);
}