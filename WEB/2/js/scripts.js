function monthly(){
	/* Summa */
	var K = document.getElementById("sum").value;
	
	if(K < 0){
		alert("Summa nedrīkst būt negatīva!");}
		
	else if(isNaN(K)){
		alert("Summas laukā nedrīkst būt burti vai simboli!");}
	
	/* Procentu likme */
	var percent = document.getElementById("selectedRate");
	var valuePercent = percent.options[percent.selectedIndex].value;
	var i;
	
	switch(valuePercent){
		case "1":
			i = 0.07;
			break;
		case "2":
			i = 0.10;
			break;
		case "3":
			i = 0.15;
			break;}
	
	/* Līzinga Termiņš */
	var due = document.getElementById("selectedDue");
	var valueDue = due.options[due.selectedIndex].value;
	var n;
	
	switch(valueDue){
		case "1":
			n = 6;
			break;
		case "2":
			n = 12;
			break;
		case "3":
			n = 18;
			break;
		case "4":
			n = 24;
			break;
		case "5":
			n = 60;
			break;
		case "6":
			n = 84;
			break;}
	
	/* Aprēķins */
	var monthly = K * (   (i / 12) / (1 - (Math.pow( (1 + i / 12), (-n) )))   )
	var altogether = monthly * n;
	
	if(K < 0 || isNaN(K)){
		document.getElementById("monthly").innerHTML = " ";
		document.getElementById("altogether").innerHTML = " ";}
	
	else{
		document.getElementById("monthly").innerHTML = monthly.toFixed(2);
		document.getElementById("altogether").innerHTML = altogether.toFixed(2);}
}