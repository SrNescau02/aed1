function adicionarDica() {
    var nome = document.getElementById('nome').value;
    var data = document.getElementById('data').value;
    var tema = document.getElementById('tema').value;
    var descricao = document.getElementById('descricao').value;
  
    if (nome && data && tema && descricao) {
      var dicasContainer = document.getElementById('dicasContainer');
  
      // Criar um novo elemento div para a dica
      var novaDica = document.createElement('div');
      novaDica.classList.add('dica');
  
      // Preencher o conteúdo da dica
      novaDica.innerHTML = '<strong>Nome:</strong> ' + nome +
                           '<br><strong>Data:</strong> ' + data +
                           '<br><strong>Tema:</strong> ' + tema +
                           '<br><strong>Dica:</strong> ' + descricao;
  
      // Adicionar a nova dica ao contêiner de dicas
      dicasContainer.appendChild(novaDica);
  
      // Limpar o formulário
      document.getElementById('formDica').reset();
    } else {
      alert('Por favor, preencha todos os campos.');
    }
  }
  