#ifndef TIME_PONTO_HPP
#define TIME_PONTO_HPP

#include <chrono>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <iostream>

using namespace std::literals; 

class Time_Ponto
{

		public:
			Time_Ponto();
			Time_Ponto(int h, int min, int s);
			~Time_Ponto();

		protected:

		private:
			void menu();

			int hh;
			int min;
			int sec;

			std::time_t t_c;
			std::chrono::time_point<std::chrono::system_clock> now;

};

#endif
