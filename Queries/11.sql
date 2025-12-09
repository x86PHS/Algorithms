-- 0 - Quantos dias se passaram desde o seu nascimento? R: 7172 Dias
select datediff(day,'20060420',GETDATE()) as 'Dias'

use Pokedex

-- 1 - Qual o peso do pokemon mais pesado? R: Snorlax
select * from Pokemon
select nome,peso from pokemon where peso = (select max(peso) from pokemon) 

-- 2 - Quantos tipos de pokemons temos cadastrados? R: 18
select * from TipoPokemon
select codTipo, count(*) from TipoPokemon group by codTipo order by count(*) desc

-- 3 - Quantos pokemons tem menos de 10 Kg? R: 26
select * from pokemon
select peso,count(*) from pokemon where peso < 10 group by peso

-- 4 - Qual a altura média dos pokemons da categoria 160? R: 115.000000
select * from pokemon
select codCategoria, avg(peso) from pokemon where codCategoria = 160 group by codCategoria

-- 5 - Qual a altura do pokemon mais baixo? R: 0.20 
select * from pokemon
select min(altura) from pokemon

-- 6 - Liste todos os pokemons e o cáculo do seu IMC começando pelo maior.
select * from pokemon
select nome, altura,peso,(peso / (power(altura,2))) as 'IMC' from pokemon order by (peso / power(altura,2)) desc

-- 7 - Qual o peso médio e a altura média de cada categoria de pokemon? (exibindo o código da categoria)
select * from pokemon
select codCategoria,avg(peso) as 'Peso Médio' ,avg(altura) as 'Altura Médias' from pokemon group by codCategoria

use pubs

-- 8 - Quantos funcionários estão em cada profissão? Agrupe por JobId.  (Utilize a tabela "Employee" que tem uma lista de funcionários.)
select * from employee
select job_id,count(*) from employee group by job_id

-- 9 - Qual o preço do livro mais barato de cada tipo? (Utilize a tabela Titles)
select * from titles
select type, min(price) from titles where price is not null group by type

-- 10 - Quantos autores vivem em cada estado? (Tabela Authors)
select * from authors
select state as 'Estado', count(*) as 'Quantidade' from authors group by state

-- 11 - Quantos livros foram publicados em cada ano?
select * from titles
select year(pubdate),count(*) from titles group by year(pubdate)

-- 12 (Hard) - Crie uma relação que mostra quantos livros começam com cada letra. Lembre-se das funções de manipulação de strings que utilizamos
select * from titles
select substring(title,1,1), count(*) from titles group by substring(title,1,1)
