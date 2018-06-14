/*
  #Título: Your Money Life
  
  #Autores:  
    Cayke Bruno Fagundes Gonçalves - 2018055@aluno.diocesanocaruaru.g12.br
    Ricardo Henrique Albuquerque da Silva Filho - 32625@aluno.diocesanocaruaru.g12.br
    Sophia Furtado de Carvalho Feitosa - 2013466@aluno.diocesanocaruaru.g12.br
    Vinícius Criste Bezerra - 2012360@aluno.diocesanocaruaru.g12.br
    Vinícius Fernandes Santana - 2015241@aluno.diocesanocaruaru.g12.br
         
  #Orientador: Prof. Diógenes Souza - diogenessouza@diocesanocaruaru.g12.br
  
  #Repositório do projeto no GitHub: https://github.com/Diocesano/your_money
  
  #Descrição:
  
 
  #Componentes:
    ->1 placa baseada no Arduino Uno R3, utilizando o
      microcontrolador Atmel Atmega328p
    ->1 Módulo bluetooth HC-05

  
  #Conexões:

                                      +-----+
         +----[PWR]-------------------| USB |--+
         |                            +-----+  |
         |         GND/RST2  [ ][ ]            |
         |       MOSI2/SCK2  [ ][ ]  A5/SCL[ ] |    
         |          5V/MISO2 [ ][ ]  A4/SDA[ ] |    
         |                             AREF[ ] |
         |                              GND[ ] |
         | [ ]N/C                    SCK/13[ ] |   
         | [ ]IOREF                 MISO/12[ ] |   
         | [ ]RST                   MOSI/11[ ]~|   
         | [ ]3V3    +---+               10[ ]~|   
         | [ ]5v    -| A |-               9[ ]~|   
         | [ ]GND   -| R |-               8[ ] |   
         | [ ]GND   -| D |-                    |
         | [ ]Vin   -| U |-               7[ ] |   
         |          -| I |-               6[ ]~|   
         | [ ]A0    -| N |-               5[ ]~|   
         | [ ]A1    -| O |-               4[ ] |   
         | [ ]A2     +---+           INT1/3[ ]~|   
         | [ ]A3                     INT0/2[ ] |   
         | [ ]A4/SDA  RST SCK MISO     TX>1[ ] |   
         | [ ]A5/SCL  [ ] [ ] [ ]      RX<0[ ] |   
         |            [ ] [ ] [ ]              |
         |  UNO_R3    GND MOSI 5V  ____________/
          \_______________________/

~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
 LICENÇA - Copyright 2018 Cayke, Ricardo, Sophia, Vinícius Criste, Vinícius Fernandes e Diógenes
~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~ ~
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   -   
    Este programa é um software livre; você pode redistribuí-lo e/ou 
    modificá-lo dentro dos termos da Licença Pública Geral GNU como 
    publicada pela Fundação do Software Livre (FSF); na versão 3 da 
    Licença, ou (na sua opinião) qualquer versão.
    Este programa é distribuído na esperança de que possa ser útil, 
    mas SEM NENHUMA GARANTIA; sem uma garantia implícita de ADEQUAÇÃO
    a qualquer MERCADO ou APLICAÇÃO EM PARTICULAR. Veja a
    Licença Pública Geral GNU para maiores detalhes.
    Você deve ter recebido uma cópia da Licença Pública Geral GNU junto
    com este programa. Se não, veja <http://www.gnu.org/licenses/>.
  
  ------------------------------------------------------------------------------------      

 */

void setup(){

}

void loop(){
  
}

