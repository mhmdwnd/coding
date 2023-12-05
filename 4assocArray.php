<?php
	$assoc = [
		"satu" => "Belajar PHP",
		"dua" => 2023,
		3 => "Semoga lancar"
	];
	echo "<pre>";
	print_r($assoc);
	echo "</pre>";

	echo "Setelah penambahan array";
	$assoc["empat"] = "data baru";
	$assoc[] = 70.5;

	echo "<pre>";
	print_r($assoc);
	echo "</pre>";

	$siswa = [
		"kelas_x" =>array("Jono", "Joni"),
		"kelas_xi" =>array("Asep", "Usep"),
		"kelas_xii" =>["Yanti", "Yanto"],
	];
	echo $siswa["kelas_xii"][1];
	echo "<br>";
	echo $siswa["kelas_x"][0];
	echo "<br>";
	echo $siswa["kelas_xi"][0];
?>