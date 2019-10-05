function ouvrirFermerCache(bouton) {
    var divContenu = bouton.nextSibling;
    if(divContenu.nodeType == 3) divContenu = divContenu.nextSibling;
    if(divContenu.style.display == 'block') {
        divContenu.style.display = 'none';
    } else {
        divContenu.style.display = 'block';
    }
}

function openNav() {
    document.getElementById("mySidenav").style.width = "250px";
}
  
function closeNav() {
    document.getElementById("mySidenav").style.width = "0";
}