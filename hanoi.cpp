#include <iostream>
using namespace std;

void solveTowers(int disc, char src, char dst, char alt);

int main()
{
  solveTowers(4,'a','b','c');
  return 0;
}

void move(int disc, char src, char dst){
	cout << "Move disc from " << src << " to " << dst << endl;
}

void solveTowers(int disc, char src, char dst, char alt)
{
	if(disc == 1){
		move(disc, src, dst);
		return;
	}
	solveTowers(disc-1, src, alt, dst); //put them all except the biggest one on alternate peg
	move(disc, src, dst); //move the biggest peg to the bottom of the dst peg
	solveTowers(disc-1, alt, dst, src); //puts the rest of the pegs in order on top of the biggest peg on dst
}
