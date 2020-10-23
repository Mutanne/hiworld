create database fazenda_bd;

create table FUNCIONARIOS(
ID_func int auto_increment not null primary key, 
nome varchar(30) not null, 
funcao varchar(16), 
CPF varchar(11),
salarios float
);

create table PRODUCAO_DE_LEITE(
ID_vaca int auto_increment not null primary key, 
especie varchar(12), 
ultima_ordenha datetime, 
temp_leite float, 
produção_dia float, 
foi_inseminada bool,
dia_inseminacao date,
dia_parto date, 
secagem_esperada int,
minu_ruminação_dia int,
obs varchar(50)
);

create table PRODUTOS(
ID_prod int auto_increment not null primary key, 
nome varchar(20), 
tipo varchar(12), 
estoque int, 
preço float
);

create table EQUIPAMENTO(
ID_equip int auto_increment not null primary key, 
nome varchar(20), 
tipo varchar(12),
obs varchar(50)
);

create table VAREJISTAS(
ID_varej int auto_increment not null primary key, 
nome varchar(30) not null, 
CNPJ varchar(14), 
soma_saldos float
);