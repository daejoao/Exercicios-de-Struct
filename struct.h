struct {
    int dia;
    int mes;
    int ano;
} typedef Data;

Data newData();
int getDia();
int getMes();
int getAno();
void showData(Data data);
void showDia(Data data);
void showMes(Data data);
void showAno(Data data);

struct {
    int horas;
    int minutos;
    int segundos;
} typedef Horario;

struct {
    float altura;
    int idade;
    char genero;
    float peso;
} typedef Pessoa;
