// Basicamente ele vai pegar a expressão infixada e levá-la para ser feita no modo posfixo e adquirindo cada valor de digito 
// e calculando o valor final.

var Postfix = (function () {
    var stack = [];
    // função para acidionar um operador na pilha
    var processOperand = function (char) {
        stack.push(parseFloat(char));
    };

    var processOperator = function (char) {
        var right = (stack.pop()),
            left = (stack.pop());
    // Aqui é uma função para comparar os operadores com dua prioridade e colocando na forma posfixa      
        switch (char) {
            case '+':
                stack.push(left + right);
                break;
            case '-':
                stack.push(left - right);
                break;
            case '*':
                stack.push(left * right);
                break;
            case '/':
                stack.push(left / right);
                break;
        }
    };
    
    var processToken = function (char) {
        var type = Common.determineToken(char);

        switch (type) {
            case Common.tokenType.operand:
                processOperand(char);
                break;
            case Common.tokenType.operator:
                processOperator(char);
                break;
        }
    };
    
    var calc = function (postfix) {
        var tokens;
        
        stack = [];
        tokens = postfix.split(' ');
        tokens.splice(tokens.length - 1, 1);
        // aqui com o splice ele mexe com a pilha adicionando algo no final e retirando os antigos
        for (var i = 0; i < tokens.length; i++) {
            processToken(tokens[i]);
        }
        
        return stack.pop();
    };
    
    return {
        calc: calc
    }
})();