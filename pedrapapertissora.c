int main() {
   int piedra=1;
   int papel=2;
   int tijera=3;
   int jugador1=1;
   int jugador2=3;
   int ganador=-1;

   if ( jugador1 == piedra ) {
      if ( jugador2 == piedra ) {
          return 0;
      }
      if ( jugador2 == papel) {
          return 2;
      }
      if ( jugador2 == tijera) {
          return 1;
      }
   }
  
   if ( jugador1 == papel ) {
      if ( jugador2 == piedra ) {
          return 1;
      }
      if ( jugador2 == papel) {
          return 0;
      }
      if ( jugador2 == tijera) {
          return 2;
      }
   }
   
   if ( jugador1 == tijera ) {
      if ( jugador2 == piedra ) {
          return 2;
      }
      if ( jugador2 == papel) {
          return 1;
      }
      if ( jugador2 == tijera) {
          return 0;
      }
   }
   return 10;
 }
