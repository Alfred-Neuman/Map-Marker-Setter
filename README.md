**Map Marker Setter** is a client side mod which allows you to save/load your map markers via ACE Self-Interactions when using the map.

The mod stores data locally in `profileNamespace` which means it stores configurations on a per player profile basis. This has the added side effect of requiring you to save a new configuration for each profile you make use of, but also ensures you can have different map marker configurations for different units etc.

<h2>CBA Settings</h2>

* **Enable:** If enabled, you will see the load and save options.
* **Ask Load Confirmation:** This setting will open a confirmation box when you try to load a profile. Handy for avoiding mistakes.
* **Ask Save Confirmation:** This setting will open a confirmation box when you try to save a profile. Handy for avoiding mistakes.
* **Ask Undo Confirmation:** This setting will open a confirmation box when you try to undo the last map marker load. Handy for avoiding mistakes.
* **Ask Delete Confirmation:** This setting will open a confirmation box when you try to delete a profile. Handy for avoiding mistakes.
* **Ask Overwrite Confirmation:** This setting will open a confirmation box when you try to overwrite a profile when importing/creating profiles. Handy for avoiding mistakes.
* **Icon Color in Messages:** This setting changes the color of the icon that is shown when you load/save/export a profile.

<h2>How to</h2>

* Use the "Create/Import Profile" interaction, which will open a dialog (window). In the top line you must give your profile a name and in the lower line you can give settings to a profile, but it's optional. This array is proprietary (see config.cpp in comment).
* Now you can save your current map markers using the "Save" interaction. When using the interaction, it will save all of your map markers.
* You can now load the saved profile using the "Load" interaction.
    
<h2>Links</h2>

* [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3222246129)
* [GitHub](https://github.com/johnb432/Map-Marker-Setter)

<h2>Credit</h2>

See AUTHORS.txt

<h2>License</h2>

See LICENSE.
