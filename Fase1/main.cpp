#include <iostream>
#include <fstream>
#include <string>
#include "jsoncpp.cpp"
#include "json/json.h"




using namespace std;

void menuPrincipal();
void cargarArchivo();

int main(){
    menuPrincipal();
    return 0;
}

void menuPrincipal(){
    system("cls");
    cout << "\t \t \t-----------------USAC GAMES - Batalla naval-----------------" << endl;
    bool salida = false;
    while (!salida)
    {
        cout << "------------------MENU PRINCIPAL ----------------" << endl; 
		cout << "1. Carga Masiva" << endl ;
		cout << "2. Registro Usuario" << endl ;
		cout << "3. Login" << endl ;
		cout << "4. Reportes" << endl ;
        cout << "5. Salir" << endl;
		int opcion;
		cin >> opcion;
        if (opcion == 1)
        {
            cargarArchivo();
        }
        else if (opcion == 2)
        {
            /* code */
        }
        else if (opcion == 3)
        {
            /* code */
        }
        else if (opcion == 4)
        {
            /* code */
        }
        else if (opcion == 5)
        {
            salida = true;
            exit(0);
        }
    }
}

void cargarArchivo(){
    string urlArchivo;
    cout << "Ingrese direccion de archivo .JSON" << endl;
    cin >> urlArchivo;
    ifstream archivo(urlArchivo);

    Json::Value actualJson;
    Json::Reader reader;

    reader.parse(archivo, actualJson);

    const Json::Value& users = actualJson["usuarios"];
    for (int i = 0; i < users.size(); i++)
    {
        cout << " usuario: " << users[i]["nick"].asString() << endl;
        cout << " contrasenia: " << users[i]["password"].asString() <<endl;
        cout << " moneda: " << users[i]["monedas"].asString() <<endl;
        cout << " edad: " << users[i]["edad"].asString() <<endl;
    } 

    const Json::Value& articulos = actualJson["articulos"];
    for (int i = 0; i < articulos.size(); i++)
    {
        cout << " id: " << articulos[i]["id"].asString() << endl;
        cout << " categoria: " << articulos[i]["categoria"].asString() <<endl;
        cout << " precio: " << articulos[i]["precio"].asString() <<endl;
        cout << " nombre: " << articulos[i]["nombre"].asString() <<endl;
        cout << " src: " << articulos[i]["src"].asString() <<endl;
    }

    const Json::Value& tutorial = actualJson["tutorial"];
    cout << " ancho: " << tutorial["ancho"].asString() << endl;
    cout << " alto: " << tutorial["alto"].asString() <<endl;
    const Json::Value& mov = tutorial["movimientos"];
    for (int j = 0; j < mov.size(); j++)
    {
        cout << " X " << mov[j]["x"].asString() << endl;
        cout << " Y: " << mov[j]["y"].asString() <<endl;
    }

    
}

/*-------------JEACH------------ */ 
//D:\Quincho\VIII_Semestre\EDD\Laboratorio\ArchivoPruebaFase1A.json