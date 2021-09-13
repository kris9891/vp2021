<?php
	$author_name = "Kristjan Suluste";
	$weekday_names_et = ["esmaspäev", "teisipäev", "kolmapäev", "neljapäev", "reede", "laupäev", "pühapäev"];
	$full_time_now = date("d.m.Y H:i:s");
	$hour_now = date("H");
	//echo $hour_now;
	$weekday_now = date("N");
	//echo $weekday_now;
	$day_category = "Ebamäärane";
	if(weekday_now <= 5) {
		$day_category = "Koolipäev";
	} else: {
		day_category = "Puhkepäev";
	}
	//echo $day_category;
	//kuupäev, kellaaeg, on_koolipäev;
	//echo $day_category;
	
	//loeme fotode kataloogi sisu
	$photo_dir = "photos";
	//$all_files = scandir($photo_dir);
	$all_files = array_slice(scandir($photo_dir), 2);
	//echo $all_files; //see on jama
	var_dump($all_files);
	//$only_files = array_slice(all_files, 2);
	var_dump($only_files);
?>
<!DOCTYPE html>
<html lang="et">
<head>
	<meta charset="utf-8">
	<title><?php echo $author_name; ?>, veebiprogrammeerimine</title>
</head>
<body>
	<h1><?php echo $author_name; ?>, veebiprogrammeerimine</h1>
	<p>See leht on valminud õppetöö raames ja ei sisalda mingisugust tõsiseltvõetavat sisu!</p>
	<p>Õppetöö toimus <a href="https://www.tlu.ee/dt">Tallinna Ülikooli Digitehnoloogiate instituudis</a>.</p>
	<img src="3700x1100pildivalik220.jpg" alt="Tallinna Ülikooli Terra õppehoone" width="600">
</body>
<p>Lehe avamise hetk: <span><?php echo $weekday_names_et{$weekday_now - 1} . ". " . full_time_now . ", on " . day_category; ?></span>.</p>
<h2>Kursusel õpime:</h2>
<ul>
	<li>HTML keelt</li>
	<li>PHP programmeerimiskeelt</li>
	<li>SQL päringukeelt</li>
	<li>jne</li>
</ul>
</html>