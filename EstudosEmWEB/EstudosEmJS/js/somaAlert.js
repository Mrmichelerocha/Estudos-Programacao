function somarValores(){
    var s1 = document.getElementById("txt1").value;
    var s2 = document.getElementById("txt2").value;
    var soma = parseInt(s1)+parseInt(s2);
    document.getElementById("resultado").innerHTML = soma;
}