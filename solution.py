def solution(N):
    # Step 1: Convert the positive integer to its binary representation
    binary_representation = bin(N)[2:]

    # Step 3: Initialize variables to keep track of gaps
    max_gap = 0
    current_gap = 0

    # Step 4: Loop through the binary representation
    for bit in binary_representation:
        # Step 5: Check if the current bit is '0'
        if bit == '0':
            # Step 6: Increment the current gap
            current_gap += 1
        else:
            # Step 7: If the current bit is '1', update maxGap and reset currentGap
            max_gap = max(max_gap, current_gap)
            current_gap = 0

    # Return the maximum binary gap
    return max_gap

# Example usage:
print(solution(1041))  # Output: 5
print(solution(32))    # Output: 0
