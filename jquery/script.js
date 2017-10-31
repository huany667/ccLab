$(document).ready(function(){
	$('#map').usmap({
		 
	mouseover: function(event, data) {
    	$('#information').text('This state is: '+data.name);

  		}
	});

})
