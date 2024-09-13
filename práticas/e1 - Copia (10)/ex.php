<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Praticando</title>
    <link rel="stylesheet" href="style.css">
</head>
<body><div>
    <h1>Resultado do processamento</h1>
   <?php 
   $n = $_GET["nome"];
   $s = $_GET["sobrenome"];
   $e = $_GET["email"];
    echo "<p>Olá e bem-vindo(a), $n $s ! É um prazer imenso ter você conosco. Esperamos que sua experiência aqui seja enriquecedora e agradável. Se tiver alguma dúvida ou precisar de assistência, não hesite em nos procurar. Estamos aqui para ajudar e garantir que você aproveite ao máximo todas as oportunidades e recursos disponíveis. Aproveite seu tempo e sinta-se à vontade para explorar tudo o que oferecemos! fique atento, entraremos em contato através do seu email $e !";
    
    ?>
    <p><a href="javascript:history.go(-1)">voltar</a></p></div>
    <p><a href="ex.html">voltar com html</a></p>
</body>
</html>