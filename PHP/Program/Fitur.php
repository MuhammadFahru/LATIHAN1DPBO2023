<?php

class Fitur
{
  public function __construct()
  {
  }

  public function view($data)
  {
    echo '
    <center>
      <table border="1" width="80%" cellspacing="0">
        <tr>
          <th>Foto</th>
          <th>Nama</th>
          <th>Nim</th>
          <th>Prodi</th>
          <th>Fakultas</th>
        </tr>
        <tr align="center"> 
          <td><img src="' . $data->getFoto() . '" width="50"></img></td>
          <td>' . $data->getNama() . '</td>
          <td>' . $data->getNim() . '</td>
          <td>' . $data->getProdi() . '</td>
          <td>' . $data->getFakultas() . '</td>
        </tr>
      </table>
    </center>';
  }

  public function __destruct()
  {
  }
}
