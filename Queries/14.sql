use Pokedex
-- 1. Qual o peso do pokemon mais pesado R: 460
select * from Pokemon
select * from pokemon where peso = (select max(peso) from pokemon)

-- 2. Quantos pokemons tem menos de 10 kg R: 40
select * from pokemon
select count(*) from pokemon where peso < 10

-- 3. Qual a altura media dos pokemons da categoria 860? R: Null
select * from pokemon
select avg(altura) from pokemon where codCategoria = 860

-- 4. Qual a altura do pokemon mais baixo? R: 0.20 
select * from pokemon
select min(altura) from pokemon

-- 5. Qual o pokemon de maior imc R: Golem
select nome,peso/(power(altura,2)) from Pokemon order by 2 desc

-- 6. Qual o peso médio de cada categoria de pokemon? R:
select codCategoria,avg(peso) from Pokemon group by codCategoria

use pubs

-- 7. Crie uma relação que mostra quantos livros começam cada letra
select * from titles
select substring(title,1,1),count(*) from titles group by substring(title,1,1)

-- 8. Quantos livros foram publicados em cada ano
select * from titles
select year(pubdate), count(*) from titles group by year(pubdate)

-- 9. Quantos funcionarios cada profissão, agrupe por jobid
select * from employee
select job_id, count(*) from employee group by job_id
