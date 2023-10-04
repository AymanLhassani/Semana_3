DROP DATABASE IF EXISTS ShooterGame;
CREATE DATABASE ShooterGame;
USE ShooterGame;

CREATE TABLE Jugador (
  Id INTEGER PRIMARY KEY NOT NULL,
  username Varchar NOT NULL,
  password Varchar NOT NULL,
  Nivel INTEGER NOT NULL
)ENGINE = InnoDB;

CREATE TABLE Partida (
 Id INTEGER PRIMARY KEY NOT NULL,
 date Varchar,
 duracion INTEGER,
 winner Varchar
)ENGINE = InnoDB;


INSERT INTO Jugador VALUES(1, Enigma, 123455#, 0);
INSERT INTO Jugador VALUES(2, mibi, 09875#, 5);

INSERT INTO Partida VALUES(1, 20/10/2015|15:31, 23, mibi);