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
values("Bruci Ueini","gerente pruducao animal","01234567890",3250.00),
("Crarque Quente","gerente plantio","98765432109",3200.00),
("Piter Parque","artesão","09182736450",2300.00),
("Isteves Rogério","peão","09182736450",1990.00)
;

create table PRODU_LEITE(
ID_vaca int auto_increment not null primary key,
especie varchar(12), 
ultima_ordenha datetime, 
temp_leite float, 
produção_dia float, 
foi_inseminada varchar(3),
dia_inseminacao date,
dia_parto date, 
dia_secagem date,
minu_rumina_dia int
);
Insert into PRODU_LEITE(especie,ultima_ordenha,temp_leite,produção_dia,foi_inseminada,dia_parto,dia_secagem,minu_rumina_dia) 
values("nelore","2020-11-01 4:30:00",38,25,"sim","2020-09-01","2020-12-06",1280),
	  ("nelore","2020-11-02 4:30:00",39,19,"sim","2020-10-02","2020-12-05",1290),
	  ("nelore","2020-11-03 4:30:00",40,24,"sim","2020-09-03","2020-12-04",1300),
      ("nelore","2020-11-04 4:30:00",38,25,"sim","2020-09-04","2020-12-03",1280),
	  ("nelore","2020-11-05 4:30:00",39,17,"sim","2020-10-05","2020-12-02",1290),
	  ("nelore","2020-11-06 4:30:00",40,26,"sim","2020-09-06","2020-12-01",1300);

create table PLANTIO(
ID_pl int auto_increment not null primary key,
plantacao varchar(15),
setor varchar(15),
area_hect float,
dia_plantio DATE,
kg_sementes float,
dia_colheita DATE,
sacas_esperadas int,
sacas_colhidas int 
);
insert into PLANTIO(plantacao,setor,area_hect,dia_plantio,kg_sementes,dia_colheita,sacas_esperadas,sacas_colhidas)
values("milho","terreno 1",200,"2020-10-21",12333.33,"2021-01-31",20000,0),
	  ("soja","terreno 2",100,"2020-09-10",6000,"2021-01-05",5900,0),
	  ("algodão","terreno 3",50,"2020-11-01",2500,"2021-05-01",386,0);

create table PRODUTOS(
ID_prod int auto_increment not null primary key, 
nome varchar(20), 
unid varchar(12), 
estoque int,
preço float
);
insert into PRODUTOS(nome,unid,estoque,preço)
values("leite","litro",230,5.00),
	  ("queijo","unidade",20,20.50),
	  ("algodão","arroba",14,130.45),
      ("milho","saca",10,81.89),
      ("soja","saca",5,165.97);

create table EQUIPAMENTO(
ID_equip int auto_increment not null primary key, 
nome varchar(20), 
tipo varchar(12),
obs varchar(50)
);
INSERT INTO EQUIPAMENTO (nome,tipo,obs) 
VALUES("colheitadeira", "motorizado","alugada ao vizinho da frente"),
	  ("trator", "motorizado","operacional"),
	  ("plantadeira", "motorizado","estacionada"),
	  ("ceifadora", "motorizado","estacionada");

create table VAREJISTAS(
ID_varej int auto_increment not null primary key,
nome varchar(30) not null, 
CNPJ varchar(14), 
soma_saldos float
);
INSERT INTO VAREJISTAS(nome,CNPJ,soma_saldos) 
VALUES("Agrorural Ltda.", "01234567890123",1560.50),
	  ("Agro é Tech", "98765432109876",-2500.20),
	  ("Agro é tudo", "13579024680123",5640.80);

#queries ------
select * from produ_leite;
alter table produ_leite drop column dia_inseminacao;

create function mul (a float,b float) 
returns float 
return a * b;

select ID_vaca, mul(5,produ_leite.produção_dia);