function solution(N) {
    // Step 1: Convert the positive integer to its binary representation
    const binaryRepresentation = N.toString(2);

    // Step 2: Convert the binary representation to an array
    const binaryArray = binaryRepresentation.split('');

    // Step 3: Initialize variables to keep track of gaps
    let maxGap = 0;
    let currentGap = 0;

    // Step 4: Loop through the binary representation
    for (let i = 0; i < binaryArray.length; i++) {
        // Step 5: Check if the current bit is 0
        if (binaryArray[i] === '0') {
            // Step 6: Increment the current gap
            currentGap++;
        } else {
            // Step 7: If the current bit is 1, update maxGap and reset currentGap
            maxGap = Math.max(maxGap, currentGap);
            currentGap = 0;
        }
    }

    // Return the maximum binary gap
    return maxGap;
}

// Example usage:
console.log(solution(1041)); // Output: 5
console.log(solution(32));   // Output: 0
