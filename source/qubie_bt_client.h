// stub file for running qubie with a subscribed bluetooth client

#include "qubie_t.h"


//constructor
bt_client_t make_bt_client(bt_communicator_t *bt_communicator);


// ====================================================================
// @bon QUERIES
// ====================================================================

//long name to ensure it is not confused with qubie's method
bt_communicator_t bt_client_communicator();

//ack that a qubie state update has been received
bool received(state_t the_state);

// ====================================================================
// @bon COMMANDS
// ====================================================================
/*@ ensures received(the_state);
 *  TODO requires bt_client_communicator.bt_client==*me*
 */
void receive_state(state_t the_state);




