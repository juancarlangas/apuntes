Jack MIDI Example
=================
This is the first succesfull program wich connects to the Jack MIDI server. Thanks to God

```c++
#include <jack/jack.h>
#include <cstdio>

int process(jack_nframes_t nframes, void* arg)
{
    return 0;
}

int main()
{
    // Create a client name
    const char* clientName = "MIDI Client";

    // Open a connection to the JACK server
    jack_client_t* client = jack_client_open(clientName, JackNullOption, NULL);

    if (client == NULL) {
        // Failed to open client
        return 1;
    }

    // Create a MIDI output port
    jack_port_t* outputPort = jack_port_register(client, "output", JACK_DEFAULT_MIDI_TYPE, JackPortIsOutput, 0);

    if (outputPort == NULL) {
        // Failed to create output port
        jack_client_close(client);
        return 1;
    }

    // Set the process callback function
    jack_set_process_callback(client, process, 0);

    // Activate the client
    if (jack_activate(client) != 0) {
        // Failed to activate client
        jack_port_unregister(client, outputPort);
        jack_client_close(client);
        return 1;
    }

    // Wait for the user to exit the program
    getchar();

    // Deactivate, unregister, and close the client
    jack_deactivate(client);
    jack_port_unregister(client, outputPort);
    jack_client_close(client);

    return 0;
}
```
