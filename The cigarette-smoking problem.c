 do forever {
   P( lock );
      randNum = rand( 1, 3 ); // Pick a random number from 1-3
      if ( randNum == 1 ) {
         // Put tobacco on table
         // Put paper on table
         V( smoker_match );  // Wake up smoker with match
      } else if ( randNum == 2 ) {
         // Put tobacco on table
        // Put match on table
        V( smoker_paper );  // Wake up smoker with paper
      } else {
        // Put match on table
        // Put paper on table
        V( smoker_tobacco ); } // Wake up smoker with tobacco
      V( lock );
      P( agent );  //  Agent sleeps
     }  // end forever loop
// Code for the smokers//
    do forever {
       P( smoker_tobacco );  // Sleep right away
       P( lock );
       // Pick up match
       // Pick up paper
       V( agent );
       V( lock );
       // Smoke (but don't inhale).
 }
