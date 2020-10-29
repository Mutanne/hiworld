create database if not exists fazenda_bd;
use fazenda_bd;

create table FUNCIONARIOS(
ID_func int auto_increment not null primary key, 
nome varchar(30) not null, 
funcao varchar(30), 
CPF varchar(11),
salario float
);

Insert into FUNCIONARIOS(nome,funcao,CPF,salario) 
values("Bruci Ueini","gerente pruducao animal","01234567890",3000),
("Crarque Quente","gerente plantio","98765432109",3000),
("Piter Parque","artesão","09182736450",1000)
;

create table PRODU_LEITE(
ID_vaca int auto_increment not null primary key, 
nome varchar(20),
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

Insert into PRODU_LEITE(nome,especie,ultima_ordenha,temp_leite,produção_dia,foi_inseminada,dia_inseminacao,dia_parto,secagem_esperada,minu_ruminação_dia) 
values("","gerente pruducao animal","01234567890",3000),
("Crarque Quente","gerente plantio","98765432109",3000),
("Piter Parque","artesão","09182736450",1000)
;

create table PLANTIO(
ID_pl int auto_increment not null primary key,
plantacao varchar(15),
setor varchar(15),
dia_plantio DATE,
kg_sementes float,
dia_colheita DATE,
sacas_esperadas float,
sacas_colhidas float  
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