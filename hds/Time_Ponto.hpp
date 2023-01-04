#ifndef TIME_PONTO_HPP
#define TIME_PONTO_HPP

#include <chrono>
#include <ctime>
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <cstdlib>
#include <fstream>

using std::system;

using namespace std::literals; 

class Time_Ponto
{

		public:
			Time_Ponto();
			Time_Ponto(int h, int min, int s);
			~Time_Ponto();

			void rotina();

		protected:

		private:
			void menu();
			void excluir_pessoa();
			void adicionar_pessoa();
			void ver_logs();
			void atualizar_relogio();
			void marcar_ponto();

			int hh;
			int min;
			int sec;

			short opcao = -1;

			std::time_t t_c;
			std::chrono::time_point<std::chrono::system_clock> now;

};

#endif
