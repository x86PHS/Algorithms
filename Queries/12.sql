use exemplos

select * from HP_Personagens
select * from HP_Magias

-- 1.Quantos personagens estão cadastrados? R: 138
select * from HP_Personagens

-- 2.Quantas magias? R: 301
select * from HP_Magias

-- 3.A maioria dos personagens é homem ou mulher? R: Homem
select * from HP_Personagens
select gender, count(*) from HP_Personagens where gender is not null group by gender

-- 4. Qual a profissão mais comum dentre os personagens? R: Student
select * from HP_Personagens
select TOP 1 job,count(*) from HP_Personagens group by job order by count(*) desc

-- 5. Quais as casas existentes no cadastro? R: Dumstrang, Beauxbatons, Gryffindor, Hufflepuff, Ravenclaw, Slytherin
select * from HP_Personagens
select house from HP_Personagens where house is not null group by house

-- 6. Quantos estudantes tem em cada casa? 1,3,38,13,18,28
select * from HP_Personagens
select house, count(*) from HP_Personagens where house is not null group by house

-- 7. Quantos personagens já morreram?
select * from HP_Personagens
select death, count(*) from HP_Personagens where death is not null group by death

-- 8. Há personagens com Patronos que são cães ou gatos? R: Sim, há dois de gato.
select * from HP_Personagens
select name, Patronus from HP_Personagens where patronus like '%dog%' or patronus like '%cat%'

-- 9. Dentre as espécies de personagens que não são humanos, quantos personagens cada uma tem?
select * from HP_Personagens
select species,count(*) from HP_Personagens where not species like 'human' group by species

-- 10. Um professor tem uma teoria, que nenhum personagem half-blood tem cabelo preto. Ele está certo? R: Não
select * from HP_Personagens
select name,[Blood status],[Hair colour] from HP_Personagens where [Blood status] like 'half-blood' and [Hair colour] like 'black'

-- 11. Quem são os personagens que utilizam uma varinha com algum elemento relacionado à dragões?
select * from HP_Personagens
select name from HP_Personagens where wand like '%dragon%'

-- 12. Quantas magias existem de cada tipo?
select * from HP_Magias
select type, count(*) from HP_Magias group by type

-- 13. Qual o efeito da magia Orchideous? E qual a cor da luz que ela emite?
select * from HP_Magias
select name, effect, light from HP_Magias where name like '%orchideous%'

-- 14. Quais são magias que possuem efeitos relacionados à água?
select * from HP_Magias
select name from HP_Magias where effect like '%water%'
