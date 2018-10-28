//
// Created by Francesco Racciatti on 26/10/2018.
//

package inet.attack.logger;

//
// Provides a logging service related to the attack events.
//
simple Logger {

parameters:
    string fileNameBase = default("attack.log");

    // Max bulk's size before storing data, if 0 data will be stored continuously
    int bulkSizeThreshold @unit(byte) = default(100kB);

gates:
    // From network nodes equipped with a Local Event Processor each
    input fromLocalEventProcessor[];

    // From the node Global Event Processor
    input fromGlobalEventProcessor;

}