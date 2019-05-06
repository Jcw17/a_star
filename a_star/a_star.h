#ifndef A_STAR             //先测试x是否被宏定义过
#define A_STAR
  
#include <algorithm>  // for sort
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

enum class State {kEmpty, kObstacle, kClosed, kPath, kStart, kFinish};

// directional deltas
const int delta[4][2]{{-1, 0}, {0, -1}, {1, 0}, {0, 1}};

class a_star{
public:
	//Car(string c, int n) : color(c), number(n) {}
	int init[2];
	int goal[2];

	a_star(int x1, i0nt y1, int x2, int y2);
	~a_star();

	vector<State> ParseLine(string line);
	vector<vector<State>> ReadBoardFile(string path) ;
	static bool Compare(const vector<int> a, const vector<int> b);
	void CellSort(vector<vector<int>> *v) ;
	int Heuristic(int x1, int y1, int x2, int y2);
	bool CheckValidCell(int x, int y, vector<vector<State>> &grid) ;
	void AddToOpen(int x, int y, int g, int h, vector<vector<int>> &openlist, vector<vector<State>> &grid);
	void ExpandNeighbors(const vector<int> &current, int goal[2], vector<vector<int>> &openlist, vector<vector<State>> &grid) ;
	vector<vector<State>> Search(vector<vector<State>> grid, int init[2], int goal[2]);
	string CellString(State cell);
	void PrintBoard(const vector<vector<State>> board);

private:

};








#endif 