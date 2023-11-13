function addTip() {
    // Obter os valores dos campos
    var tipName = document.getElementById("tipName").value;
    var tipDate = document.getElementById("tipDate").value;
    var tipTheme = document.getElementById("tipTheme").value;

    // Criar um elemento de lista para exibir a dica
    var tipItem = document.createElement("div");
    tipItem.className = "tip-item";
    tipItem.innerHTML = "<strong>" + tipName + "</strong> - " + tipDate + "<br>Tema: " + tipTheme;

    // Adicionar a dica à lista de dicas
    document.getElementById("tipsList").appendChild(tipItem);

    // Limpar os campos do formulário
    document.getElementById("tipName").value = "";
    document.getElementById("tipDate").value = "";
    document.getElementById("tipTheme").value = "";
}
