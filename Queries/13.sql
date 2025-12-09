use pubs

-- 1. Selecione: nome, sobrenome, cidade e estado de todos os autores que não são da Califórnia
select * from authors
select au_fname,au_lname,city,state from authors where not state like 'CA'

-- 2. Selecione todos os de todos os autoeres que vivem em uma cidade que começa com S
select * from authors
select * from authors where city like 'S%'

-- 3. Selecione o titulo, preços e tipo de todos os livros com preço entre 12 e 19
select * from titles
select * from titles where price > 12 and price < 19

-- 4. Selecione todos os livros que faturaram menos de 10000 no ano
select * from titles
select * from titles where (ytd_sales * price) < 10000

-- 5. Selecione todos livros que não contem a letra A em seu titulo
select * from titles
select * from titles where not title like '%a%'

-- 6. Selecione todos os livros que contem menos de 20 caracteres em seu título
select * from titles
select * from titles where len(title) < 20

use Pokedex

-- 7. Selecione o código da categoria "Flame"
select * from categoria
select * from Categoria where nmCategoria like 'flame' -- 121

-- 8. Selecione todos os pokemons desta categoria de acordo com o codigo descoberto no exercício anterior
select * from Pokemon
select * from pokemon where codCategoria = 121

-- 9. Selecione todos os pokemons que tem altura maior que 2 metros e peso menor que 100kg
select * from Pokemon
select * from pokemon where (peso < 100 and altura < 2)

-- 10. Selecione todos os pokemons que não evoluem de nenhum outro
select * from pokemon
select * from pokemon where evoluiDe is null

-- 11. Identificar quais campos no tipos está com um espaço
select * from Tipo
select * from Tipo where nmTipo like ' %'

-- 12. Descubra quantos dias se passaram desde o seu nascimento até hoje
select datediff(day,'20060420',getdate())
