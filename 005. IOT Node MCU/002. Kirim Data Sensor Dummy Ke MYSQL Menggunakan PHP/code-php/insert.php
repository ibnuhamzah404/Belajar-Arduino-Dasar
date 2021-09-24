<?php 



  require("koneksi.php"); // memanggil file koneksi.php untuk koneksi ke database

    $data = $_GET['data'];
    $waktu =  $_GET['waktu'];
    $result = mysqli_query ($koneksi,"INSERT INTO datasensor (data, waktu) VALUES ('$data', '$waktu')");    
    
    if (!$result) 
    {
            die ('Invalid query: '.mysqli_error($koneksi));
    }  




 ?>