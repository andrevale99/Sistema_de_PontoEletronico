#include "Time_Ponto.hpp"

//============================
//	PUBLIC
//============================
Time_Ponto::Time_Ponto()
{
    now = std::chrono::system_clock::now();
	t_c = std::chrono::system_clock::to_time_t(now);
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
	now = std::chrono::system_clock::now();
	t_c = std::chrono::system_clock::to_time_t(now);

	std::cout << "Programa Finalizado as "
			  << std::put_time(std::localtime(&t_c), "%D %T\n\n");
}

//============================
//	PROTECTED
//============================


//============================
//	PRIVATE
//============================
void Time_Ponto::rotina()
{
	while(opcao != 0)
	{
		menu();
		std::cin >> opcao;
		system("clear");
	}
}

void Time_Ponto::menu()
{
	std::cout << "*** PONTO ELETRONICO ***\n"
	 		  << std::put_time(std::localtime(&t_c), "Acessado: %D %T\n\n")
			  << "[1] Adicionar Pessoa\n"
			  << "[2] Excluir Pessoa\n"
			  << "[3] Marcar o ponto\n"
			  << "[4] Verificar logs\n"
			  << "[5] Atualizar Relogio\n"
			  << "[0] Sair\n\n";
}

void Time_Ponto::excluir_pessoa()
{

}

void Time_Ponto::adicionar_pessoa()
{

}

void Time_Ponto::ver_logs()
{

}

void Time_Ponto::atualizar_relogio()
{

}

void Time_Ponto::marcar_ponto()
{

}