#include <mysql.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	MYSQL *conn;
	int err;

	MYSQL_RES *resultado;
	MYSQL_ROW row;
	
	//Conexion al servidor MYSQL 
	conn = mysql_init(NULL);
	if (conn==NULL) {
		printf ("Error al crear la conexión: %u %s\n",
				mysql_errno(conn), mysql_error(conn));
		exit (1);
	}
	//Iniciar conexión
	conn = mysql_real_connect (conn, "localhost","root", "mysql", "ShooterGame",0, NULL, 0);
	if (conn==NULL) {
		printf ("Error al inicializar la conexion: %u %s\n", 
				mysql_errno(conn), mysql_error(conn));
		exit (1);
	}
    
    char consulta;
    strcpy (consulta,"SELECT MAX(Nivel) AS NivelAlto From Jugador");
	
}