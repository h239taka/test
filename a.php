#!/usr/bin/php
<?php
  foreach(file('/usr/share/dict/linux.words') as $line){
    $findme = 'abc'; #findmeをABCにする
    $pos = strpos($line, $findme); #strpos関数を使う

    if( $pos !== false){ #posがfalseでないならlineを表示する
      echo "$line";
    }
  }
?>
