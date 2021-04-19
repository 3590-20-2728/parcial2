#include <mysql.h>
#include <iostream>
using namespace std;
int q_estado;
int main()
{
	MYSQL* conectar;
	conectar = mysql_init(0);
	conectar = mysql_real_connect(conectar, "root", "Adrian", "Adrian123", "empresa", 3306, NULL, 0);
	if (conectar) {
		cout << "conexion exitosa" << endl;
		string idproductos;
		cout << "ingrese producto:	";
		cin >> idproductos;
		string insert = "insert into productos_parci(idproductos_parci) values ('" + idproductos + "')";
		const char * o = insert.c_str();
		q_estado = mysql_query(conectar, o);
		if (!q_estado) {
			cout << "acceso exitoso" << endl;
		}
		else {
			cout << "acceso no exitoso" << endl;
		}

		string idproductos;
		cout << "actualice su producto:	";
		cin >> idproductos;
		string ingresar = "ingresar into productos_parci(idproductos) values ('" + idproductos + "')";
		const char * o = ingresar.c_str();
		q_estado = mysql_query(conectar, o);
		if (!q_estado) {
			cout << "actualizacion exitosa" << endl;
		}
		else {
			cout << "actualizacion no exitosa" << endl;
		}

		string idproductos;
		cout << "ingrese su producto a modificar:	";
		cin >> idproductos;
		string modificar = "modificar into productos_parci(idProductos) values ('" + idProductos + "')";
		cout << "Ingrese el idproducto a modificar: ";
		cin >> o
		string modificar = "modificar from idproducto.productos_parci where idproducto= 'o'";
		const char* o = modificar.c_str();
		q_estado = mysql_query(conectar, o);

		if (!q_estado) {
			cout << "modificacion correcta" << endl;
		}
		else {
			cout << "modificacion no correcta"<<endl;
		}

		string idproductos;
		cout << "ingrese su producto a borrar:	";
		cin >> idproductos;
		string borrar = "delete into productos_parci(idProductos) values ('" + idProductos + "')";
		cout << "Ingrese el idproducto a eliminar: ";
		cin >> o
		string borrar = "borrar from idproducto.productos where idproducto= 'o'";
		const char* o = delete.c_str();
		q_estado = mysql_query(conectar, o);

		if (!q_estado) {
			cout << "borrado con exito" << endl;
		}
		else {
			cout << "borrado no con exito" << endl;
		}

	else
	{
		cout << "error de la conexion" << endl;
	}
	
		system("pause");
	}

