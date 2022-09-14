function Num(num) {
   document.getElementById('visor').value = document.getElementById('visor').value+num;
}

function Clear() {
   document.getElementById('visor').value= "";
}

function Calc(calc){
	if( document.getElementById('visor').value != " ")
	{ document.getElementById('visor').value = document.getElementById('visor').value + calc;   }
}

function Igual() {
	document.getElementById('visor').value = eval(document.getElementById('visor').value);
}

