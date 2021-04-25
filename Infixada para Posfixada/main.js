// são as chamadas que o javascript faz para relacionar cada uma das funções 
// Fazendo eventos de clique e aparição aós ele do conteúdo 
// dando o valor infixo, mostra o posfixo com o resultado abaixo da função do html "Span"

$(document).ready(function () {
    $('#btnCalc').click(function () {
        var infix = $('#expression').val(),
            postfix = Infix.toPostfix(infix);
            
        $('#spanPostfix').text(postfix).parent().fadeIn();
        $('#spanResult').text(Postfix.calc(postfix));
    });
});