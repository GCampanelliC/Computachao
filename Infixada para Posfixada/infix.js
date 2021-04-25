// Função que pega o valor infixo e altera para posfixo
var Infix = (function () {
    var postfix,
        stack;
// prioridade de Operadores
    var precedence = function (operator) {
        switch (operator) {
            case '*':
            case '/':
                return 3;
            case '+':
            case '-':
                return 2;
            case '(':
                return 1;
        }
    };
    // adiciona o valor mais um espaço
    var processOperand = function (char) {
        postfix += char + ' ';
    };
    // função que roda enquanto o valor recebido nao acabar, ou seja, até o número da pilha estiver com valores
    // Aqui analisa se o valor que está na pilha tem tamanho maior que o operador anterior, ou seja, analise de prioridade
    var processOperator = function (char) {
        while (stack.length > 0 &&
            (precedence(stack[stack.length - 1]) >= precedence(char))) {
            postfix += stack.pop() + ' ';
        }
        stack.push(char);
    };
  // guarda o valor que chega
    var processLeftPar = function (char) {
        stack.push(char);
    };
// guarda o valor do topo
    var processRightPar = function (char) {
        var j = stack.length - 1,
            ce;
        while (true) {
            ce = stack.pop();
            if (ce == '(') break;

            postfix += ce + ' ';
        }
    }; 
    // na função acima ele analisa os parenteses ao qual ele para a analise com vê um abre e fecha parenteses, voltando ao inicio do while
    var processToken = function (char) {
        var type = Common.determineToken(char);

        switch (type) {
            case Common.tokenType.operand:
                processOperand(char);
                break;
            case Common.tokenType.operator:
                processOperator(char);
                break;
            case Common.tokenType.leftPar:
                processLeftPar(char);
                break;
            case Common.tokenType.rightPar:
                processRightPar(char);
                break;
        }
    };
  // aqui ele faz um sistema de token para estabelecer a qual ponto e cada valor 
    var start = function (infix) {
        var tokens = Common.tokenize(infix);
        for (var i = 0; i < tokens.length; i++) {
            processToken(tokens[i]);
        }
        return postfix;
    };
// chamada da função 
    var toPostfix = function (infix) {
        postfix = '';
        stack = [];
        stack.push('(');
        return start(infix + ')');
    };
   // Atualzação de todo html para uma possível busca
    return {
        toPostfix: toPostfix
    }

})();

