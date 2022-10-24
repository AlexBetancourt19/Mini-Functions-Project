#include <SFML/Graphics.hpp>

int main()
{
 const int max_x = 800, max_y = 600, min_x = 0, min_y = 0;
 float  r_ball = 10.f; //Radio del circulo
 float  movx = 5.f, movy = 5.f; // incremento de las coordenada del circulo
 float x = 0, y = 0; // coordenadas iniciales de ball

 sf::RenderWindow window(sf::VideoMode(max_x, max_y), "@intellvirtual: Mover Formas Simples");
 window.setVerticalSyncEnabled(true);// sincronismo vertical para reducir la velocidad de fotogramas
 sf::CircleShape ball(r_ball);
 ball.setFillColor(sf::Color::Yellow);
 ball.setPosition(x, y);

 while (window.isOpen())
 {
  sf::Event event;
  while (window.pollEvent(event))
  {
   if (event.type == sf::Event::Closed)
    window.close();
  }

  sf::Vector2f posicion = ball.getPosition();//posición actual  del circulo
  x = posicion.x; 
  y = posicion.y;

  if (x == max_x - r_ball * 2 || x < min_x)//r_ball*2 toma en cuenta el diámetro del circulo
   movx *= -1;

  if (y == max_y - r_ball * 2 || y < min_y)
   movy *= -1;

  ball.move(movx, movy);//mueve el circulo de su posición actual
        //de  acuerdo al valores de incremento movx y movy    
  window.clear();
  window.draw(ball);
  window.display();

 }//window.isOpen
 return 0;

}