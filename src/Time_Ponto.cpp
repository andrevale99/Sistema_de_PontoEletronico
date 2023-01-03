#include "Time_Ponto.hpp"

Time_Ponto::Time_Ponto()
{
    now = std::chrono::system_clock::now();
	t_c = std::chrono::system_clock::to_time_t(now);

	std::cout << std::put_time(std::localtime(&t_c), "%F %T.\n");
}

Time_Ponto::Time_Ponto(int h, int min, int s)
	: hh(0), min(0), sec(0)
{
	if(h<0 || h>23)
		std::cerr << "[TIME_PONTO] HORA INVALIDO, colocando para 00 horas\n";

	if(min<0 || min>59)
		std::cerr << "[TIME_PONTO] MINUTO INVALIDO, colocando para 00 minutos\n";


	if(s<0 || s>59)
		std::cerr << "[TIME_PONTO] SEGUNDOS INVALIDO, colocando para 00 segundos\n";
	
	
}

Time_Ponto::~Time_Ponto()
{

}