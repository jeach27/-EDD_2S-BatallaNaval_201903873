#include <iostream>
#include <fstream>
#include <string>
#include <json/json.h>
#include <jsoncpp.cpp>



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
    }
    
        


        

    
    
}

/*-------------JEACH------------ */ 