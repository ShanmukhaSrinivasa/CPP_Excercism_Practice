// ovenTime returns the amount in minutes that the lasagna should stay in the
// oven.
int ovenTime() {
    int time = 40;
    return time;
}

/* remainingOvenTime returns the remaining
   minutes based on the actual minutes already in the oven.
*/
int remainingOvenTime(int actualMinutesInOven) {
    // TODO: Calculate and return the remaining in the oven based on the time
    // the lasagna has already been there.
    int oventime = ovenTime();
    int remainingTime = oventime - actualMinutesInOven;
    return remainingTime;
}

/* preparationTime returns an estimate of the preparation time based on the
   number of layers and the necessary time per layer.
*/
int preparationTime(int numberOfLayers) {
    // TODO: Calculate and return the preparation time with the
    // `numberOfLayers`.
    int totalTime = numberOfLayers * 2;
    return totalTime;
}

// elapsedTime calculates the total time spent to create and bake the lasagna so
// far.
int elapsedTime(int numberOfLayers, int actualMinutesInOven) {
    // TODO: Calculate and return the total time so far.
    int prepTime = preparationTime(numberOfLayers);
    int result = prepTime + actualMinutesInOven;
    return result;
}
