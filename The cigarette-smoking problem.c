 do forever {
   P( lock );
      randNum = rand( 1, 3 ); // Pick a random number from 1-3
      if ( randNum == 1 ) {
         // Legg tobak opp på  bordet
         // Legg papir opp på bordet
         V( smoker_match );  // Wake up smoker with match
      } else if ( randNum == 2 ) {
         // Legg tobak opp på  bordet
        // Legg fyrstikk opp på bordet
        V( smoker_paper );  // Vekk røykeren som har papir
      } else {
        // Legg fyrstikk opp på bordet
        // Legg papir opp på bordet
        V( smoker_tobacco ); } // Vekk røykeren med tobakk
      V( lock );
      P( agent );  //  Agent sover
     }  // slutt loop
// Kode for de tre røykerene 
    do forever {
       P( smoker_tobacco );  // Sov
       P( lock );
       // Ta opp fyrstikk
       // Ta opp papir
       V( agent );
       V( lock );
       // Røyk
 }
